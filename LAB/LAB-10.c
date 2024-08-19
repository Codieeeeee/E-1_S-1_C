#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
/*
	FILE *fp; 
	fp=fopen("sid.txt","r");
	if (fp==NULL){
		printf("File not opened\n");
		exit(1);
	}
	else{
		char ch;
		int words=0,lines=0;
		while ((ch=fgetc(fp))!=EOF){
			if (ch==' ')
				words++;
			else if (ch=='\n'){
				lines++;
				words++;
			}
		}
		printf("No.of words:%d\n",words);
		printf("No.of lines:%d",lines);
	}
	fclose(fp);
	
//SECOND QUESTION
	FILE *op;
	FILE *np; 
	op=fopen("sid.txt","r");
	np=fopen("new.txt","w");
	if (op==NULL){
		printf("File not exist\n");
		exit(1);
	}
	else{
		char ch;
		while ((ch=fgetc(op))!=EOF){
			fputc(ch,np);
		}
	}
	fclose(op);
	fclose(np);
	
//THIRD QUESTION
	FILE *ap,*cp;
	ap=fopen("sid.txt","a+");
	cp=fopen("new.txt","r");
	if (ap==NULL || cp==NULL){
		printf("File not exist\n");
		exit(1);
	}
	else{
		char ch;
		while((ch=fgetc(cp))!=EOF){
			fputc(ch,ap);
		}
	}
	fclose(cp);
	fclose(ap);
	*/
//FOURTH QUESTION
	char s[20];
	printf("Enter a word to search:");
	gets(s);
	int len=strlen(s);
	FILE *Fp;
	Fp=fopen("sid.txt","r");
	char ch;int i,c=0;
	while (!feof(Fp)){
		if ((ch=fgetc(Fp))==s[0]){
			for (i=1;i<=len;i++){
				if (i!=len){
					if ((ch=fgetc(Fp))==s[i])
						c++;	
				}
				else{
					if (((ch=fgetc(Fp))==' '|| ch=='\n') && c==len-1)
						printf("Word found");
					else
						printf("Word not found");
					exit(1);	
				}
			}
		}
	}
}
