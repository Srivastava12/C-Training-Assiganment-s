/*
    Write a C program to print your name, date of birth. and mobile number.  
    Expected Output: 
 
        Name   : John 
        DOB      : August 15, 1947 
        Mobile : 91-9999999999 
*/
#include<stdio.h>
int  main(){
	char name[50];
	char dob[50];
	char number[12];
	long long int number1;
	
	printf("Name   :- John\n");
	printf("DOB    :-August 15,1947\n");
	printf("Mobile :-91-9999999999");

	printf("\n\nEnter your Name :- ");
	gets(name);
	printf("Enter your DOB :- ");
	scanf("%s",&dob);
	printf("Enter your Number :- ");
	scanf("%s",&number);

	printf("\nName :- %s",name);
	printf("\nDob :-%s",dob);
	printf("\nNumber :-%s",number);
	
	printf("\n\nEnter your Name :- ");
	gets(name);
	gets(name);
	printf("Enter your DOB :- ");
	scanf("%s",&dob);
	printf("Enter your Number :- ");
	scanf("%lld",&number1);

	printf("\nName :- %s",name);
	printf("\nDob :-%s",dob);
	printf("\nNumber :-%lld",number1);
}
