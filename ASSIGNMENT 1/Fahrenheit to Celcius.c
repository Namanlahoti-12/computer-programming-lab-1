#include <stdio.h>
//fahrenheit to Celcius
int main(){
float F;
printf("Fahrenheit: ");
scanf("%f", &F);
float x = 5;
float z= x/9;
float y = F-32;
float C = z*y;
printf("Celcius: %f", C);
return 0;
}
