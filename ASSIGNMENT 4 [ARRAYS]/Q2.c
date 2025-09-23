#include <stdio.h>
int main(){
int a[9];
for(int i=0;i<=9;i++){
    printf("Enter Number ");
    scanf("%d",&a[i]);
}

printf("%d %d %d\n",a[3],a[6],a[8]);

return 0;
}
