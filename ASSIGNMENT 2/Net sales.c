#include <stdio.h>
//Net Sales
int main(){
float gross_sales;
printf("Gross Sales: ");
scanf("%f", &gross_sales);
float discount;
if(gross_sales>20000){
//0.15 times gross sales mean 15 percent of gross sales
discount = 0.15*gross_sales;
}
else if(gross_sales>10000){
//0.1 times gross sales mean 10 percent of gross sales
discount = 0.1*gross_sales;
}
else{
//0.05 times gross sales mean 5 percent of gross sales
discount = 0.05*gross_sales;
}
float net_sales = gross_sales - discount;

printf("Discount: %f\n", discount);
printf("Net Sales: %f\n", net_sales);
return 0;


}

