/* Write a recursive function to calculate sum of first N even natural numbers */

#include<stdio.h>

long sumNevenNatural(int n);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%ld", sumNevenNatural(n));
    return 0;
}

long sumNevenNatural(int n)
{

    if(n == 1)
        return 2;
    else
        return (n*2 + sumNevenNatural(n - 1));
}