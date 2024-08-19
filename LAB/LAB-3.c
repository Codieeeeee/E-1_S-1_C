#include<stdio.h>
#include<math.h>
int main ( )
{
/*
{
//FIRST PROBLEM
	int n1,n2,n3;
	printf("Enter number 1:");
	scanf("%d",&n1);
	printf("Enter number 2:");
	scanf("%d",&n2);
	printf("Enter number 3:");
	scanf("%d",&n3);
	(n1>n2&&n1>n3)?printf("Greatest number is %d\n",n1):(n2>n3?printf("Greatest number is %d\n",n2):printf("Greatest number is %d\n",n3));
}

	
//SECOND PROBLEM
{	
	int i,sn,m,marks=0;
	float total;
	printf("Enter your serial number:");
	scanf("%d",&sn);
	for (;sn<=0;)
	{
		printf("Please enter your correct serial number:");
		scanf("%d",&sn);
	}
	for(i=1;i<=10;i++)
	{
		printf("Enter week %d assignment marks out of 10:",i);
		scanf("%d",&m);
		for (;m<0||m>10;)
		{
			printf("please enter week %d assignment marks again:",i);
			scanf("%d",&m);	
		}
		marks+=m;
	}
	printf("Actual marks:%d\n",marks);
	if (marks<=40)
	{
		printf("Total marks:%d\n",marks);
	}
	else if (marks<=60)
	{
		total=marks+marks*0.10;
		printf("Total marks:%f\n",total);
	}
	else if (marks<=75)
	{
		total=marks+marks*0.15;
		printf("Total marks:%f\n",total);
	}
	else
	{
		printf("Total marks:%d",marks);
		switch(marks)
		{
			case 76: printf("(Seven six)");
			break;
			case 77: printf("(Seven seven)");
			break;
			case 78: printf("(Seven eight)");
			break;
			case 79: printf("(Seven nine)");
			break;
			case 80: printf("(Eight zero)");
			break;
			case 81: printf("(Eight one)");
			break;
			case 82: printf("(Eight two)");
			break;
			case 83: printf("(Eight three)");
			break;
			case 84: printf("(Eight four)");
			break;
			case 85: printf("(Eight five)");
			break;
			case 86: printf("(Eight six)");
			break;
			case 87: printf("(Eight seven)");
			break;
			case 88: printf("(Eight eight)");
			break;
			case 89: printf("(Eight nine)");
			break;
			case 90: printf("(Nine zero)");
			break;
			case 91: printf("(Nine one)");
			break;
			case 92: printf("(Nine two)");
			break;
			case 93: printf("(Nine three)");
			break;
			case 94: printf("(Nine four)");
			break;
			case 95: printf("(Nine five)");
			break;
			case 96: printf("(Nine six)");
			break;
			case 97: printf("(Nine seven)");
			break;
			case 98: printf("(Nine eight)");
			break;
			case 99: printf("(Nine nine)");
			break;
			default: printf("(One zero zero)");
		}
	}
}

//Third question	

float s=0,x,t,f,j,k=0;int i=1;
printf("Enter x: ");
scanf("%f",&x);
printf("Enter no.of terms: ");
scanf("%f",&t);
while(i<=t)
{	f=1;
	if(k!=0)
	{
		for(j=1;j<=k;j++)
		f=f*j;
	}
	if(i%2!=0)
		s=s+(pow(x,k)/f);
	else 
		s=s-(pow(x,k)/f);
	k=k+2;i=i+1;
}
printf("%f\n",s);


//Fourth problem using FOR
{
	int i=1,age,Fif=0,Thir=0,Four=0;
	for (i=1;i<=100;i++)
	{
		printf("Enter your age:");
		scanf("%d",&age);
		for (;age<=0;)
		{
			printf("please enter correct age:");
			scanf("%d",&age);
		}
		if (age>45)
		break;
		printf("Age:%d\n",age);
		if(age>0 && age<=15) Fif+=1;
		if(age>=16 && age<=30) Thir+=1;
		if(age>=31 && age<=45) Four+=1;
	}
	printf("Number of persons of age between 1 to 15: %d\n",Fif);
	printf("Number of persons of age between 16 to 30: %d\n",Thir);
	printf("Number of persons of age between 31 to 45: %d\n",Four);
}
//Fourth problem using WHILE
{
	int i=1,age,Fif=0,Thir=0,Four=0;
	while (i<=100)
	{
		printf("Enter your age:");
		scanf("%d",&age);
		while(age<=0)
		{
			printf("please enter correct age:");
			scanf("%d",&age);
		}
		if (age>45)
		break;
		printf("Age:%d\n",age);
		if(age>0&&age<=15) Fif+=1;
		if(age>=16&&age<=30) Thir+=1;
		if(age>=31&&age<=45) Four+=1;
		i++;
	}
	printf("Number of persons of age between 1 to 15: %d\n",Fif);
	printf("Number of persons of age between 16 to 30: %d\n",Thir);
	printf("Number of persons of age between 31 to 45: %d\n",Four);
}

//Fourth problem using DO WHILE
{
	int i=1,age,Fif=0,Thir=0,Four=0;
	do{
		printf("Enter your age:");
		scanf("%d",&age);
		while(age<=0)
		{
			printf("please enter correct age:");
			scanf("%d",&age);
		}
		if (age>45)
		break;
		printf("Age:%d\n",age);
		if(age>0&&age<=15) Fif+=1;
		if(age>=16&&age<=30) Thir+=1;
		if(age>=31&&age<=45) Four+=1;
		i++;}while (i<=100);
	printf("Number of persons of age between 1 to 15: %d\n",Fif);
	printf("Number of persons of age between 16 to 30: %d\n",Thir);
	printf("Number of persons of age between 31 to 45: %d\n",Four);
}

*/
//FIFTH PROBLEM
{
	char B,C,D,F,R,S,k;
	printf("MENU available in FoodCourt\n");
	printf("B-->Burger(Rs.50)\n");
	printf("C-->Chapathi(Rs.25)\n");
	printf("D-->Dhal(Rs.20)\n");
	printf("F-->French fries(Rs.150)\n");
	printf("R-->Rice(Rs.80)\n");
	printf("S-->Sandwich(Rs.40)\n");
	printf("Please tell your order by checking above menu(Example:-If you enter D,then your order is Dhal):");
	scanf("%s",&k);
	while (k!='B' && k!='C' && k!='D' && k!='F' && k!='R' && k!='S')
	{
		printf("This item is not available\nPlease see above menu and tell your order:");
		scanf("%s",&k);
	}
	int bill=0,q,m;
	while (k=='B'||k=='C'||k=='D'||k=='F'||k=='R'||k=='S')
	{
		printf("Tell the quantity:");
		scanf("%d",&q);
		switch (k)
		{
			case 'B':
				m=50*q;
				break;
			case 'C':
				m=25*q;
				break;
			case 'D':
				m=20*q;
				break;
			case 'F':
				m=150*q;
				break;
			case 'R':
				m=80*q;
				break;
			case 'S':
				m=40*q;
				break;
		}
			bill+=m;
			printf("Any other item:");
			scanf("%s",&k);
    }
	printf("Your bill is Rs.%d",bill);
}

	return 0;	
}

