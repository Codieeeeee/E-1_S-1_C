#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
//	printf("I'm\tSiddhu\n");  //horizontal tab space  and new line
//	printf("I'm\bSiddhu\n");  //backspace
//	printf("I'm\vSiddhu\n");  //vertical tab space(It is not working)
//	printf("I'm\aSiddhu\n");  //Beep sound for alert
	/*printf("I'm\rSiddhu\n");    //carriage return(Moves the cursor to the beginning of the current line)
	printf("I'm\\Siddhu\n");    //print '\'
	printf("I'm\0Siddhu");    //Null character
	int abcd__efghijklmnopqrstuvwxyzabcdefghij=23;
	printf("\n%d\n",abcd__efghijklmnopqrstuvwxyzabcdefghij);
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);n
	//printf("%d\n",5++);     //error
	printf("%d\n",~4);
	int x=6;
	printf("%d %d %d %d ",x++,x--,--x,++x);
	float k=7.9;
	printf("%d\n",k);
	//char m="a";  //Not correct
	//printf("%c",m);
	//printf("%c%c%s",'I',8,"you");
	float k=5.123454590;
	printf("%f",k);
	printf("%d",sizeof(float))
	int j=327770;
	printf("%d",j);
	printf("%d",sizeof(long int));
int i,j;
for (i=0;i<5;i++){
	for(j=0;j<10;j++){
		if ((i==0||i==4) && (j!=0 && j!=9))
			printf("*");
		else if ((j==0||j==9) && (i!=0 && i!=4))
			printf("!");
		else 
			printf(" ");
	}
	printf("\n");
}
int r,i,j,k;
printf("Enter no.of rows:");
scanf("%d",&r);
for (i=0;i<r;i++){
	for (j=0;j<r;j++){
		if (j<r-i-1)
			printf("  ");
		else
			printf("* ");
	}
	printf("\n");
}
unsigned long int n=400,j=0,sum=0,i;
for (i=n;i>1;i=i/2) j++;
for (;j>1;j=j/2) sum++;
printf("%d",sum);
//char g[] ="";printf("%d",sizeof(getchar()));
char str[]="siddhu,ravi,akhil,revi";
char *k=strtok(str,',');
printf("%s",k);
int a[]={1,2,3,4};
printf("%d",*(&a+1));
*/
float a,b;
printf("Enter value of a:");
scanf("%f",&a);
printf("Enter value of b:");
scanf("%f",&b);
if (pow(a+b,2)==(pow(a,2)+pow(b,2)+2*a*b))
	printf("True");
else
	printf("False");
}
