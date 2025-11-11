#include <stdio.h>
int leap(int a){
if(a%400==0||(a%4==0 && a%100!=0))
printf("It is a Leap Year");
if((a%4==0 && a%100==0&&a%400!=0))
printf("It is not a leap year");

return 0;
}
int main(){
int year;
printf("Enter year: ");
scanf("%d",&year);
leap(year);
return 0;
}
