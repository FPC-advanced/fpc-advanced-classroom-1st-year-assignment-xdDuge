// 1. Write a program to find sum of two fractions

#include<stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);


int main()
{
    int n1,d1,n2,d2,rn,rd;
    input(&n1,&d1,&n2,&d2);
    add(n1,d1,n2,d2,&rn,&rd);
    output(n1,d1,n2,d2,rn,rd);
}

void input(int *n1, int *d1, int *n2, int *d2)
{
    printf("Enter the numerator of the first number: ");
    scanf("%d",n1);
    printf("Enter the denominator of the first number: ");
    scanf("%d",d1);
    printf("Enter the numerator of the second number: ");
    scanf("%d",n2);
    printf("Enter the denominator of the second number: ");
    scanf("%d",d2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
    *res_num = (num1*den2) + (num2*den1);
    *res_den = den1*den2;//simple criss cross method
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    for(int i = 1;i<=res_num && i<=res_den;i++)
    {
        if(res_num%i ==0 && res_den%)
    }
    printf("The sum of two fractions %d/%d and %d/%d is = %d/%d",num1,den1,num2,den2,res_num,res_den);
}