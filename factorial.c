/* Write a recursive function to calculate factorial of a number */

#include<stdio.h>

long fact(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Factorial = %ld", fact(n));
    return 0;
}

long fact(int n)
{
    if(n == 1)
        return 1;
    else
        return (n * fact(n - 1));
}