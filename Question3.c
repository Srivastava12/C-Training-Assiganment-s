/*
   Write a C program that accepts an employee's ID, total worked hours of a month and the amount he 
   received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.  
    Test Data : 
        Input the Employees ID:0342 
        Input the working hrs: 8 
        Salary amount/hr: 15000 
        Expected Output: 
        Employees ID = 0342 
        Salary =  120000.00      
*/
#include<stdio.h>
int main(){
	char emp_id[10];
	int whrs;
	int phrs_salary;
	long long int salary=0;
	printf("Enter Emp ID :-");
	scanf("%s",&emp_id);
	printf("Enter Working hrs :-");
	scanf("%d",&whrs);
	printf("Enter Salary amount/hr :-");
	scanf("%d",&phrs_salary);
	salary=(whrs*phrs_salary);
	printf("\n\nEmp id :- %s",emp_id);
	printf("\nEmp Salary :- %lld",salary);
}
