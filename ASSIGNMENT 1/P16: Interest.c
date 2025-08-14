#include <stdio.h>
int main(){
//P= principle amount
float P;
printf("Principle Ammount:");
scanf("%f", &P);
  //R= RATE OF INTEREST
float R;
printf("Rate of Interest: ");
scanf("%f", &R);
  //N= NUMBER OF YEARS
float N;
printf("Number of years:");
scanf("%f", &N);
  //I = INTEREST AMMOUNT
float I= (P*R*N)/100;
printf("Interest: %f ",I);
return 0;


}

