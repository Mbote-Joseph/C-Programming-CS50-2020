#include<cs50.h>
#include<stdio.h>

int main(void){
    char c=get_char("Do you agree with terms and conditions ? ");

    if(c=='y' || c=='Y'){
        printf("Agreed. \n");
    }else if( c =='n' || c=='N'){
        printf("I do not agree. \n");
    }else{
        printf("Invald choice !\n");
    }
} 