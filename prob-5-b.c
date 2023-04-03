// Question-05(a): Read an integer value X (1 <= X <= 1000).  Then print the odd numbers from 1 to X, each one in a line, including X if is the case.

#include <stdio.h>
 
int main() {    
    int x,i;

    scanf("%d", &x);
    for( i=1; i<=x; i++ ){
        if( i%2 == 1 ){
            printf("%d\n", i);
        }
    }
    return 0;
}