/*
   Write a C program to convert a given integer (in seconds) to hours, minutes and seconds. 
   Test Data : 
    Input seconds: 25300 
   Expected Output: 
    There are: 
    H:M:S - 7:1:40 
*/
#include<stdio.h>
int main(){
	//Variable Declarating
     int secends;
     int h,m,s;
	//Get input from USER 
     printf("Enter Secends :-");
     scanf("%d",&secends);
	//Calculat data 
	  h=secends/3600;
	  m=(secends-(3600*h))/60;
	  s=(secends-(3600*h))-(60*m);
	//Show calculeted data
      printf("H:M:S - %d:%d:%d",h,m,s);
	return 0;
}
