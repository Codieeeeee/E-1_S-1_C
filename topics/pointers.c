#include<stdio.h>
#include<math.h>
void swap(int *p,int *q);
void main()
{/*
	int a=500;
	int *b=&a,*c;
	c=&*b;
	printf("%d\n",sizeof(*b));
	printf("%d\n",&a);
	printf("%d\n",b);
	printf("%d\n",&b);
	printf("%d\n",*b);
	printf("%d\n",++*b);
	printf("%d\n",*(++b));
	printf("%d\n",c);
	a=5;int d=6;
	swap (&a,&d);
	printf("%d %d",a,d);
	
	int arr[]={10,11,-1,56,67,5,4};
	int *p,*q;
	p=arr;
	q=&arr[0]+3;
	printf("%d  %d  %d\n",(*p)++,(*p)++,*(++p));
	printf("%d\n",*p);
	printf("%d\n",(*p)++);
	printf("%d\n",(*p)++);
	q--;
	printf("%d\n",(*(q+2))++);
	printf("%d\n",*(p+2)-2);
	printf("%d\n",*(p++-2)-1);
	
	int x=-11;
	int *o=&x;    //If we use const,it gives error
	*o=21;
	printf("%d",x);
	
	int x=-11;
	const int *o=&x;     
	printf("%d",x);
	
	
	int j[]={5,6,7,3};
	printf("%p  %p  %p\n",j,&j[0],&j);   //All are same
	printf("%p\n",&j[2]);
	
	int arr[ ]={1,2,3,4,5};
	int *ptr,i; 
	ptr=&arr[2];
	*ptr= 24;
	*(ptr+1)=0;
	*(ptr-1)=1; 
	for(i=0;i<5;i++)
		printf("%d  ",*(arr+i));
	
	int n,m,r,i=0,j,a[100],c=1;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Enter how many times to multiply:");
	scanf("%d",&m);
	while(n!=0){
		r=n%10;
		a[i]=r;
		i++;
		n=n/10;
	}
	for (j=0;j<=m;j++){
		i--;
		c=c*a[i];
	}
	printf("%d",c);
	for (j=i-1;j>=0;j--)
		printf("%d",a[j]); 
//String-pointer
	char j[]="siddhu";
	char *p=j;
	printf("%c\n",j[4]);
	printf("%c\n",4[j]);
	printf("%c\n",*(j+4));
	printf("%c\n",*(4+j));
	printf("%c\n",p[4]);
	printf("%c\n",4[p]);
	printf("%c\n",*(p+4));
	printf("%c\n",*(4+p));
	*/
	int n[]={3,5,6,7};
	int *m=n;
	printf("%d\n",n[2]);
	printf("%d\n",2[n]);
	printf("%d\n",*(n+2));
	printf("%d\n",*(2+n));
	printf("%d\n",m[2]);
	printf("%d\n",2[m]);
	printf("%d\n",*(m+2));
	printf("%d\n",*(2+m));
//	int n,num,m,ans=1,i=1,j,k,len;
//	printf("Enter a number:");
//	scanf("%d",&num);
//	n=num;
//	printf("Enter how many times to multiply:");
//	scanf("%d",&m);
//	while(n!=0){
//		n=n/10;
//		len++;
//	}
//	while (m>=0){
//		k=pow(10,len-i);
//		j=k%10;
//		ans*=j;
//		i++;
//		m--;
//	}
//	printf("%d",ans);
	
}
void swap(int *p,int *q)
{
	int t=*p;
		*p=*q;
		*q=t;
}
