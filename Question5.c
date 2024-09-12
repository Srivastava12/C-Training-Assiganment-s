#include<stdio.h>
int main(){
	//Declaring Variable
	int KM_P_Hrs;
	float ML_P_Hrs;
	//Geting input from USER 
	printf("Enter Kilometers per Hrs :-");
	scanf("%d",&KM_P_Hrs);
	//Calculating the value from Kilometer to miles per Hrs	
	ML_P_Hrs=KM_P_Hrs*0.621371;
	//Showing the miles per Hrs on screen 
	printf("Miles per Hrs :- %f",ML_P_Hrs);
}
