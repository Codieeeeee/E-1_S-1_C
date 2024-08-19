#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char admin_id[10],admin_password[9];
int encode_aid[20],len=0;
int parking_slots[9][13];
static int x=1,y=1,z=12,Y=1,Z=2;
char details[10][9];
void user_id ();
void password ();
void confirm_password ();
void login ();
void portal ();
void Details ();
int main ()
{
    //USER-ID
    printf("~~~~~Hai....!!admin\n~~~~~First you need to register and then login to use this portal\n");
    printf("-------------------------------------------WELCOME TO REGISTRATION PAGE----------------------------------------------\n");
    user_id ();
}
void user_id ()
{
    len=0;
    printf("NOTE:\n>>>User ID maximum length is 10\n");
    printf("SET USER-ID: ");
    scanf("%s",admin_id);
    len=strlen(admin_id);
    if (len>10){
        printf("!!!!!Please set valid User-ID  by following below 'NOTE'\n");
        user_id ();
    }
    else{
        int i,j;
        for (i=0,j=1;i<len,j<(2*len);i++,j+=2){
            encode_aid[j]=admin_id[i]%7;
            encode_aid[j+1]=admin_id[i]/7;
        }
        password ();
    }
}
//PASSWORD
void password ()
{
    printf("NOTE:\n>>>Password minimum length is 6 and maximum length is 9\n");
    printf(">>>Password must contain at least one lower case,one upper case,one digit and one special character\n");
    int lng,i,sm=0,cp=0,dg=0,sp=-1;
    printf("SET PASSWORD: ");
    scanf("%s",admin_password);
    lng=strlen(admin_password);
    if (lng>=6 && lng<=9){
        for (i=0;i<=lng;i++){
            if (admin_password[i]>='a' && admin_password[i]<='z')
                sm++;
            else if (admin_password[i]>='A' && admin_password[i]<='Z')
                cp++;
            else if (admin_password[i]>='0' && admin_password[i]<='9')
                dg++;
            else
                sp++;
        }
        if (sm>=1 && cp>=1 && dg>=1 && sp>=1) confirm_password ();
        else {
            printf("!!!!!Please set the password by following below 'NOTE'\n");
            password ();
        }
    }
    else {
        printf("!!!!!Please set the password by following below 'NOTE'\n");
        password ();
    }
}
void confirm_password ()
{
    char conf_pw[10];
    int comp;
    printf("CONFIRM PASSWORD: ");
    scanf("%s",conf_pw);
    comp=strcmp(admin_password,conf_pw);
    if (comp==0) login ();
    else{
        printf("!!!!!Re-password is not matched with your entered password,please again confirm your password\n");
        confirm_password ();
    }
}
void login ()
{
    printf("-------------------------------------------WELCOME TO LOGIN PAGE-------------------------------------------\n");
    char check_aid[10],check_pw[9];
    int compare_id,compare_pw;
    printf("USER-ID:");scanf("%s",check_aid);
    printf("PASSWORD:");scanf("%s",check_pw);
    compare_id=strcmp(admin_id,check_aid);
    compare_pw=strcmp(admin_password,check_pw);
    if (compare_id==0 && compare_pw==0){
        printf("***LOGIN SUCCESSFUL\n");
        portal ();
    }
    else{
        printf("!!!!!User-Id or password is wrong\n");
        login();
    }
}
void portal ()
{
    printf("------------------------------------------WELCOME TO RGUKT PARKING PORTAL------------------------------------------\n");
    printf("***Your User-ID ---> %s\n",admin_id);
    printf("***Your encoded User ID ---> ");
    int k,l;
    for (k=1;k<=len*2;k++)
        printf("%d",encode_aid[k]);
    printf("\n***Your Password ---> %s\n",admin_password);
    printf("NOTE:'0'--->Free slots  '1'--->Filled slots\n>>>PARKING SLOTS\n");
    if (x==1){
	    for (k=1;k<=8;k++){
	        for (l=1;l<=12;l++){
	            parking_slots[k][l]=0;
	            printf("%2d ",parking_slots[k][l]);
	        }
	        printf("\n");
	    }
	}
	else{
		for (k=1;k<=8;k++){
        	for (l=1;l<=12;l++)
            	printf("%2d ",parking_slots[k][l]);
        	printf("\n");
    	}
	}
	
    printf("\n");
    printf("***READ INSTRUCTIONS CAREFULLY\n");
    printf("--->INSTRUCTIONS:\n");
    printf("***You need to enter your details in ABCDEF format where each letter represents one of your details.\n");
    printf(">>>'A'--->Type of vehicle ('2'-->Two wheeler and '4'-->Four wheeler)\n");
    printf(">>>'B'--->Having helmet or nor ( ('Y' or 'y')-->yes and ('N' or 'n')-->No\n");
    printf(">>>'C'--->Gender( ('B' or 'b')-->Boy and ('G' or 'g')-->Girl\n");
    printf(">>>'D'--->First alphabet of your name\n");
    printf(">>>'E'--->Age\n");
    printf(">>>'F'--->Time duration of parking(24-hour format)\n");
    printf("***EXAMPLE: 2yBs1804 means 2 wheeler vehicle having helmet, boy named Siddhu of age 18 and 4 hours of parking\n");
    Details ();
}
void Details ()
{
    printf("\n>>>>>ENTER YOUR DETAIS:");
    scanf("%s",details[x]);
    if(strlen(details[x])>8){
    	printf("!!!!!Entered details are not valid,please enter details by following the above given instructions\n");
    	Details ();
	}
    int i,j,k;
	char Time[2];
    for (i=0;i<8;i++){
        if (i==0){
            if (details[x][i]=='2' || details[x][i]=='4') continue;
            else{
                printf("!!!!!Entered details are not valid,please enter details by following the above given instructions\n");
                Details ();
            }
        }
        else if(i==1){
            if (details[x][i]=='y' || details[x][i]<='Y' || details[x][i]=='n' || details[x][i]=='N') continue;
            else{
                printf("!!!!!Entered details are not valid,please enter details by following the above given instructions\n");
                Details ();
            }
        }
        else if (i==2){
            if (details[x][i]=='b' || details[x][i]=='B' || details[x][i]=='g' || details[x][i]=='G') continue;
            else{
                printf("!!!!!Entered details are not valid,please enter details by following the above given instructions\n");
                Details ();
            }
        }
        else if (i==3){
            if ((details[x][i]>='a' && details[x][i]<='z') || (details[x][i]>='A' && details[x][i]<='Z')) continue;
            else{
                printf("!!!!!Entered details are not valid,please enter details by following the above given instructions\n");
                Details ();
            }
        }
        else if (i==4){
            if (details[x][i]>='2' && details[x][i]<='9') continue;
            else{
                printf("!!!!!Entered details are not valid,please enter details by following the above given instructions\n");
                Details ();
            }
        }
        else if (i==5){
            if ((details[x][i]>='1' && details[x][i]<='9') || (details[x][i-1]!='2' && details[x][i]>='0' && details[x][i]<='9')) continue;
            else{
                printf("!!!!!Entered details are not valid,please enter details by following the above given instructions\n");
                Details ();
            }
        }
        else if (i==6){
            if (details[x][i]>='0' && details[x][i]<='2'){
            	Time[0]=details[x][i];
				continue;
			} 
            else{
                printf("!!!!!Entered details are not valid,please enter details by following the above given instructions\n");
                Details ();
            }
        }
        else{
            if ((details[x][i]>='1' && details[x][i]<='9') || (details[x][i-1]!='0' && details[x][i]>='0' && details[x][i]<='9')) {
            	Time[1]=details[x][i];
				continue;
			}
            else{
                printf("!!!!!Entered details are not valid,please enter details by following the above given instructions\n");
                Details ();
            }
        }
    }
    printf("===>YOUR DETAILS:\n");
    printf("--->Vehicle type: %c wheeler\n",details[x][0]);
    printf("--->Helmet: ");
    if (details[x][1]=='Y' || details[x][1]=='y') printf("Yes\n");
    else printf("No\n");
    printf("--->Gender: ");
    if (details[x][2]=='B' || details[x][2]=='b') printf("Boy\n");
    else printf("Girl\n");
    printf("--->Name starts with: %c\n",details[x][3]);
    printf("--->Age: %c%c\n",details[x][4],details[x][5]);
    printf("--->Time duration of parking: %c%c hours\n",details[x][6],details[x][7]);
    if (details[x][0]=='2'){
        parking_slots[Y][y]=1;
        y++;
        if (y>12){
            Y+=2;y=1;
        }
    }
    else{
        parking_slots[Z][z]=1;
        z--;
        if (z<1){
            Z+=2;z=12;
        }
    }
    //Bill
    int time=atoi(Time);
    int actual_cost=0,extra_charge=0,tax_cost=0,bill=0;
    static int profit=0;
    if (details[x][0]=='4'){
    	actual_cost=time*50;
    	if (actual_cost<=50) tax_cost=actual_cost;
    	if (actual_cost>50 && actual_cost<=150) tax_cost=actual_cost*0.07;
    	else tax_cost=actual_cost*0.28;
    	bill=actual_cost+tax_cost;
    	printf("\n--->Actual cost: %d\n",actual_cost);
    	printf("--->Tax cost: %d\n",tax_cost);
    	printf("--->Extra charges: %d\n",extra_charge);
    	printf("===>TOTAL BILL: %d (",bill);
	}
	else{
		actual_cost=time*25;
		if (actual_cost<=50) tax_cost=actual_cost;
    	if (actual_cost>50 && actual_cost<=150) tax_cost=actual_cost*0.07;
    	else tax_cost=actual_cost*0.28;
    	if (details[x][1]=='n' || details[x][1]=='N') extra_charge+=50;
    	profit+=extra_charge;
    	bill=actual_cost+tax_cost+extra_charge;
    	printf("\n--->Actual cost: %d\n",actual_cost);
    	printf("--->Tax cost: %d\n",tax_cost);
    	printf("--->Extra charges: %d\n",extra_charge);
    	printf("===>TOTAL BILL: Rs.%d (",bill);
	}
	int Bill=bill;
	int bill_array[10],c=0,d;
	while (bill>0){
		bill_array[c]=bill%10;
		bill/=10;
		c++;
	}
	for (d=c-1;d>=0;d--){
		switch (bill_array[d])
		{
			case 0:
				printf(" zero");break;
			case 1:
				printf(" one");break;
			case 2:
				printf(" two");break;
			case 3:
				printf(" three");break;
			case 4:
				printf(" four");break;
			case 5:
				printf(" five");break;
			case 6:
				printf(" six");break;
			case 7:
				printf(" seven");break;
			case 8:
				printf(" eight");break;
			case 9:
				printf(" nine");break;
		}
	}
	printf(" only )\n");
	while(1){
		int amount;
		printf("\n===>PAY AMOUNT: ");
		scanf("%d",&amount);
		if (amount>Bill){
			printf("===>CHANGE: Rs.%d\n",amount-Bill);
			break;
		}
		else printf("!!!!!Paid amount is less than total bill,take this amount and pay full amount.\n");
	}
	char logout;
	printf("\n>>>If you want to logout, press '~' otherwise press any key: ");
	scanf("%s",&logout);
	if (logout!='~'){
		x++;
		portal ();
	}
	else{ 
		printf("***LOGOUT SUCCESSFUL\n");
		printf("===>ENTIRE DAY PROFIT: Rs.%d\n",profit);
		char check;
	    printf("\nIf you want to check whether particular slot is full or not,press '?' otherwise press any key: ");
		scanf("%s",&check);
		if (check=='?'){
			while (1){
				int row,col;
			    printf("\n>>>Enter the row number you want to check: ");
				scanf("%d",&row);
				printf(">>>Enter the column number you want to check: ");
			    scanf("%d",&col);
				if (row<1|row>8||col<1||col>12){
					printf("!!!!!Entered slot is not valid in this portal,please enter the valid slot\n"); 
				}
				else{
					if(parking_slots[row][col]==0){
						printf("--->Entered slot is not full\n");
						break;
					} 
					else{
						printf("--->Entered slot is full\n");
						break;
					}
				}
			}
		}
		int parking_90[13][13],parking_180[13][13],parking_270[13][13];
		printf("\n>>>>PARKING SLOTS(0 degree)\n");
		for (j=1;j<=8;j++){
        	for (k=1;k<=12;k++)
            	printf("%2d ",parking_slots[j][k]);
        	printf("\n");
    	}
		printf("\n>>>>PARKING SLOTS(90 degree)\n");
		register int j,k,m;
		for (j=1,m=12;j<=12,m>0;j++,m--){ 
	        for (k=1;k<=8;k++){
	        	parking_90[j][k]=parking_slots[k][m];
	            printf("%2d ",parking_90[j][k]);
	        }
	        printf("\n");
	    }
		printf("\n>>>>PARKING SLOTS(180 degree)\n");
		for (j=1,m=8;j<=8,m>0;j++,m--){ 
	        for (k=1;k<=12;k++){
	        	parking_180[j][k]=parking_90[k][m];
	            printf("%2d ",parking_180[j][k]);
	        }
	        printf("\n");
		}
		printf("\n>>>>PARKING SLOTS(270 degree)\n");
		for (j=1,m=12;j<=12,m>0;j++,m--){ 
		    for (k=1;k<=8;k++){
		        parking_270[j][k]=parking_180[k][m];
		        printf("%2d ",parking_270[j][k]);
		    }
	    	printf("\n");
		}
	}
}




