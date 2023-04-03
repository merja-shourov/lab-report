// Question-06: Write a C program to display the N terms of odd natural numbers and their sum.

#include<stdio.h>

int main(){
     int x, i, sum=0;
     printf("Enter value of x: ");
     scanf("%d", &x);

     for( i=1; i<=x; i++ ){
           printf("%d ", i);
           sum += i;
     }
     printf("\nSum= %d\n", sum);
     return 0;
}