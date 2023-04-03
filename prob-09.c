// Question-09: You are given an array A of size N. The task is to complete the function minimumInteger() which takes an integer N and an integer array A as input parameters and returns the minimum integer of the array

#include<stdio.h>
int minimunInt(int arr[], int size );

int main(){
     int n,i;
     printf("Enter the value of N: ");
     scanf("%d", &n);

     int a[n]; 
     for( i=0; i<n; i++ ){
          scanf("%d", &a[i]);
     }
     printf("Minimum Number: %d\n", minimunInt(a, n));
     return 0;
}

int minimunInt(int arr[], int size){
     int i, min;
     min = arr[0];
     for( i=0; i<size; i++ ){
          if( min > arr[i] )
               min = arr[i];
     }
     return min;
}