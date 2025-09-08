#include<stdio.h>
#include<math.h>
int main(){
int a,n,x,i=10,cube,sum=0,z;
printf("Enter N:");
scanf("%d",&n);
z=n;

while(n!=0){
a=n%i;
x=a/(i/10);

i=i*10;
n=n-a;
cube=x*x*x;
sum=sum+cube;
}

if (sum==z)
printf("This is an Armstrong Number");
else
printf("This is not an Armstrong Number");

return 0;
}
