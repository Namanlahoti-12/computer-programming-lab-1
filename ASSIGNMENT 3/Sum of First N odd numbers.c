#include <stdio.h>
int main(){
int n;
printf("Enter Number: ");
scanf("%d",&n);
int sum=0;
for(int i=1;i<=n;i++){
sum= sum+(i*2)-1;
}

printf("%d \n", sum);
return 0;
}
