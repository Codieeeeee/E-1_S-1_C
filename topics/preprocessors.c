#include<stdio.h>
#include<stdlib.h>
#define NUM 5
#define VERSION
#define VERSION1
#define s(x)x*x
void main(int argc,char *args[])
{
	printf("%d\n",NUM);
	printf("%d\n",s(6));
	
	#ifdef VERSION1
		printf("It is version 1\n");
	#endif
	#ifndef VERSION2   //True if it is false
		printf("It is version\n");
	#endif
	
	#if NUM>4
		printf("NUM is greater than 4\n");
	#elif (NUM<4)
		printf("NUM is less than 4\n");
	#else
		printf("NUM is equal to 4\n");
	#endif
	
	#if s(2)==4
		//#error s(2)=4   //It will give error before the compilation
	#endif
	
	//Built-in functions (all return string values)
	printf("%s\n",__TIME__); 
	printf("%s",__DATE__);
	
//	printf("No. of arguments:%d\n",argc);
//	printf("args[0]=%s\n",args[0]);
//	printf("args[1]=%s\n",args[1]);
//	printf("args[2]=%s\n",args[2]);
//	if(argc==3){
//		int mult=atoi(args[1]) * atoi(args[2]);
//		printf("%d\n",mult);
//	}
//	else
//		printf("Please give correct input");
}
