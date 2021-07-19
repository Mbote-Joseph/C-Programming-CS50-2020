#include<cs50.h>
#include<stdio.h>
#include<string>

int main(void){
    string answer=get_string("Enter your string: ");
    for(int i=0, n=strlen(answer); i<n; i++){
        if(answer[i]>='a' && answer<='z'){
            printf("%c", answer[i]-32);
        }
        else{
            printf("%c", answer[i]);
        }
    }
}