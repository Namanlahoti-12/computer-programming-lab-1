#include <stdio.h>
#include <math.h>
//Area of Circle
int main(){
float radius;
printf("Enter Radius: ");
scanf("%f",&radius);
float pie = 3.14;
float area = pie*radius*radius;
printf("The Area of Circle is %f\n", area);
return 0;
}
