#include<stdio.h>
#include<stdlib.h>
int fun(int ,int *);
int main(int count,char *nums[])
{
/*
//FIRST QUESTION	
	int p,*q;
	p=10;
	q=&p;
	int (*f)(int , int*);
	f=fun;
	printf("%d\n",f(p,q));
	
	int n;
	printf("Enter no. of elements in the array:");
	scanf("%d",&n);
	int arr[n],i,*j,*k,t;
	for (i=0;i<n;i++){
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Array before sorting:\n");
	for (i=0;i<n;i++){
		printf("%d\t",*(arr+i));
	}
	for (j=arr;j<(arr+n-1);j++){
		for (k=arr;k<(arr+n-1);k++){
			if(*k>*(k+1)){
				t=*k;
				*k=*(k+1);
				*(k+1)=t;
			}
		}
	}
	printf("\nArray after sorting:\n");
	for (i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	
//SECOND QUESTION
	int i=0,j,*a;
	a=(int*)malloc(sizeof(int));
	while(1){
		int n;
		printf("Enter a value:");
		scanf("%d",&n);
		if (n!=-1){
			i++;
			a[i-1]=n;
			a=(int*)realloc(a,sizeof(int));
		}
		else{
			for (j=0;j<i;j++)
				printf("%d\n",*(a+j));
			free(a);
			break;
		}
	}
*/	
//THIRD QUESTION
	if (count==3){
		if (atoi(nums[1])>atoi(nums[2]))
			printf("Substraction of two numbers is %d",atoi(nums[1])-atoi(nums[2]));
		else
			printf("Please give first number as greater than second number.");
	}
	else
		printf("Please give valid input");
/*
//FOURTH QUESTION
	struct student {
		int regId;
		char name[20];
		float cgpa;
		struct address{
			char vill[20];
			char dist[20];
		}add;
		long long int phno;
	};
	int n,i;
	printf("Enter no. of students:");
	scanf("%d",&n);
	struct student s[n];
	for (i=0;i<n;i++){
		printf("Enter student %d register_id:",i+1);
		scanf("%d",&s[i].regId);
		printf("Enter student %d name:",i+1);
		scanf("%s",&s[i].name);
		printf("Enter student %d CGPA:",i+1);
		scanf("%f",&s[i].cgpa);
		printf("Enter student %d village:",i+1);
		scanf("%s",&s[i].add.vill);
		printf("Enter student %d district:",i+1);
		scanf("%s",&s[i].add.dist);
		printf("Enter student %d phone number:",i+1);
		scanf("%lld",&s[i].phno);
	}
	int var,index,j,t,rid[n];
	for (i=0;i<n;i++)
		rid[i]=s[i].regId;
	for (i=0;i<n-1;i++){
		for (j=0;j<n-1;j++){
			if (rid[j]>rid[j+1]){
				t=rid[j];
				rid[j]=rid[j+1];
				rid[j+1]=t;
			}
		}
	}
	j=0;
	while (j<n){
		for (i=0;i<n;i++){
			if (rid[j]==s[i].regId)
				index=i;
		}
		j++;
		printf("--->Roll number-%d:-\n",j);
		printf("Register_id: %d\n",s[index].regId);
		printf("Name: %s\n",s[index].name);
		printf("CGPA: %f\n",s[index].cgpa);
		printf("Village: %s\n",s[index].add.vill);
		printf("District: %s\n",s[index].add.dist);
		printf("Phone number: %lld\n",s[index].phno);
	}
	
//FIFTH QUESTION
	struct student {
		int regId;
		char name[20];
		float cgpa;
		struct address{
			char vill[20];
			char dist[20];
		}add;
		long long int phno;
	};
	int n,i;
	printf("Enter no. of students:");
	scanf("%d",&n);
	struct student s[n];
	for (i=0;i<n;i++){
		printf("Enter student %d register_id:",i+1);
		scanf("%d",&s[i].regId);
		printf("Enter student %d name:",i+1);
		scanf("%s",&s[i].name);
		printf("Enter student %d cgpa:",i+1);
		scanf("%f",&s[i].cgpa);
		printf("Enter student %d village:",i+1);
		scanf("%s",&s[i].add.vill);
		printf("Enter student %d district:",i+1);
		scanf("%s",&s[i].add.dist);
		printf("Enter student %d phone number:",i+1);
		scanf("%lld",&s[i].phno);
	}  
	float avg_cgpa,t=0;
	for (i=0;i<n;i++)
		t+=s[i].cgpa;
	avg_cgpa=t/n;
	printf("%f\n",avg_cgpa);
	printf("-->List of phone numbers of students who got cgpa above average(%f):-\n",avg_cgpa);
	for (i=0;i<n;i++){
		if (s[i].cgpa>=avg_cgpa)
			printf("%lld\n",s[i].phno);
	}
*/
	return 0;
}
int fun(int a,int *b)
{
	int *c=&a;
	*c=*c+*b;
	*b=*c*2;
	a=a+*b;
	return a+*b+*c;
}
