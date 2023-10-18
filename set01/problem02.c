//2. Write a C program to add two numbers.

#include<stdio.h>

int main()
{
    int a,b,sum;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter another number:");
    scanf("%d",&b);
    sum = a+b;
    printf("The sum of two numbers is:%d",sum);
}