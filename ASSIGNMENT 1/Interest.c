#include <stdio.h>
int main(){
//P= principle amount
float P;
printf("Principle Ammount:");
scanf("%f", &P);
float R;
printf("Rate of Interest: ");
scanf("%f", &R);
float N;
printf("Number of years:");
scanf("%f", &N);
float I= (P*R*N)/100;
printf("Interest: %f ",I);
return 0;


}
