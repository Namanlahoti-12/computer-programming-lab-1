#include <stdio.h>

//Average of 3 subjects
int main(){
float subject_1;
printf("Enter Score in Subject 1: ");
scanf("%f",&subject_1);
float subject_2;
printf("Enter Score in Subject 2: ");
scanf("%f", &subject_2);
float subject_3;
printf("Enter Score in Subject 3: ");
scanf("%f", &subject_3);
float total= (subject_1+subject_2+subject_3);
float average= (subject_1+subject_2+subject_3)/3;
printf("Total: %f\n", total);
printf("The Average Score is %f\n", average);
return 0;
}
