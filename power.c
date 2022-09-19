/* Write a recursive function to calculate the power of a given number */

#include<stdio.h>

long power(int, int);

int main(){

    int n, p;

    printf("Enter a number and power : ");
    scanf("%d%d", &n, &p);

    printf("Total Number of Digits : %ld", power(n,p));
    return 0;
}

long power(int n, int p)
{
    if(p == 1)
        return n;
    else
        return (n * power(n, p - 1));
}