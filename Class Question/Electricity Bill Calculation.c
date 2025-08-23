#include<stdio.h>
int main (){
float units, bill;
printf("Electricity Units Consumption: ");
scanf("%f",&units);
if ((units>=0)&&(units<=100)){
    bill= units*(1.5);
    printf("Bill: %f", bill);
}
else if ((units>100)&&(units<=300)){
    bill= units*2.5;
    printf("Bill: %f", bill);
}
else{
    bill=units*4;
    printf("Bill: %f", bill);
}
return 0;
}
