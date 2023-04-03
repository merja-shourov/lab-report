// Qeustion-10: Print the Fibonacci series using recursion method

#include <stdio.h>
int fibonacci(int num){
    if (num == 0){
        return 0; 
    }else if (num == 1){
        return 1; 
    }else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main(){
    int num; 
    printf("Enter the number: ");
    scanf("%d", &num); 

    printf("print fibonacci series of n terms: \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i)); 
    }
    printf("\n");
    return 0;
}
