#include<stdio.h>
#include<string.h>
#include<ctype.h>
char name[50];
void main()
{
/*	
//Phone number 
	int n,i,j,c=0,t=0,b=0;
	printf("Enter no. of digits in your phone number: ");
	scanf("%d",&n);
	if (n!=10)
		printf("Your phone number is not valid\n");
	else
	{
		int p[n];
		for (i=0;i<n;i++)
		{
			printf("Enter digit %d of your phone number:",i+1);
			scanf("%d",&p[i]);
			if (p[0]!=7 && p[0]!=8 && p[0]!=9 ) 
			{
				printf("Your phone number is not valid\n");
				b++;
				break;
			}
		}
		if (b==0)
		{
			for (i=0;i<n-2;i++)
			{	
				if (p[i]==p[i+1] && p[i+1]==p[i+2])
				{
					t++	;	
					break;
				}
			}
			for (i=0;i<n;i++)
			{
				c=0;
				for (j=0;j<n;j++)
				{
					if (p[i]==p[j])
						c++;	
				}
				if (c==4)
					break;
			}
			if (t==1 || c==4)
			{
				printf("Admin sanctioned the phone number\n");
				printf("Phone number is ");
				for (j=0;j<n;j++)
					printf("%d",p[j]);
			}	
			else
				printf("Admin not sanctioned the phone number\n");
		}
	}
	
//Phone number
	char p[20];
	int l,t,c,i,j;
	printf("Enter your phone number: ");
	gets(p);
	l=strlen(p);
	if (p[0]!='7' &&  p[0]!='8' &&  p[0]!='9' &&l!=10 ) 
		printf("Your phone number is not valid\n");
	else
	{
		for (i=0;i<l-2;i++)
		{	
			if (p[i]==p[i+1] && p[i+1]==p[i+2])
			{
				t++	;	
				break;
			}
		}
		for (i=0;i<l;i++)
		{
			c=0;
			for (j=0;j<l;j++)
			{
				if (p[i]==p[j])
					c++;	
			}
			if (c==4)
				break;
		}
		if (t==1 || c==4)
		{
			printf("Admin sanctioned the phone number\n");
			printf("Phone number is ");
			puts(p);
		}	
		else
			printf("Admin not sanctioned the phone number\n");
	}
	
{
	printf("<<<<INSTRUCTIONS>>>>\n");
	printf("--->To start a new line press enter\n");
	printf("--->To start a new paragraph press tab space\n");
	printf("--->After completion press ~ and then press enter\n");
	printf("***STRICTLY FOLLOW THE INSTRUCTIONS***\n");
	char para[500000];
	int i,j,len=0,w=0,d=0,l=0,par=0,c=1;
	printf("Enter a paragraph:\n");
	scanf("%[^~]",&para);
	for (i=0;para[i]!='\0';i++)
		len++;
	if (len>=1)
	{
		l=1;
		w=1;
		par=1;
	}
	for (i=0;i<=len;i++)
	{
		if (para[i]>='0' && para[i]<='9')
			d++;
		if ((para[i]==' ' && para[i+1]!=' ' && para[i+1]!='\n') || para[i]=='\n')
			w++;
		if (para[i]=='\n')
			l++;
		if (para[i]=='\t')
			par++;
		if (para[i]==';')
			para[i]='.';
		if (para[i]=='.')
		{
			if(para[i+1]>='a' && para[i+1]<='z')
				para[i+1]-=32;
			else if (para[i+1]==' ')
			{
				for (j=i+1;para[j]==' ';j++)
				{
					if(para[j+1]>='a' && para[j+1]<='z')
						para[j+1]-=32;	
				}
			}
		}
		if (para[i]==' ' || para[i]=='.' || para[i]>='a' && para[i]<='z' || para[i]>='A' && para[i]<='Z' || para[i]>='0' && para[i]<='9')
			para[i]=para[i];
		else
			para[i]=' ';
	}
	printf("No.of characters: %d\n",len);
	printf("No.of digits: %d\n",d);
	printf("No.of words: %d\n",w);
	printf("No.of lines: %d\n",l);
	printf("No.of paragraphs: %d\n",par);
	printf("<<<<UPDATED DATA>>>>\n");
	i=0;int ln=1;
	printf("%d",ln);
	while(para[i]!='\0'){
		if (para[i]!='\0' && para[i+1]=='\n'){
		   printf("\n");
		   ln++;
		   printf("%d ",ln);
		}
		else
			printf("%c",para[i]);
		i++;
	}
}
	*/

//FLAMES
	char name1[50],name2[50];
	printf("Enter first name:");
	gets(name1);
	printf("Enter second name:");
	gets(name2);
	int len1,len2,len,i,j,k=0,l,m,c;
	len1=strlen(name1);
	len2=strlen(name2);
	for (i=0;i<len1;i++){
		c=0;
		for (j=0;j<len2;j++){
			if (name1[i]==name2[j]){
				c++;
				break;
			}
		}
		if(c==0){
			name[k]=name1[i];
			k++;
		}
	}
	for (i=0;i<len2;i++){
		c=0;
		for (j=0;j<len1;j++){
			if (name2[i]==name1[j]){
				c++;
				break;
			}
			
		}
		if(c==0){
			name[k]=name2[i];
			k++;
		}
	}
	printf("After comparing: ");
	puts(name);
	len=strlen(name);
	if (len==0) printf("There is no relationship between %s and %s ",name1,name2);
	else{
		char f[6]={"FLAMES"};
		while (strlen(f)!=1){
			if (strlen(f)<len){
				j=len-strlen(f);
				if (j<0) j=-j;
				while (j>strlen(f)) {
					j=j-strlen(f);
					if (j<0) j=-j;
				}
				while (f[j-1]!='\0'){
					f[j-1]=f[j];
					j++;
				}
			}
			else{
				i=len;
				while (f[i-1]!='\0'){
					f[i-1]=f[i];
					i++;
				}
			}
		}
		printf("Relationship between %s and %s is %s",name1,name2,f);
	}

/*
//FLAMES
	char name1[50],name2[50],n1[50],n2[50];
	int len1,len2,len;
	register int i,j,k,m,n,x=1,y=0;
	printf("Enter first name: ");
	gets(name1);
	printf("Enter second name: ");
	gets(name2);
	strcpy(n1,name1);
	strcpy(n2,name2);
	len1=strlen(name1);
	len2=strlen(name2);
	for (i=0;i<len2;i++){
		for (j=0;j<len1;j++){
			if (n1[j]==name2[i]){
				k=j;
				while(n1[k]!='\0'){
					n1[k]=n1[k+1];
					k++;
				}
				break;
			}
		}
	}
	for (i=0;i<len1;i++){
		for (j=0;j<len2;j++){
			if (n2[j]==name1[i]){
				k=j;
				while(n2[k]!='\0'){
					n2[k]=n2[k+1];
					k++;
				}
				break;
			}
		}
	}
	len=strlen(n1)+strlen(n2);
	if (len==0) printf("There is no relationship between %s and %s ",name1,name2);
	else{
		char f[6]={"FLAMES"};
		while (strlen(f)!=1){
			x++;y++;
			if (y==strlen(f)) y=0;
			if (x==len){
				n=y;
				while (f[n]!='\0'){
					f[n]=f[n+1];
					n++;
				}
				x=1;
				if (y==strlen(f)) y=0;
			}
		}
		printf("Relationship between %s and %s is \"%s\"",name1,name2,f);
	}
*/
}
