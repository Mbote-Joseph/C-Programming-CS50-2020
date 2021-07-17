#include<stdio.h>
#include<cs50.h>

int main(void){
    // Ask users name
    string answer=get_string("What is your name ? ");
    printf("Hello , %s\n", answer);
} 