#include<stdio.h> 
int main(void) 
{ 
	char string[25]; 
	printf("What is your name ? "); 
    scanf("%[^\n]*c",string); 

	printf("Hello  , %s\n",string); 

}  