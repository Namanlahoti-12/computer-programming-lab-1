#include <stdio.h>

int main(){
int num, count = 0;
printf("Enter a Number\n");
scanf("%d",&num);

for(int i=2; i<=num-1; i++){
    if(num%i ==0){
        count++;
    }
}

if(count==0){
    printf("%d is a Prime Number",num);
}
else{
    printf("%d is not a prime number",num);
}

return 0;
}
