#include<stdio.h>
#include<string.h>
void Registration();
void Login ();
void Deletion();
char UID[15][8];
char password[15][11];
int Del_sid[15];
static int serial_id[15];
void main()
{
	Registration ();
}
	void Registration()
	{
		int l,i,j,len,c;
		char pro,uid[8];;
		printf("===>Registration(R)\n===>Login(L)\n===>Deletion(D)\n===>Exit(E)\n");
		while(1)
		{
			printf("Enter which process do you want(Example: R for Registration):");
			scanf("%s",&pro);
			if (pro=='R' || pro=='L' || pro=='D' || pro=='E')
				break;
		}
		switch (pro)
		{
			case 'R':
				//User ID
				while(1)
				{
					printf("Enter User-ID: ");		
					scanf("%s",uid);
					len=strlen(uid);
					int u=0;
					if ((uid[0]=='n'|| uid[0]=='N') && uid[1]=='2' && uid[2]=='0' && len==7)
					{
						for (i=3;i<len;i++)
						{
							if (uid[i]>='0' && uid[i]<='9')
								u++;
						}
						if (u==4)
							break;
						else
							printf("!!!!!User-ID is wrong,please enter again\n");
					}
					else
						printf("!!!!!User-ID is wrong,please enter again\n");
				}
				//Password
				printf("NOTE:\n>>>Password minimum length is 6 and maximum length is 9\n");
				printf(">>>Password must contain atleast one lower case,one upper case,one digit and one special character\n");
				char pw[10];
				int lng;
				while(1)
				{
					int sm=0,cp=0,dg=0,sp=-1;
					printf("Enter password: ");
					scanf("%s",pw);
					l=strlen(pw);
					lng=l;
					if (l>=6 && l<=9)
					{
						for (i=0;i<=l;i++)
						{
							if (pw[i]>='a' && pw[i]<='z')
								sm++;
							else if (pw[i]>='A' && pw[i]<='Z')
								cp++;
							else if (pw[i]>='0' && pw[i]<='9')
								dg++;
							else
								sp++;
						}
						if (sm>=1 && cp>=1 && dg>=1 && sp>=1)
							break;
						else
							printf("!!!!!please set strong password by following above 'NOTE'\n");
					}
					else
						printf("!!!!!please set strong password by following above 'NOTE'\n");
				}
				//Confirming password
				while(1)
				{
					int co_l,c=0;
					char co_pw[10];
					printf("Confirm password: ");
					scanf("%s",co_pw);
					co_l=strlen(co_pw);	
					for (i=0;i<co_l;i++)
					{
						if (pw[i]!=co_pw[i])
							c++;
					}
					if (c==0)
						break;
					else
						printf("!!!!!Re-password is not matched with your entered password,please again confirm your password\n");
				}
				//Phone number
				char pho_no[11];
				while(1)
				{
					int c=0;
					printf("Enter phone number: ");
					scanf("%s",pho_no);
					l=strlen(pho_no);
					if ((pho_no[0]=='7' ||  pho_no[0]=='8' ||  pho_no[0]=='9') && l==10 ) 
					{
						for (i=3;i<=l;i++)
						{
							if (pho_no[i]>='0' && pho_no[i]<='9')
								c++;
						}
						if (c==7)
							break;
						else
							printf("!!!!!Your phone number is not valid,please enter correct phone number\n");
					}
					else
						printf("!!!!!Your phone number is not valid,please enter correct phone number\n");
				}
				//E-mail
				char mail[50];
				int em=1;
				while (em)
				{
					printf("Enter E-mail: ");
					scanf("%s",mail);
					len=strlen(mail);
					for (i=0;i<len;i++)
					{
						if (mail[i]=='@')
						{
							if (i>=3 )
							{
								char m[14]={"@rguktn.ac.in"};
								j=1;
								c=0;
								while(j<15)
								{
									if (m[j-1]==mail[i])
									{
										j++;
										i++;
										c++;
									}
									else
										break;
								}
								if (c==14)
									em=0;
							}
						}	
					}
				}
				//Generating serial ID and Storing along with password  
				static int sid=101;
				int r;
				r=sid%15;
				serial_id[r]=sid;	
				int py;
				for (py=0;py<=lng;py++)
				{
					password[r][py]=pw[py];
				}
				//Storing User ID along with serial ID
				int u=0;
				for (u=0;u<15;u++)
				{
					UID[r][u]=uid[u];
				}
				printf("\n>>>>>Registration successful\n");
				printf("USER-ID: %s\n",uid);
				printf("PASSWORD: %s\n",pw); 
				printf("PHONE NUMBER: %s\n",pho_no);
				printf("E-MAIL: %s\n",mail);
				printf("******Your SERIAL-ID is: %d\n",sid);
				sid++;
				printf("_________________________________________________________THANK YOU_________________________________________________________\n");
				Registration ();
 				break;
			case 'L':
				Login ();
				break;
			case 'D':
				Deletion();
				break;
			case 'E':
				printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>THANK YOU-VISIT AGAIN>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
		}
	}
	void Login ()
	{
		int id,r1;
		char p[10];
		printf("Enter your SERIAL-ID: ");
		scanf("%d",&id);
		r1=id%15;
		printf("Enter your PASSWORD: ");
		scanf("%s",p); 
		if (id!=serial_id[r1])
		{
			printf("!!!!!You are not registered.Please register and then login\n");
			Registration ();
		}
		else
		{
			int cmp;
			char log;
			cmp=strcmp(p,password[r1]);
			if (cmp==0)
			{
				if (Del_sid[r1]==id)
				{
					printf("Invalid user\n");
					Registration ();
				}
				else
				{
					printf("Login successful for USER-ID %s\n",UID[r1]);
					printf("===>Logout(~)\n");
					printf("If you want to logout enter '~',otherwise enter any key: ");
					scanf("%s",&log);
					if (log=='~')
					{
						printf(">>>>>Logout successful\n");
						Registration ();
					}
					else
						Registration ();
				}
			}
			else
			{
				printf("!!!!!!Password is incorrect\n");
				Registration ();
			}
		}
	}
	void Deletion ()
	{ 
		int id,r1;
		char p[10];
		printf("Enter your SERIAL-ID: ");
		scanf("%d",&id);
		r1=id%15;
		printf("Enter your PASSWORD: ");
		scanf("%s",p); 
		if (id==serial_id[r1])
		{
			int cmp;
			cmp=strcmp(p,password[r1]);
			if (cmp==0)
			{
				Del_sid[r1]=id;
				printf(">>>>>Your account is deleted.\n");
				Registration ();
			}
			else
			{
				printf("!!!!!You are not registered or password is wrong\n");
				Registration ();
			}
		}
	}
