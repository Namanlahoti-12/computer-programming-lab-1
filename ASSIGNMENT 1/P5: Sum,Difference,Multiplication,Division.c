
#include <stdio.h>
// Sum,Difference,Multiplication,Division

int main(){
float a;
printf("Enter a: ");
scanf("%f", &a);

float b;
printf("Enter b: ");
scanf("%f", &b);

float division=a/b;
float sum=a+b;
float product=a*b;
float difference=a-b;

printf("The difference is %f\n",difference);
printf("The sum is %f\n", sum);
printf("the product is %f\n", product);
printf("The value of a/b is %f \n" ,division);
return 0;
}

