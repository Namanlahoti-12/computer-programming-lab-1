#include<stdio.h>
//Triangle Validity and telling types
int main(){
int a,b,c;
printf("Enter side a: ");
scanf("%d", &a);
printf("Enter side b: ");
scanf("%d", &b);
printf("Enter side c: ");
scanf("%d", &c);

if((a+b>c)&&(a+c>b)&&(b+c>a)){
printf("The Triangle is valid\n");
if((a==b)&&(b==c)&&(c==a)){
printf("Equilateral Triangle\n");
}
else if((a==b)||(b==c)||(c==a)){
printf("Isosceles Triangle\n");
}
else
printf("Scalene Triangle");

}
else{
printf("The Triangle is not valid\n");
}



return 0;
}
