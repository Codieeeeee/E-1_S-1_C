/*
#include<stdio.h>
int age();
int main()
{
	printf("Siddhu");
	printf("%d",age());
}
int age()
{
	int n;
	printf("\nEnter your age:");
	return ;
	scanf("%d",&n);
	printf("%d\n",n);
	return n;
}

#include<stdio.h>
void main( )
{
 int x=24;
 extern int y;
 printf("x=%d\n",x);
 printf("y=%d\n",y);
}

int y=0;
#include<stdio.h>
#include"file6.c"
void add( );
void sub( );
void mul( );
void div( );
void rem( );
void main( )
{
 extern int a,b;
 add( );
 sub( );
 mul( );
 div( );
 rem( );
}

#include<stdio.h>
int fact(int n);
void main()
{
	int n,factorial;
	printf("Enter a number:");
	scanf("%d",&n);
	factorial=fact(n);
	printf("%d",factorial);
}
int fact(int n)
{
	int factorial;
	if (n==0)
		return 1;
	else
	factorial=n*fact(n-1);
	return factorial;
}

#include<stdio.h>
int fib(int,int,int);
int main()
{
	int n,a=0,b=1;
	printf("Enter a number :");
	scanf("%d",&n);
	printf("The fibbonacci series of %d numbers ends with %d ",n,fib(n,a,b));
	return 0;
}
fib(int n,int a,int b)
{
	if(n==1)
		return a;
	if(n==1)
		return b;
	return fib(n-1,b,a+b); // tail recursion.
}


#include<stdio.h>
void fun(int,int);
void main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	fun(--n, n++);
	fun(++n, n--);
	printf("%d\n",n);
}
void fun(int x,int y)
{
	printf("%d \n %d",x++ ,y--);
}

#include<stdio.h>
int get(int n);
int even(int n);
void main()
{
	get(6);
	even (2);
}
int get(int n)
{
	if (n<1) return 1;
	else{
		get(n-1);
		get(n-3);
		printf("%d",n);
	}
}

#include<stdio.h>
int even(int n);
int odd(int n);
void main()
{
	even (2);
}
int even(int n)
{
	if (n<=10){
		printf("%d ",n);
		n--;
		odd(n);
	}	
}
int odd(int n)
{
	if (n<=10){
		printf("%d ",n);
		n+=3;
		even(n);
	}	
}

#include<stdio.h>
#include"file6.c"
void main() 
{
	extern int a; 
	{
		int j;
		printf("%d\n",j);
	}
	{
		printf("%d",a); 
		a=89;
	}
		a=56;
}

//Reversing array using pointers
#include<stdio.h>
int main(){
	int a[]={4,5,6,7,8,9,0},i;
	int len=sizeof(a)/4;
	fun(&a,len);
	for (i=0;i<len;i++)
		printf("%d  ",a[i]);
	return 0;
}
int fun (int *p,int len)
{
	int i,j=len-1,t;
	for (i=0;i<len/2;i++){
		t=p[i];
		p[i]=p[j];
		p[j]=t;
		j--;
	}	
}
*/
#include<stdio.h>
int  main(){
	int a[][3]={{1,2,3}, {4,5,6}};
	int *p=a[1];
	printf("%d",*p);
	return 0;
}
















