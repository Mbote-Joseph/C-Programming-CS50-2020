#include<cs50.h>
#include<stdio.h>

void meow(int x);

void main(){
    int count;
    printf("Enter the number of times : ");
    scanf("%d",&count);
    printf("\n");
    meow(count);
}

void meow(int x){
    for(int i=0; i<x; i++){
        printf("Meow\n");
    }
} 