#include <stdio.h>

int main (){
float dollar;
printf("$: ");
scanf("%f", &dollar);
float rupees= dollar*48;
float pounds= rupees/70;
printf("Pounds = %f", pounds);
return 0;
}

