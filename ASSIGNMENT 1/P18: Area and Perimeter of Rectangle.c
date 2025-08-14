#include <stdio.h>
#include <math.h>
//Area and Perimeter of Rectangle
int main(){
int length;
printf("Enter Length: ");
scanf("%d",&length);
int breadth;
printf("Enter Breadth: ");
scanf("%d",&breadth);
int area = length*breadth;
int perimeter = 2*(length+breadth);
printf("The Area of Rectangle is %d\n", area);
printf("The Perimeter of Rectangle is %d", perimeter);
return 0;
}
