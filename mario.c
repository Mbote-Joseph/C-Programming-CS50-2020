#include<cs50.h>
#include<stdio.h>

void mario();

void main(){
    mario();
}

void mario(){
    for(int i=0; i<=3; i++){
        for(int j=0; j<=3; j++){
            printf("*");
        }
        printf("\n");
    }
} 