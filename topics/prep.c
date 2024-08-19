#include<stdio.h>
int divison (int num,int n)
{
	//static int var=0;
	if (num<n){
		//printf("%d\n",num);
		return 0;
	}
	else{
		//var++;
		return 1+divison(num-n,n);
	}
	
}
int print(int n,int c)
{
	static int i=1;
	if (c==0)
		return;
	else{
		int j=i;
		while(j>0){
			printf("%d",n);
			j--;
		}
		i++;
		if (--c!=0)
			printf(",");
		print(n,c);
	}
}
void main()
{
	print(7,5);
//	int dnd,div;
//	printf("Enter the dividend:");
//	scanf("%d",&dnd);
//	printf("Enter the divisor:");
//	scanf("%d",&div);
//	printf("%d",divison(dnd,div));

//char i='\123';
//printf("%d ",i);
}
