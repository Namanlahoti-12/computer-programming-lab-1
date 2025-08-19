#include<stdio.h>
//Triangle Validity
int main(){
int a,b,c;
printf("Enter side a: ");
scanf("%d", &a);
printf("Enter side b: ");
scanf("%d", &b);
printf("Enter side c: ");
scanf("%d", &c);

if((a+b>c)&&(a+c>b)&&(b+c>a)){
printf("The Triangle is valid");
}
else{
printf("The Triangle is not valid");
}
return 0;
}
