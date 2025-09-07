#include <stdio.h>
//Factorial
int main(){
int n, factorial;
printf("Enter N: ");
scanf("%d",&n);
factorial=1;
for (int i=1;i<=n;i++){
factorial = factorial*i;
}
printf("N! = %d",factorial);
return 0;
}
