#include <stdio.h>
int main(){
int c,n;
int a[]={1,2,5,10,20,50,100,200,500};
printf("Enter Number: ");
scanf("%d",&n);
for(int i=8;i>=0;i--){
    c=n/a[i];
    printf("Notes of %d is %d\n",a[i],c);
    n=n%a[i];
}
return 0;
}
