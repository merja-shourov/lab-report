//Question-04:  Given are strings s and t of length N each, both consisting of lowercase English  letters. Let us form a new string by alternating the characters of S and the characters of T, as follows: the first character of S, the first character of T, the second character of S, the second character of T, ..., the N-th character of S, the N-th character of T. Print this new string.


#include<stdio.h>

int main(){
     int n,i;
     printf("N= ");
     scanf("%d\n", &n);

     char s[100], t[100];

     gets(s);
     gets(t);

     int count = n;
     for( i=0; i<n; i++ ){
          s[count] = t[i];
          count++;
     }
     s[count] = '\0';

     printf("print concat string: \n");
     for( i =0; s[i]!= '\0'; i++ ){
          printf("%c", s[i]);
     }
     printf("\n");

     return 0;
}