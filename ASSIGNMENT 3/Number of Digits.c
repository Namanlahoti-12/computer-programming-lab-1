#include<stdio.h>
#include<math.h>
int main(){
int a,b,x;
printf("Enter N: ");
scanf("%d",&a);


for(int i =1;i<=a;i++){
b=pow(10,i);
if(a/b==0){
printf("NUMBER OF DIGITS: %d",i);
break;
}}
return 0;
}
