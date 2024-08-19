#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
//	struct stn{
//		char *a;
//		char g[10];
//		int b[3],d[13];
//		double c;
//		struct name{
//			int *p;
//			char[12];
//		}; 
//			
//	}st;
//	printf("%d",sizeof (st)); 
//int i=5,j=9;
//const int *p=&i;
//p=&j;

	char s[20];
	printf("Enter a word to search:");
	gets(s);
	int len=strlen(s);
	FILE *fp;
	fp=fopen("sid.txt","r");
	char ch;int i,c=0;
	while (!feof(fp)){
		if ((ch=fgetc(fp))==s[0]){
			for (i=1;i<=len;i++){
				if (i!=len){
					if ((ch=fgetc(fp))==s[i])
						c++;	
				}
				else{
					if (((ch=fgetc(fp))==' '|| ch=='\n') && c==len-1)
						printf("Word found");
					else
						printf("Word not found");
					exit(1);	
				}
			}
		}
	}

}
