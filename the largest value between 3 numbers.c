#include <stdio.h>
int main(){
int a,b,c;
printf("enter a ");
scanf("%d", &a);
printf("enter b ");
scanf("%d", &b );
printf("enter c ");
scanf("%d", &c);
if ((a>b)&&(a>c)){
printf("a is the largest value");
    }
    if ((b>a)&&(b>c)){
printf(" b is the largest value");
    }
    if((c>a)&&(c>b)) {
printf("c is the largest");
}
return 0;
}
