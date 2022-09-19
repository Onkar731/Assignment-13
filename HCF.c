/* Write a recursive function to calculate HCF of a number */

#include<stdio.h>

int HCF(int, int);

int main(){

    int a, b;

    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);

    if(a < b)
        printf("HCF is %d", HCF(a, b%a));
    else
        printf("HCF is %d", HCF(b, a%b));
    return 0;
}

int HCF(int a, int b)
{
    if(b == 0)
        return a;
    HCF(b, a%b);
}