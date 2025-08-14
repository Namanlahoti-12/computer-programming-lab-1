#include <stdio.h>

int main(){
double bytes;
printf("Enter bytes: ");
scanf("%lf", &bytes);
double kb= bytes/1024;
double mb= bytes/(1024*1024);
double gb= bytes/(1024*1024*1024);
printf("KB: %lf\n", kb);
printf("MB: %lf\n", mb);
printf("GB: %lf\n", gb);
return 0;
}
