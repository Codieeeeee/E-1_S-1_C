#include<stdio.h>
void main()
{
/*
	int r,c,i,j;
	printf("Enter no.of rows: ");
	scanf("%d",&r);
	printf("Enter no.of columns: ");
	scanf("%d",&c);
	int M[r][c];
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("Enter row %d column %d element: ",i+1,j+1);
		    scanf("%d",&M[i][j]);
		}
		printf("\n");
	}
	printf(" MATRIX\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
		    printf("%3d",M[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
//Diagonal elements
	if (r==c)
	{
		printf("Diagonal elements are ");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				if (i==j)
			    	printf("%d ",M[i][j]);
			}
		}
		printf("\n");
	}
	else
		printf("No diagonal elements,because it is not a square matrix\n");
	
//Lower diagonal elements
	if (r==c)
	{
		printf("Lower diagonal elements are ");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				if (i>j)
			    	printf("%d ",M[i][j]);
			}
		}
		printf("\n");
	}
	else
		printf("No lower diagonal elements,because it is not a square matrix\n");
	
//Sum of upper diagonal elements
	int sum=0;
	if (r==c)
	{
		printf("Sum of upper diagonal elements is ");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				if (i<j)
			    	sum+=M[i][j];
		   }	    	
	   }
	    printf("%d",sum);
		printf("\n");
	}
	else
		printf("No upper diagonal elements,because it is not a square matrix\n");

//Reverse of the matrix
{
	printf("\n");
	int k,l,N[r][c];
	printf("REVERSE MATRIX\n");
	for (i=0,k=r-1 ; i<r,k>=0 ; i++,k--)
	{
		for (j=0,l=c-1 ; j<c,l>=0 ; j++,l--)
		{
			N[i][j]=M[k][l];
			printf("%3d",N[i][j]);
		}
		printf("\n");
	} 
	printf("\n");
}
	
//Z matrix
{
	int k,g;
	if (i==j)
	{
		printf("Z-MATRIX\n");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				if (i==0 || i==r-1 || i+j==r-1 )
					printf("%3d",M[i][j]);
				else
					printf("   ");
			}
			printf("\n");
		}
	}
	else
	printf("Z matrix is not possible,because it is not a square matrix\n");
}

//symmetric or not
{   
	int N[i][j],t=0;
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			N[i][j]=M[j][i];
	}
	printf("TRANSPOSE OF MATRIX\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%3d",N[i][j]);
			if(N[i][j]==M[i][j])
				t++;
		}
		printf("\n");
	}
	if (t==r*c)
		printf("    Matrix is symmetric\n");
	else
		printf("	Matrix is not symmetric\n");
}


//students-marks
{
	int s,sb,i,j,h=0;
	printf("Enter no.of students: ");         //rows
	scanf("%d",&s);
	printf("Enter no.of subjects: ");		 //columns
	scanf("%d",&sb);
	int M[s][sb+1];
	for (i=0;i<s;i++)
	{
		for (j=1;j<=sb;j++)
		{
			M[i][0]=i+1;
			printf("Enter student %d subject %d marks: ",i+1,j);
			scanf("%d",&M[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<s;i++)
	{
		for (j=0;j<=sb;j++)
		{
		    printf("%3d",M[i][j]);
		}
		printf("\n");
	}
	printf("\n");
 	for (j=1;j<=sb;j++)
	{
		for (i=0;i<s;i++)
		{
		    if (M[i][j]>h)
		    	h=M[i][j];
		}
		printf("Highest marks in subject %d is %d \n",j,h);
		h=0;
	}
	printf("\n");
}

//Salesmen-sales
 {
 	int sm,s,i,j,t=0;
 	printf("Enter no.of salesmen: ");
 	scanf("%d",&sm);
 	printf("Enter no. of sales by each salesmen: ");
 	scanf("%d",&s);
 	int S[s+1][sm];
	for (j=0;j<sm;j++)
	{
		for (i=1;i<=s;i++)
		{
			S[0][j]=j+1;
		    printf("Enter salesmen %d sales:",j+1);
		    scanf("%d",&S[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<=s;i++)
	{
		for (j=0;j<sm;j++)
		{
		    printf("%4d",S[i][j]);
		}
		printf("\n");
	}
	for (j=0;j<sm;j++)
	{
		t=0;
		for (i=1;i<=s;i++)
		{
		    t+=S[i][j];
		}
		printf("Total sales by salesman %d is %d\n",j+1,t);
	}
	printf("\n");
	for (i=1;i<=s;i++)
	{
		t=0;
		for (j=0;j<sm;j++)
		{
			t+=S[i][j];
		}
		printf("Total sales of item %d is %d\n",i,t);
	}
	printf("\n");
	
	int m[sm],temp,k,l;
	for (i=1;i<=s;i++)
	{
		for (j=0;j<sm;j++)
		{
			m[j]=S[i][j];
		}
		for (k=1;k<sm;k++)
		{
			for (l=1;l<sm;l++)
			{
				if (m[l-1]>m[l])
				{
					temp=m[l-1];
					m[l-1]=m[l];
					m[l]=temp;
				}
			}
		}
		for (j=sm-1;j>=0;j--)
		{
			if (m[j]!=m[j-1])
			{
			printf("Second highest sales of item %d is %d\n",i,m[j-1]);
			break;
		    }
		}	
	}
}
*/
//Matrix multiplication
{
	int r1,c1,r2,c2,i,j;
	printf("Enter no.of rows in matrix 1: ");
	scanf("%d",&r1);
	printf("Enter no.of columns in matrix 1: ");
	scanf("%d",&c1);
	printf("Enter no.of rows in matrix 2: ");
	scanf("%d",&r2);
	printf("Enter no.of columns in matrix 2: ");
	scanf("%d",&c2);
	printf("\n");
	int m1[r1][c1],m2[r2][c2],M[r1][c2],t=0,k;
	if (c1!=r2)
		printf("\nMatrix multiplication is not possible");
	else
	{
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				printf("Enter row %d column %d element for matrix 1: ",i+1,j+1);
			    scanf("%d",&m1[i][j]);
			}
		}
		printf("\n");
		for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			{
				printf("Enter row %d column %d element for matrix 2: ",i+1,j+1);
			    scanf("%d",&m2[i][j]);
			}
		}
		printf(" MATRIX-1\n");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			    printf("%3d",m1[i][j]);
			printf("\n");
		}
		printf(" MATRIX-2\n");
		for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			    printf("%3d",m2[i][j]);
			printf("\n");
		}
		for (k=0;k<r1;k++)
		{
			for (i=0;i<c2;i++)
			{
				t=0;
				for (j=0;j<r2;j++)
				{
					t+=m1[k][j]*m2[j][i];
				}
				M[k][i]=t;
			}
		}
		printf("\n");
		printf("Multiplication matrix\n");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c2;j++)
			    printf("%4d",M[i][j]);
			printf("\n");
		}
	}
}


}
