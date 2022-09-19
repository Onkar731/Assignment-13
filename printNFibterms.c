/* Write a recursive function to print first N terms of Fibonacci series */

#include<stdio.h>

int printFibTerms(int);

int main(){

    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        printf("%d ", printFibTerms(i));
        
    return 0;
}

int printFibTerms(int n)
{
    if(n == 1 || n == 2){
        return 1;
    }
    return (printFibTerms(n - 1) + printFibTerms(n - 2));
}