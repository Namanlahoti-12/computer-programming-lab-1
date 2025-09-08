#include<stdio.h>
int main(){
int a,n,x,i=10,sum=0;
printf("Enter N:");
scanf("%d",&n);
while(n!=0){
a=n%i;
x=a/(i/10);

i=i*10;
n=n-a;
sum=sum+x;
}
printf("Sum of Digits: %d",sum);
return 0;
}
