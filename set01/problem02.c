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
    printf("The sum of the two numbers %d & %d is:%d",a,b,sum);
    return 0;
}