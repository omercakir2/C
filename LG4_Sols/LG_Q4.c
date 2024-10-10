#include <stdio.h>

int main(void){
    int lecture_quiz,midterm, lab_work, lab_final;
    double total;
    printf("Enter the lecture quiz : ");
    scanf("%d",&lecture_quiz);
    printf("Enter the Midterm  ");
    scanf("%d",&midterm);
    printf("Enter the labwork ");
    scanf("%d",&lab_work);
    printf("Enter the lab final : ");
    scanf("%d",&lab_final);

    total = lecture_quiz*0.05+midterm*0.15+lab_work*0.3+lab_final*0.2;

    printf("total grade : %0.2f \n",total);

    if(lecture_quiz+midterm>=8 && lab_final+lab_work>=17){
        printf("The student is eligible for lecture final exam.");
    }
    else{
        printf("The student is  NOT eligible for lecture final exam.");
    }
}