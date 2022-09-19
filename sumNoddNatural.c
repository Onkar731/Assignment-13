/* Write a recursive function to calculate sum of first N odd natural numbers */

#include<stdio.h>

long sumNoddNatural(int n);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%ld", sumNoddNatural(n));
    return 0;
}

long sumNoddNatural(int n)
{

    if(n == 1)
        return 1;
    else
        return (n*2-1 + sumNoddNatural(n - 1));
}