#include <stdio.h>
//Report Card

int main(){
float subject_1;
printf("Subject 1 Score: ");
scanf("%f", &subject_1);
float subject_2;
printf("Subject 2 Score: ");
scanf("%f", &subject_2);
float subject_3;
printf("Subject 3 Score: ");
scanf("%f", &subject_3);
float total=subject_1+subject_2+subject_3;
printf("Total: %f\n",total);
float average=(subject_1+subject_2+subject_3)/3;
printf("Average: %f\n",average);
if(subject_1<35||subject_2<35||subject_3<35){
printf("Result: Fail\n");
}
else if(average>=70){
printf("Result: Distinction\n");
}
else if(average>=60){
printf("Result: First Division\n");
}
else if(average>=50){
printf("Result: Second Division\n");
}
else if(average>=35){
printf("Result: Third Division\n");
}
else{
printf("Result: Fail\n");
}

return 0;
}
