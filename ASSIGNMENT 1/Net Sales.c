#include <stdio.h>

//Net Sales

int main(){

int gross_sales;

printf("Gross Sales: ");

scanf("%d",&gross_sales);

//10% is given as 0.1 times

float discount = 0.1*gross_sales;

float net_sales= gross_sales - discount;

printf("Net Sales: %f\n", net_sales);

return 0;

}
