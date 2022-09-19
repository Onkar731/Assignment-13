/* Write a recursive function to calculate sum of digits of a given number */

#include<stdio.h>

long sumDigits(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%d", sumDigits(n));
    return 0;
}

long sumDigits(int n)
{
    if(n)
        return (n%10 + sumDigits(n/10));
}