//A Prime Number is a number that is divisible only by 1 (one) and by itself. For example the number 7 is Prime, because it can be divided only by 1 and by 7.

#include <stdio.h>
 
int isPrime(int n){
    int flat = 0,i;
    if( n == 0 || n == 1)
        flat = 0;
    if( n == 2 )
        flat = 1;
        
    for( i=2; i < n; i++ ){
        if( n  % i == 0 ){
           flat = 0;
           break;
        }
        else
            flat = 1;
    }
    return flat;
}
int main() {
 
    int t,x,i;
    scanf("%d", &t);
    for( i=0; i<t; i++ ){
        scanf("%d", &x);
        if( isPrime(x) ){
            printf("%d eh primo\n", x);
        }else{
            printf("%d nao eh primo\n", x);
        }
    }
 
    return 0;
}
