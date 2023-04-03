// Question-05(b): Read an integer N. This N will be the number of integer numbers X that will be read. Print how many these numbers X are in the interval [10,20] and how many values are out of this interval.

#include <stdio.h>
 
int main() {
    int n,i,temp,in =0, out=0;
    scanf("%d", &n);

    for( i=1; i<=n; i++){
        scanf("%d", &temp);
        if( temp >=10 && temp <=20 )
            in++;
        else out++;
    }
    
    printf("%d in\n%d out\n", in, out);
 
    return 0;
}