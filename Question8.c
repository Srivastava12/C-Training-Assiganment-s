#include<stdio.h>
int main(){
	//Variable Declarating
       int numbers_of_days;
       int years;
       int weeks;
       int days;
	//Get input from USER 
       printf("Enter Number of Day's :- ");
       scanf("%d",&numbers_of_days);
	//Calculat data 
	   years=numbers_of_days/365;
	   weeks=(numbers_of_days-(years*365))/7;
	   days=(numbers_of_days-((years*365)+(weeks*7)));
	//Show calculeted data
       printf("Years :- %d",years);
       printf("\nWeeks :- %d",weeks);
       printf("\nDays  :- %d",days);
	return 0;
}
