/* Write a recursive function to calculate sum of squares of first N natural numbers */

#include<stdio.h>

long sumSquareNnatural(int n);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%ld", sumSquareNnatural(n));
    return 0;
}

long sumSquareNnatural(int n)
{

    if(n == 1)
        return 1;
    else
        return (n*n + sumSquareNnatural(n - 1));
}