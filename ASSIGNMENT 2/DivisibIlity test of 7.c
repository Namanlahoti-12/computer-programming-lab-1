#include <stdio.h>
// Divisibility test of 7
int main(){
int x;
printf("X: ");
scanf("%d", &x);
if( x % 7==0){
printf("X is divisible by 7");
}
else{
printf("X is not divisible by 7");
}
return 0;
}
