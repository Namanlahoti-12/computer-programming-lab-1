#include<stdio.h>
int main(){
int a,b,n,x,i=10;
printf("Enter N:");
scanf("%d",&n);
while(n!=0){
a=n%i;
x=a/(i/10);
printf("%d",x);
scanf("%d",x);
b=x*(i/10);
if(a==b)
    printf("This is a palindrome ");
i=i*10;
n=n-a;
}
return 0;
}
