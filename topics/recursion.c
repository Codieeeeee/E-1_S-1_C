#include<stdio.h>
int fib(int,int,int);
int Fib(int);
float sum(float);
int series(int);
void main ()
{
	//printf("%f",sum(4));
	//printf("%d",series(3));
//	int n=5;
//	printf("%d\t%d\n",n++,n--,n++,n++,n--,--n,n++,++n);
//	printf("%d\n",n);
//	fun(--n,++n);
//	fun(++n,n--);
//	printf("%d\n",n);  	
Fib(10);
}
int series(int n)
{
	static int i=1,l=1;
	if (n==0) return 0;
	else{
		int j=1,k,p=i;
		for (k=i;k<l+p;k++){
			j=j*k;
			i++;
		}
		l++;
		return j+series(n-1);
	}
}
float sum(float n)
{
	if (n==1) return 1;
	else return (1/n)+sum(n-1); ;
}
int fun(int x,int y)
{
	printf("%d\n%d\n",x++,y--);

}
int fib(int n,int a,int b)
{
	if (n==1) return a;
	else{
		return fib(n-1,b,a+b);
	}
}
int Fib(int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	else{
		printf("%d\n",Fib(n-1)+Fib(n-2));
	}
}

