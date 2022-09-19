/* Write a recursive function to count number of digits in a given number */

#include<stdio.h>

int countDigit(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("Total Number of Digits : %d", countDigit(n));
    return 0;
}

int countDigit(int n)
{
    if(n)
        return (1 + countDigit(n/10));
}