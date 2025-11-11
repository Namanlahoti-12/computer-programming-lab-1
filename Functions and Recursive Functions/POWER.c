#include <stdio.h>
int power (int m,int n){
int x=1;
for(int i=1;i<=n;i++){
x=x*m;
}
return x;
}
int main(){
int a,b;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
printf("%d to the power %d = %d",a,b,power(a,b));
return 0;
}
