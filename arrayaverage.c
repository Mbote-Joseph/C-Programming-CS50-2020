#include<cs50.h>
#include<stdio.h>

const float TOTAL=5;
const int num=5;

float average(int num, float TOTAL);

int main(void){

    printf("The average score is : %.2f\n",average(num, TOTAL) );

}

float average(int num, float TOTAL){
    int scores[num];
    int sum=0;
    for(int i=0; i<num; i++){
        scores[i]= get_int("Enter the score : ");
        sum= sum + scores[i];
    }
    float aver= sum/TOTAL;
    return aver;
} 