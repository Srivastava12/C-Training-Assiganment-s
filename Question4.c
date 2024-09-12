#include<stdio.h>
int main(){
	//Declaring Variable
	float radius,volume;
	//Geting input radius value from USER 
	printf("Enter the radius of the sphere :- ");
	scanf("%f",&radius);
	//Calculating the value of volume 
	volume=(((radius*radius*radius)*3.147)*4)/3;
	//Showing the value of volume on screen 
	printf("\nThe volume of sphere is :-%0.4f",volume);
	return 0;
}
