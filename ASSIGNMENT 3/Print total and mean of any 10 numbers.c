#include<stdio.h>
int main(){
int a,b=0;
for(int i=1;i<=10;i++)
{
printf("Enter a Number: ");
scanf("%d",&a);
b=b+a;
}
printf("TOTAL : %d\n", b);
printf("MEAN : %d", b/10);
return 0;
}
