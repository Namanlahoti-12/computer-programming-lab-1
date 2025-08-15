#include <stdio.h>
//Net Salary
int main(){
float gross_salary;
printf("Gross Salary: ");
scanf("%f", &gross_salary);
float allowances;
float deduction;
if(gross_salary>10000){
//0.1 times gross salary mean 10 percent of gross salary
allowances = 0.1*gross_salary;
//0.03 times gross salary mean 3 percent of gross salary
deduction = 0.03*gross_salary;
}
else if(gross_salary>5000){
//0.07 times gross salary mean 7 percent of gross salary
allowances = 0.07*gross_salary;
//0.02 times gross salary mean 2 percent of gross salary
deduction = 0.02*gross_salary;
}
float net_salary = gross_salary + allowances - deduction;
printf("Allowances: %f\n", allowances);
printf("Deduction: %f\n", deduction);
printf("Net Salary: %f\n", net_salary);
return 0;


}
