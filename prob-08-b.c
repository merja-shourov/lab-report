// Question-08(b) : 8. Write a C program to generate the following patterns using Nested Loop: 

#include<stdio.h>

int main(){
     int i,j;
     
     for( i=5; i>0; i-- ){
          for( j=0; j<i; j++ ){
               printf("*");
          }
          printf("\n");
     }
}