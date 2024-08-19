#include<stdio.h>
#include<math.h>
#include<string.h>
//int main()   //Here int is return type
//{
///*
//	printf("siddhartha\n");
//	
//	int a=5;
//	int b=4;   //Here int is data type
//	int c=a+b;
//	printf("The sum is %d\n",c);
//	printf("The addition of %d and %d is %d \n",a,b,c);
//	
//	int age;
//	printf("Enter your age:");
//	scanf("%d",&age);
//	printf("Your age is: %d",age);
//	
//	int i,j,k;
//	printf("Enter two numbers \n");
//	scanf("%d",&i);
//	scanf("%d",&j);
//	k=i+j;
//	printf("The addition of %d and %d is %d \n",i,j,k);
//	
//	int x,y,z;
//	printf("Enter two numbers \n");
//	scanf("%d %d",&x,&y);
//	z=x+y;
//	printf("The addition of %d and %d is %d \n",x,y,z);
//	z=x-y;
//	printf("The subtraction of %d and %d is %d \n",x,y,z);
//	z=x*y;
//	printf("The multiplication of %d and %d is %d \n",x,y,z);
//	z=x/y;
//	printf("The division of %d and %d is %d \n",x,y,z);
//
//	int a=4,b=3 ;
//	a+=6;
//	b%=5;
//	printf("%d \n %d",a,b);
//
//	
//	
//	int a=5 , b=6 ,k;
//	k= a>b?a:b;
//	printf("%d",k);
//
//	int a=-5;        //we can't use modulus operator for float
//	int b=-4 ;
//	int k=a%b;
//	printf("%d",k);
//	 
//	int a=4,b,c,d;
//	b=a++;
//	c=++a;
//	d=a++;
//	printf("%d",a);    //7
//	
//	int a,b,c;
//	printf("enter 3 numbers:\n");
//	
//	scanf("%d",&a);
//	scanf("%d",&b);
//	scanf("%d",&c);
//	if((a>b)&&(a>c))
//	{
//		printf("Greatest number is %d",a);
//	}
//	else if(b>c)
//	{
//		printf("Greatest number is %d",b);
//	}
//	else
//	{
//		printf("Greatest number is %d",c);
//	}
//	printf("%f",fabs(-2.8));
//	
//	int a=2,b=3;
//	if (!((a<2)&&(b/3==0)))
//		printf("Today monday\n");
//	else
//		printf("Today friday\n");
//	
//	if (!(a<2)||!(b/3==0))
//		printf("Today monday\n");
//	else
//		printf("Today friday\n");
//	
//	int a=5,b=0;
//	if (a++||++b){
//		if (--b||a++)
//			printf("%d %d",a,b);
//	}
//	
//	int x=6;
//	printf("%d %d %d %d ",x++,x--,--x,++x);
//	*/
//	
//	return 0;
//}
void swap(char* p1,char *p2)
 {
     char temp=*p1;
     *p1=*p2;
     *p2=temp;
 }
char* decryptPassword(char* s) {
    char ch=*s;int i=0,j=0,k=-1;
    while(ch!='\0')
    {
        if(ch=='0'){
            *(s+i)=*(s+k);
            j=k;
            while(*(s+j)!='\0'){
                *(s+j)=*(s+j+1);
                j++;
            }
            k--;
        }
        else if(ch>='a' && ch<='z'){
            swap(s+i,s+i+1);
            i+=2;j=i;
            while(*(s+j)!='\0'){
                *(s+j)=*(s+j+1);
                j++;
            }
        }
        else {
    		k++;
        	i++;
        }
        ch=*(s+i);
    }
    return s;
}
int main()
{
    char encryptPassword[1000];
    scanf("%s",encryptPassword);
    printf("%s",decryptPassword(encryptPassword));
}

