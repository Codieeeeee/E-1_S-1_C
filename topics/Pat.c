#include<stdio.h>
void main()
{
	int r,i,j,k;
	                                                                           
	for(i=1;i<=5;i++)
	{                                                                                     //S
	 	for(j=1;j<=5;j++)
	 	{
	 		if(i==1||i==3||i==5||j==1&&i<=3||j==5&&i>=3)
	 			printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	for (i=1;i<=5;i++)
	{                                                                                    //I
	 	for (j=1;j<=5;j++)
	 	{
	 		if(i==1||i==5||j==3)
	 			printf("* ");
	 		else
	 			printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	for (i=1;i<=5;i++)
	{                                                                                   //D
	 	for (j=1;j<=5;j++)
	 	{
	 		if(j==1||i==1&&j!=5||i==5&&j!=5||j==5&&i!=1&&i!=5)
			 	printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	for (i=1;i<=5;i++)
	{
	 	for (j=1;j<=5;j++)
	 	{
	 		if(j==1||i==1&&j!=5||i==5&&j!=5||j==5&&i!=1&&i!=5)
			 	printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{                                                                                     //H
		for (j=1;j<=5;j++)
		{
			if(j==1||j==5||i==3)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	for (i=1;i<=5;i++)
	{                                                                                     //U
		for (j=1;j<=5;j++)
		{
			if(j==1&&i!=5||i==5&&j!=1&&j!=5||j==5&&i!=5)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	printf("------------------------------------------------------------------------------------------------\n");
	for (i=1;i<=5;i++)
	{                                                                                     //A
		for (j=1;j<=5;j++)
		{
			if((i==1&&j!=1&&j!=5)||j==1&&i!=1||j==5&&i!=1||i==3)\
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	for (i=1;i<=5;i++)
	{                                                                                       //T
		for (j=1;j<=5;j++)
		{
			if(i==1||j==3)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	printf("\n");
	
	for (i=1;i<=5;i++)
	{                                                                                       //R
		for (j=1;j<=5;j++)
		{
			if(j==1||i==1&&j!=5||j==5&&i<=2&&i!=1||i==3&&j!=5||i==5&j==5||i==4&&j==3)
				printf("* ");
			else
				printf("  ");		
		}
		printf("\n");
	}
	printf("\n");

	printf("Enter no. of rows: ");
	scanf("%d",&r);
	for (i=0;i<r;i++)
	{
		for (j=r-1;j>i;j--)
			printf("  ");
		for (j=0;j<=i;j++)
			printf("* ");
		/*for (j=1;j<=i;j++)
			printf("* ");*/
		printf("\n");
	}
	printf("Enter no. of rows: ");
	scanf("%d",&r);
	for (i=0;i<r;i++)
	{
		for (j=r-1;j>i;j--)
			printf(" ");
		for (j=0;j<=i;j++)
			printf("* ");
		printf("\n");
	}	
}

