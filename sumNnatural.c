/* Write a recursive function to calculate sum of first N natural numbers */

#include<stdio.h>

long sumNnatural(int n);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("%ld", sumNnatural(n));
    return 0;
}

long sumNnatural(int n)
{

    if(n == 1)
        return 1;
    else
        return (n + sumNnatural(n - 1));
}