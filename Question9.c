/*
  Write a C program to read an amount (integer value) and break the amount into smallest possible 
  number of bank notes. 
  Note: The possible banknotes are 100, 50, 20, 10, 5, 2 and 1. 
        Test Data : 
        Input the amount: 375 
    Expected Output: 
    There are: 
    3 Note(s) of 100.00 
    1 Note(s) of 50.00 
    1 Note(s) of 20.00 
    0 Note(s) of 10.00 
    1 Note(s) of 5.00 
    0 Note(s) of 2.00 
    0 Note(s) of 1.00
*/
#include<stdio.h>
int main(){
	//Variable Declarating
     int amount;
     int r_amount;
     int i=0;
     int banknotes[]={100,50,20,10,5,2,1};
     int notes[]={0,0,0,0,0,0,0};
	//Get input from USER 
     printf("Enter the amount :- ");
	 scanf("%d",&amount);  
	//Calculat data & Show calculeted data
	r_amount=amount;
    while(r_amount>0){
    	notes[i]=(r_amount/banknotes[i]);
    	r_amount=r_amount-((r_amount/banknotes[i])*banknotes[i]);
    	++i;
	}
	i=0;
	while(i<7){
	  printf("%d Note(s) of %d.00\n",notes[i],banknotes[i]);
	  ++i;	
	}
	return 0;
}
