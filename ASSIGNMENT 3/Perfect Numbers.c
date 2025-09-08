#include<stdio.h>
int main(){
int n,sum=0;
printf("Enter N: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    if (n%i==0)
    sum=sum+i;

}
if ((sum-n)==n)
    printf("This is a Perfect Number");
else
    printf("This is not a Perfect Number");
return 0;

}
