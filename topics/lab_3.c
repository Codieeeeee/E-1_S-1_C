#include<stdio.h>
int main()
{
/*{
	int m,n,i,k;
	printf("Enter the table:");
	scanf("%d",&m);
	printf("Enter the number upto which you need table:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=m*i;
		printf("%d * %d = %d\n",m,i,k);
	}
	printf("************************************************\n");
	i=1;
	while(i<=n)
	{
		k=m*i;
		printf("%d * %d = %d\n",m,i,k);
		i=i+1;
	}
	printf("************************************************\n");
	i=1;
	do{
		k=m*i;
		printf("%d * %d = %d\n",m,i,k);
		i=i+1;
      }while(i<=n);
      printf("************************************************\n");

}
{
    int N,sum=0;
    for( ; ;)
    {
    	printf("Enter the number:");
    	scanf("%d",&N);
    	if(N>1000)
    	break;
    	sum=sum+N;
    } 
    printf("Sum is %d\n",sum);
    sum=0;
    while(1)
    {
    	printf("Enter a number:");
    	scanf("%d",&N);
    	if (N>1000)
    	break;
    	sum=sum+N;
	}
	printf("Sum is %d\n",sum);
	sum=0;
	do{printf("Enter a number:");
	    scanf("%d",&N);
		if (N>1000)
		break;
		sum=sum+N;
	}while(1);
	printf("Sum is %d\n",sum);
}	
{
	int girls,boys;
	printf("Enter number of girls:");
	scanf("%d",&girls);
	printf("Enter number of boys:");
	scanf("%d",&boys);
	if(girls>0&&boys>0)
	{
		if(girls>boys)
			printf("Girls are more compared to boys\n");
		else if(girls<boys)
			printf("Girls are less compared to boys\n");
		else
			printf("Girls are equal to boys\n");
    }
    else
    	printf("please enter correctly\n");
    	
	(girls>=0&&boys>=0)?((girls>boys)?printf("Girls are more compared to boys\n"):printf("Girls are less compared to boys\n")):printf("please enter correctly\n");
}

char a[100]; 
 char b[100]; 
 char f[100]; 
 char r[7]="FLAMES"; 
 char y[100]; 
 int c,i,j,e,d,k,g,sum,l,temp;
 printf("Enter first name:"); 
 gets(a); 
 printf("Enter second name:");
 gets(b); 
 strcpy(f,b); 
 c=strlen(a); 
 e=strlen(b); 
 if(c>e) 
 	d=c;
 else 
	 d=e; 
 for(i=0;i<d;i++) 
 { 
 	for(j=0;j<d;j++) 
 	{ 
 		if(a[i]==b[j]) 
			 b[j]=' ';  
	 } 
 } 
 g=0; 
 for(i=0;i<e;i++) 
 { 
	 if(b[i]!=' ') 
 		g=g+1; 
 } 
 for(i=0;i<d;i++) 
 { 
 	for(j=0;j<d;j++)
	{ 
 		if(f[i]==a[j])  
			 a[j]=' ';  
	 } 
 } 
 k=0; 
 for(i=0;i<c;i++) 
 { 
 	if(a[i]!=' ') 
		 k=k+1; 
 } 
 sum=k+g;  
 c=strlen(r); 
 while(c!=0)
{ 
 	if(sum%c==0)  
		 j=c;  
	 else 
		j=sum%c;
	for(i=j-1;i<c-1;i++) 
 	{ 
 		temp=r[i]; 
		 r[i]=r[i+1]; 
 		r[i+1]=temp; 
	 } 
	 c--; 
 } 
 printf("%c",r[c]);*/ 
 //FABONACCI
	int a=0,b=1,n,c,i,k=2,m;
	printf("Enter how many numbers you want:");
	scanf("%d",&n);
	printf("Enter the number(multiples) at which you don't want printing");
	scanf("%d",&m);
	if (n<=0)
		printf(" ");
	else if (n==1)
		printf("%d",a);
	else if(n==2)
		printf("%d",b);
	else
	{
		printf("%d  %d  ",a,b);
		for(i=3;k!=n;i++)
		{
			c=a+b;
			if (i%m==0);
			else
			{
				printf("%d  ",c);
				k++;
			}
			a=b;
			b=c;
		}
	}
	
}




