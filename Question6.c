#include<stdio.h>
int main(){
	//Variable Declarating
	int Minutes;
	int hours,minutes;
	//Get input from USER 
	printf("Enter minutes :-");
	scanf("%d",&Minutes);
	//Calculat data 
	hours=Minutes/60;
	minutes=Minutes-(hours*60);
	//Show calculeted data
	printf("%d Hours, %d Minutes !",hours,minutes);
	return 0;
}
