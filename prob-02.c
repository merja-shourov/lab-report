 // Question-02: Write a program that reads a number N. This N is the size of a array X[N]. Next, read each of the numbers of X, find the smallest element of this array and its position within the array, printing this information.

#include<stdio.h>

int main(){
    int n,i;
    scanf("%d", &n);

    int x[n];

    for( i=0; i<n; i++ ){
        scanf("%d", &x[i]);
    }

    int small = x[0];
    int index;
    for( i=1; i<n; i++ ){
        if( small > x[i] ){
            small = x[i];
            index = i;
        }
    }

    printf("Menor valor: %d\n", small);
    printf("Posicao: %d\n", index); 

    return 0;
}