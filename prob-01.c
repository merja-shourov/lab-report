/**
    Qeuston-01: Write a program that reads two integer numbers X and Y. Print all numbers between X and Y which dividing it by 5 the rest is equal to 2 or equal to 3
 */

#include <stdio.h>
int main()
{
    int x, y, i;
    
    scanf("%d %d", &x, &y);
    if (y > x){
        for (i = x + 1; i < y; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
                printf("%d\n", i);
        }
    }else if( x > y ){
        for (i = y + 1; i < x; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
                printf("%d\n", i);
        }
    }
    return 0;
}