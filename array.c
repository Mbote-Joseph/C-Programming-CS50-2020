#include<cs50.h>
#include<stdio.h>

const int TOTAL=5;

int main(void){
    int scores[TOTAL];
    int sum=0;
    for(int i=0; i<TOTAL;i++){
        scores[i]= get_int("Enter the score : ");
        sum= sum +scores[i];
    }
    float average= sum/5.0;
    printf("The sum is : %d\n", sum);
    printf("The average score is : %.2f\n", average);
} 
