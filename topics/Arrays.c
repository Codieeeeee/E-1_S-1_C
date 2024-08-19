#include<stdio.h>
int Reverse_array();
int  main()
{ 
/*	int b[5],i;        //prints garbage value
	for ( i=0;i<5;i++)
		printf("%d\n",b[i]); 
	int c[10]={3,5,4};
	printf("%d",c[8]);
//BINARY SEARCH
	int arr[10],i,n,check,high,low,mid,c=0;
	printf("Enter no.of elements in the array:");
	scanf("%d",&n);
	printf(">>>Enter elements in sorted order\n");
	for (i=0;i<n;i++){
		printf("Enter element %d",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be checked:");
	scanf("%d",&check);
	low=0;high=n-1;
	while(high>=low){
		mid = (high+low)/2;
		if (check==arr[mid]){
			printf("Number is found at index position %d:",mid);
			c+=1;
			break;
		}
		else if(check>arr[mid]){
			low=mid+1;
		}
		else if (check<arr[mid]){
			high=mid-1;
		}
	}
	if (c==0) printf("Element is not found");
 
int Reverse_array()
{
	Reverse_array();
	int n;
	printf("Enter no.of elements in the array:");
	scanf("%d",&n);
	int a[n],i,b[n];
	for (i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		b[i]=a[n-(i+1)];
	}
	printf("\n");
	for (i=0;i<n;i++)
		printf("%d ",b[i]);
}

//selection_sort
	int n,i,j;
	printf("Enter no.of elements:");
	scanf("%d",&n);
	int a[n],min_num_index,temp;
	for (i=0;i<n;i++){
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Elements before sorting: ");
	for (i=0;i<n;i++)
		printf("%d  ",a[i]);
	int x,y,t;
	for(x=0;x<n-1;x++)
	{
		for (y=0;y<(n-x-1);y++)
		{
			if (a[y]>a[y+1])
			{
				t=a[y];
				a[y]=a[y+1];
				a[y+1]=t;	
			}
		}
	}
		printf("\nElements after sorting: ");
	for (i=0;i<n;i++)
		printf("%d  ",a[i]);
}

	for (i=0;i<n-1;i++){
		min_num_index=i;
		for (j=i+1;j<n;j++){
			if (a[j]<a[min_num_index]) min_num_index=j;
		}
		temp=a[i];
		a[i]=a[min_num_index];
		a[min_num_index]=temp;
	}
	printf("\nElements after sorting: ");
	for (i=0;i<n;i++)
		printf("%d  ",a[i]);

int a[]={1,4,3,6,7},i;
for (i=0;i<sizeof(a)/4;i++){
	if (a[i]==3){
		while(i<sizeof(a)/4){
			a[i]=a[i+1];
			i++;
		}
		break;
	}
}
for (i=0;i<sizeof(a)/4;i++) 
	printf("%3d",a[i]);
printf("\n%d",sizeof(a)/4);
*/
int a[5]={4,3,9,7,1};
f(a,4);
printf("%d",a[2]-a[1]);
return 0;

}
int f(int a[],int n)
{
	int i;
	for (i=0;i<n-1;i++) a[i]+=a[i+1];
}
