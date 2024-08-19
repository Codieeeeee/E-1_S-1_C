/*created by siddhartha
 on 5th november 2022
 1.To print self name
 2.To take age,gender,marks,phone number from user and print all of them
 3.To print sizes and ranges of all data types*/
 #include<stdio.h>
 #include<math.h>
 #include<limits.h>
 #include<float.h>
 void main()
{
//1.To print self name
	printf("My name is Siddhartha\n");
	
//2.To take age,gender,marks,phone number from user and print all of them	
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	printf("age is %d\n",age);
	char gender;
	printf("Enter your gender M or F :");
	scanf("%s",&gender);
	printf("gender is %c \n",gender);
	long long int mbno;
	printf("Enter your mobile number:");
	scanf("%lld",&mbno);
	printf("mobile number is %lld\n",mbno);
	float per;
	printf("Enter your marks percentage:");
	scanf("%f",&per);
	printf("marks percentage is %f\n",per);
	
//3.To print the sizes and ranges of all data types
	printf("Size of signed char is %d\n",sizeof(char));
	printf("range of signed char is %d to %d\n",CHAR_MIN,CHAR_MAX);
	printf("Size of unsigned char is %d\n",sizeof(unsigned char));
	printf("range of unsigned char is 0 to %d\n",UCHAR_MAX);
	printf("Size of signed short int is %d\n",sizeof(short));
	printf("range of signed short int is %d to %d\n",SHRT_MIN,SHRT_MAX);
	printf("Size of unsigned short int is %d\n",sizeof(unsigned short));
	printf("range of unsigned short int is 0 to %d\n",USHRT_MAX);
	printf("Size of signed int is %d\n",sizeof(int));
	printf("range of signed int is %d to %d\n",INT_MIN,INT_MAX);
	printf("Size of unsigned int is %d\n",sizeof(unsigned int));
	printf("range of unsigned int is 0 to %u\n",UINT_MAX);
	printf("Size of signed long int is %ld\n",sizeof(long));
	printf("range of signed long int is %d to %d\n",LONG_MIN,LONG_MAX);
	printf("Size of unsigned long int is %lu\n",sizeof(unsigned long));
	printf("range of unsigned long int is 0 to %lu\n",ULONG_MAX);
	printf("size of float is %d\n",sizeof(float));
	printf("range of float is %e to %e\n",FLT_MIN,FLT_MAX);
	printf("size of double is %d \n",sizeof(double));
	printf("range of double is %e to %e\n",DBL_MIN,DBL_MAX);
	printf("size of long double is %d \n",sizeof(long double));
	printf("range of long double is %e to %e\n",LDBL_MIN,LDBL_MAX);
}
