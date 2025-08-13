#include <stdio.h>

//Area of Triangle
int main(){
float l;
printf("Enter Base: ");
scanf("%f",&l);
float h;
printf("Enter Height: ");
scanf("%f", &h);
float area = (h*l)/2;
printf("The Area of Triangle is %f\n", area);
return 0;
}
