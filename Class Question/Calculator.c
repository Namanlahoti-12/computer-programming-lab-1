#include<stdio.h>
int main(){
int a,b;
printf("Enter a : ");
scanf("%d",&a);
printf("Enter b : ");
scanf("%d", &b);
char symbol;
printf("Enter Operator: ");
scanf(" %c", &symbol);
if (symbol== '+'){
    printf("Sum = %d ", a+b);
}
else if (symbol== '*'){
    printf("Product = %d", a*b);
}
else if (symbol== '-'){
    printf("Difference = %d", a-b);
    }
else if (symbol== '/'){
    printf("Division = %d", a/b);
}
else {
    printf("Not a Valid operator");
}
return 0;

}
