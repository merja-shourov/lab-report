// Question-03: Given are two strings S and T consisting of lowercase English letters. Concatenate T and S in this order, without space in between, and print the resulting string.

#include<stdio.h>
#include<string.h>

int main(){
    char S[100];
    char T[100];
    printf("S= ");
    gets(S);
    printf("T= ");
    gets(T);

    int i,j, count_t = 0, count_s = 0;

    int len_s = strlen(S);
    int len_t = strlen(T);

    for( j=0; T[j] != '\0'; j++ ){
        S[len_s] = T[j];
        len_s++;
    }
    
    S[len_s] = '\0';

    puts(S);

    return 0;
}