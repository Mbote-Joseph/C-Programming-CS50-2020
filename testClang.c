#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>

int main(void){
    string name= get_string("What is your name ? ");
    printf("Hello , %s , The clang complier is working as required .\nThank you %s !\n ", name ,name);
} 