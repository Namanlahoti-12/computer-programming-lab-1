#include <stdio.h>
//SWAPPING VALUES
int main(){
float a,b, x;
printf("Enter a: ");
scanf("%f", &a);
printf("Enter b: ");
scanf("%f", &b);
// Before swapping
printf("Before Swapping\n");
printf("a = %f\n", a);
printf("b = %f\n", b);
x= a;
a=b;
b=x;
// After swapping
printf("After Swapping\n");
printf("a = %f\n", a);
printf("b = %f", x);
return 0;
}

