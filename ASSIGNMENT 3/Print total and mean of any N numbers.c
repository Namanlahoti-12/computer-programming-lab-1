#include<stdio.h>
int main(){
int n,a,b=0;
printf("Enter n:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
printf("Enter a Number: ");
scanf("%d",&a);
b=b+a;
}
printf("TOTAL : %d\n", b);
printf("MEAN : %d", b/n);
return 0;
}
