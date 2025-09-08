#include<stdio.h>
int main(){
int a,n,x,i=10;
printf("Enter N:");
scanf("%d",&n);
while(n!=0){
a=n%i;
x=a/(i/10);
printf("%d,",x);
i=i*10;
n=n-a;
}
return 0;
}
