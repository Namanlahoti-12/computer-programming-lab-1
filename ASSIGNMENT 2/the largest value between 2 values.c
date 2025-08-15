#include<stdio.h>

int main(){
int a;
printf("enter a ");
scanf("%d", &a);
int b;
printf("enter b ");
scanf("%d", &b);
if(a>b){
    printf("the largest value is a");
}
else {
printf("the largest value is b");
}
return 0;
}
