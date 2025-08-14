#include <stdio.h>

//Net Salary
int main(){
int gross_salary;
printf("Gross Salary: ");
scanf("%d",&gross_salary);
//10% is given as 0.1 times
float allowances = 0.1*gross_salary;
//3% is given as 0.03 times
float deduction = 0.03*gross_salary;
float net_salary= gross_salary + allowances - deduction;
printf("Net Salary: %f\n", net_salary);
return 0;
}
