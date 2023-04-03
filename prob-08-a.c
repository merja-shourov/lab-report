// Question-08(a) : Write a C program to generate the following patterns using Nested Loop:

#include<stdio.h>

int main(){
     int i,j;

     for( i=0; i<5; i++ ){
          for( j=0; j<5; j++ ){
               printf("%d", 1);
          }
          printf("\n");
     }

     return 0;
}