#include<cs50.h>
#include<stdio.h>

// Prototype
void meow(void);

void main(){

    int count=10;
    for(int i=0; i<=count;i++){
        printf("The value of i is : %i\n",i);
        meow();
    }

}

void meow(void){
    printf("meow ! \n");
} 