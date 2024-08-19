#include<stdio.h>
void main()
{
/*
//First question
{
    int i;
    float M[5];
    for(i=1;i<=5;i++)
    {
        printf("Enter student %d marks:",i);
        scanf("%f",&M[i]);
    }
    for(i=1;i<=5;i++)
    {
    M[i]+=M[i]*0.20;
    printf("Updated marks of student %d is %f\n",i,M[i]);
	}
}

//Second question
{
	int i,n,x,y,c=0;
	printf("Enter no. of elements in array: ");
	scanf ("%d",&n);
	int I[n];
	for (i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&I[i]);
	}
	for (x=0;x<n;x++)
	{
		for (y=0;y!=x && y<n;y++)
		{
			if (I[x]+I[y]==35)
			{
				printf("%d and %d is the pair whose sum is 35\n",I[y],I[x]);
				c+=1;
			}
		}
	}
	if (c==0)
		printf("No pairs available whose sum is 35\n");
	}


//Third question

{
	int n,t,j,x,y,c=0;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int A[n];
	for (j=0;j<n;j++)
	{
		printf("Enter element %d:",j+1);
		scanf("%d",&A[j]);
	}
	printf("Array ---->  ");
	for (j=0;j<n;j++)
		printf("%d  ",A[j]);
	printf("\n");
//first variation
	for(x=0;x<n;x++)
	{
		for (y=0;y<n;y++)
		{
			if (y==(n-1))
				continue;
			if (A[y]>A[y+1])
			{
				t=A[y];
				A[y]=A[y+1];
				A[y+1]=t;	
			}
		}
	}


//second variation

	for(x=0;x<n-1;x++)
	{
		for (y=0;y<(n-x-1);y++)
		{
			if (A[y]>A[y+1])
			{
				t=A[y];
				A[y]=A[y+1];
				A[y+1]=t;	
			}
		}
	}

//third variation

	for(x=0;x<n;x++)
	{
		for (y=0;y<n;y++)
		{
			if (y==(n-1))
				continue;
			if (A[y]>A[y+1])
			{
				t=A[y];
				A[y]=A[y+1];
				A[y+1]=t;
				c+=1;	
			}
		}
		if (c==0)
			break;
	}

printf("Sorted array ---->  ");
for (y=0;y<n;y++)	
	printf("%d  ",A[y]);
printf("\n");
}

//Fourth question
int n,i,j;
printf("Enter no.of elements: ");
scanf("%d",&n);
int I[n];
for(i=0;i<n;i++)
{
	printf("Enter element %d: ",i+1);
	scanf("%d",&I[i]);
}
for(i=0;i<n;i++)
	printf("%d  ",I[i]);
printf("\n");













*/
//Fifth question
{
	int n1,n2,i,x,y,t,c;
	printf("Enter no. of elements in array 1: ");
	scanf("%d",&n1);
	int A[n1];
	for (i=0;i<n1;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&A[i]);
	}
	printf("Array 1 ---->  ");
	for (i=0;i<n1;i++)
		printf("%d  ",A[i]);
	printf("\n");
	
	printf("Enter no. of elements is array 2: ");
	scanf("%d",&n2);
	int B[n2];
	for (i=0;i<n2;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&B[i]);
	}
	printf("Array 2 ---->  ");
	for (i=0;i<n2;i++)
		printf("%d  ",B[i]);
	printf("\n");
	
	int C[n1+n2];
	for (i=0;i<n1;i++)
		C[i]=A[i];
	for (i=0;i<(n1+n2);i++)
		C[n1+i]=B[i];
	printf("Merged array ---->  ");
	for (i=0;i<(n1+n2);i++)
		printf("%d  ",C[i]);
	printf("\n");
		
	for(x=0;x<(n1+n2);x++)
	{
		for (y=0;y<(n1+n2);y++)
		{
			if (C[y]>C[y+1])
			{
				if (y==(n1+n2-1))
					continue;
				t=C[y];
				C[y]=C[y+1];
				C[y+1]=t;	
			}
		}
	}
	printf("Sorted array ---->  ");
	for (y=0;y<(n1+n2);y++)	
		printf("%d  ",C[y]);
}




}
