#include <stdio.h>
#include <math.h>
//Area and Perimeter of Square
int main(){
int side;
printf("Enter Side: ");
scanf("%d",&side);
int area = side*side;
int perimeter = side*4;
printf("The Area of Square is %d\n", area);
printf("The Perimeter of Square is %d", perimeter);
return 0;
}
