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
