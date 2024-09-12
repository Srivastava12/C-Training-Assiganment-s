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
