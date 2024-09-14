/*
    Write a C program to find the third angle of a triangle if two angles are given. 
    Expected Output : 
        Input two angles of triangle separated by comma : 50,70 
        Third angle of the triangle : 60 
*/
#include<stdio.h>
int main(){
	//Variable Declarating
	int angle1,angle2,angle3;
	//Get input from USER 
	printf("Enter two angles of triangle separated by comma :- ");
	scanf("%d,%d",&angle1,&angle2);
	//Calculat data 
	angle3=180-(angle1+angle2);
	//Show calculeted data
	printf("Third angle of the triangle :- %d",angle3);
	return 0;
}
