#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void){
   string output=get_string("Enter your string: \n");
   printf("Your string: \n");
   printf("*****************\n");
   int count=0;
   int n= strlen(output); //This help in improving time complextity.
   for(int i=0;i< n; i++){
       printf("%c",output[i]);
       count++;
   }

   printf("\n");
   printf("The total characters are : %d\n", count+1);
//    printf("The Length of the string is : %i\n", strlen(output));
}