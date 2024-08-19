#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	/*
	int a[5];
	a[3]=2;
	printf("%d\n",a);
	char s[]="y";
	printf("%s",s);
	char f='s';   //character  It requires only one memory location
	char e[]="s";     //string    It requires two memory locations (second memory location is for null character(\0) )
	char s[11]="siddhartha";
	printf("%d\n%d",strlen(s),strlen(e));
	printf("%.5s\n",s);
	printf("%c\n",&s[2]);
	puts("Enter a character for getchar method");
	char a=getchar();
	putchar(a);
*/	
// character built-in methods
	printf("isalpha('a') : %d\n" , isalpha('a'));
	printf("isalpha(34) : %d\n" , isalpha(34));
	printf("isalnum('A') : %d\n" , isalnum('A') ) ; 
	printf("isalnum(5) : %d\n" , isalnum(5) );
	int ch='9';
	printf("iscntrl(%c) : %d\n" ,ch, iscntrl(ch)) ;
	printf("isdigit('9') : %d\n" , isdigit('9')); 
	printf("isdigit('a') : %d\n" , isdigit('a')) ;
	printf("isdigit(9) : %d\n" , isdigit(9)) ;
	printf("ispunct('.') : %d\n" , ispunct('.')) ; 
	printf("ispunct(',') : %d\n" , ispunct(',')) ; 
	printf("ispunct('c') : %d\n" , ispunct('c')) ; 
	printf("isspace(' ') : %d\n" , isspace(' ')) ; 
	printf("isspace('\\t') : %d\n" , isspace('\t')); 
	printf("isspace('\\r') : %d\n" , isspace('\r')) ;
	printf("isxdigit('A') : %d\n" , isxdigit('A')) ;
	printf("tolower('A') : %c\n" , tolower('A')) ;
	printf("toupper('z') : %c\n" , toupper('z')) ;
	
//***String built-in methods***
 //strlen(string_name)   **one argument
	//--->It gives the length of the string
	char str1[]="siddhartha" , str2[]="";
	printf("%d\n%d\n",strlen(str1),strlen(str2));
 
 //strlwr(string_name)   **one argument
	//--->It converts entire string into lower case
	char str3[]="SIDDHARTHA" , str4[]="S22@sms.,_+";
	printf("%s\n%s\n",strlwr(str3),strlwr(str4));
	puts(str3);
	
 //strupr(string_name)   **one argument
	//--->It converts entire string into upper case
	char str5[]="SIddhartha" , str6[]="~S22@sms.,_+";
	printf("%s\n%s\n",strupr(str5),strupr(str6));
	puts(str5);
	
 //strcpy(destination_string , source_string)   **Two arguments
	//--->It copies the source_string into destination_string ,i.e,only first argument string is modified and second remains same
	char str7[]="My name is",str8[]="Siddhartha";
	strcpy(str7,str8);  //Here,str8 is copied to str7. So,str7 is changed to "Siddhartha"
	puts(str7);   
	puts(str8);
 //strncpy(destination_string , source_string , n(no.of characters to be copied))   **Three arguments
	//--->It copies the source_string upto n-characters into destination_string 
	char str9[]="My name is",str10[]="Siddhartha";
	strncpy(str9,str10,5);  //Here,str10 upto 5 characters(i.e, upto h) is copied to str9. So,first 5  charcters of str9 were changed
	puts(str9);   
	puts(str10);

 //strcat(destination_string , source_string)   **Two arguments
	//--->source_string is concatinated to destination_string.So,only first string is modified and second string remains same
	char str11[]="My name is",str12[]="Siddhartha";
	strcat(str11,str12);  //Here,str12 is concatinated to str11. So, str11 is changed  and str12 remains same
	puts(str11);   
	puts(str12);
 //strncat(destination_string , source_string , n(no.of characters to be concatinated))   **Three arguments
	//--->source_string upto n-characters is concatinated to destination_string.So,only first string is modified
	char str13[]="My name is ",str14[]="Siddhartha";
	strncat(str13,str14,3);  //Here,str14 upto 3 characters is concatinated to str13. So, str13 is changed  and str14 remains same
	puts(str13);   
	puts(str14);

 //strcmp(first_string , second_string)   **Two arguments
	//--->It compares the two strings(ASCII) ,until there is a mismatch or end of one of the strings is reached and returns an integer value
	//'0'-->Two strings are equal   '1'-->First string is greater than second    '-1'-->Second string is greater than first 
	char str15[]="SidDhu",str16[]="Siddhu",str[4]="ravi",sr[3]="raz";
	printf("%d\n",strcmp(str15,str16));
	printf("%d\n",strcmp(str16,str15));
	printf("%d\n",strcmp(str,sr));
 //strncmp(first_string , second_string , n(no.of characters to be compared))   **Two arguments
	//--->It compares the two strings(ASCII), upto n-characters
	//'0'-->Two strings are equal   '1'-->First string is greater than second    '-1'-->Second string is greater than first 
	char str17[]="SidDhu",str18[]="Si";
	printf("%d\n",strncmp(str17,str18,4));
	printf("%d\n",strncmp(str18,str17,2));

//strrev(string_name)   **one argument
	//It reverses the given string
	char str19[]="RGUKT",str20[]="palindrome";
	puts(strrev(str19));
	puts(strrev(str20));

 //strchr(string_name ,character to be checked)    **Two arguments
	//It searches for the first occurrence of the given character in the string.
	//It returns a "pointer" pointing to the first matched character, or null(0) if no match is found.
	//If we subtract the base pointer from obtained pointer, we can get the index position of that checked character
	char sid[]="siddhartha";
	printf("Address(pointer):%d\n",strchr(sid,'a'));
	printf("Index:%d\n",strchr(sid,'a')-sid);
	printf("Address(pointer):%d\n",strchr(sid,'s'));
	printf("Index:%d\n",strchr(sid,'s')-sid);
 //strrchr(string_name ,character to be checked)    **Two arguments
	//It searches for the first occurrence of the given character in the string from last
	//It returns a "pointer" pointing to the first matched character from last, or null(0) if no match is found.
	//If we subtract the base pointer from obtained pointer, we can get the index position of that checked character
	char ara[]="siddhartha";
	printf("Address(pointer):%d\n",strrchr(ara,'a'));
	printf("Index:%d\n",strrchr(ara,'a')-ara);
	printf("Address(pointer):%d\n",strrchr(ara,'s'));
	printf("Index:%d\n",strrchr(ara,'s')-ara);

 //strstr(string_name ,sub_string to be checked)    **Two arguments
	//It searches for the first occurrence of the given sub_string in the string 
	//It returns a "pointer" pointing to the first matched character, or null(0) if no match is found.
	//If we subtract the base pointer from obtained pointer, we can get the index position of that checked string's first character
	char name[]="siddhu is very bad";
	printf("Address(pointer):%d\n",strstr(name,"very"));
	printf("Index:%d\n",strstr(name,"very")-name);
	printf("Address(pointer):%d\n",strstr(name,"good"));
	printf("Index:%d\n",strstr(name,"good")-name);
 //NOTE: strrstr() built-in method is not present

 //strspn(first_string , second_string)
	//It returns the "index" of the first character in first_string that doesn’t match any character in second_string.
	char str21[]="sriyanth",str22[]="harish";
	printf("%d\n",strspn(str21,str22));
	printf("%d\n",strspn(str22,str21));
 //strcspn(first_string , second_string)
	//It returns the "index" of the first character in first_string that matches with any character in second_string.
	char str23[]="siddu",str24[]="har";
	printf("%d\n",strcspn(str23,str24));
	printf("%d\n",strcspn(str24,str23));


//Length of the string 
{
	int i=0,l=0;
	char s[100];
	printf("Enter a string: ");
	gets(s);
	while(s[i]!='\0')
	{
		l+=1;
		i++;
	}
	printf("Length of the string is %d\n",l);
}
	
//Comparing strings
{
    int i=0,l=0,len1,len2;
	char s1[100],s2[100];
	printf("Enter string 1 : ");
	gets(s1);
	printf("Enter string 2 : ");
	gets(s2);
	len1=strlen(s1);
	len2=strlen(s2);
	if (len1==len2)
	{
		while (i<len1)
		{
			if (s1[i]==s2[i])
				i++;
			else
				break;
		}
		if(i==len1)
		{
	    	printf("Two strings are equal\n");
	    	l=1;
		}
		if(l==0)
		{
			if (s1[i]>s2[i])
				printf("string 1 is greater than string 2\n");
			else
				printf("string 2 is greater than string 1\n");
		}
	
	}
	else
	{
		if(len1>len2)
			printf("string 1 is greater than string 2\n");
		else
			printf("string 2 is greater than string 1\n");
	}
}
//concatening two strings and storing in a new string
{
	char str1[100],str2[100],str[100];
	printf("Enter string 1: ");
	gets(str1);
	printf("Enter string 2: ");
	gets(str2);
	int i=0,j=0;
	while(str1[i]!='\0'){
		str[i]=str1[i];
		i++;
	}
	while(str2[j]!='\0'){
		str[i]=str2[j];
		i++;
		j++;
	}
	printf("%s",str);
}
	
}
