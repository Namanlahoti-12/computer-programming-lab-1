#include <stdio.h>
//rupees to dollar

int main (){
float rupees;
printf("Rs: ");
scanf("%f", &rupees);
  // 1$= 48RS
float $= rupees/48;
printf("$ %f",$);
return 0;
}

