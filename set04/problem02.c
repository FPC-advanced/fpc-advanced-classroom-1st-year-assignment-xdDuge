// 2. Write a program to find the smallest of three fractions

#include<stdio.h>

typedef struct {
    int num, den;
} Fraction;

int main()
{
    Fraction f1,f2,f3;
    float fa,fb,fc;

    printf("Enter the numerator of 1st number: ");
    scanf("%d",&f1.num);
    printf("Enter the denominator of 1st number: ");
    scanf("%d",&f1.den);
    printf("Enter the numerator of 2nd number: ");
    scanf("%d",&f2.num);
    printf("Enter the denominator of 2nd number: ");
    scanf("%d",&f2.den);
    printf("Enter the numerator of 3rd number: ");
    scanf("%d",&f3.num);
    printf("Enter the denominator of 3rd number: ");
    scanf("%d",&f3.den);

    fa = f1.num/f1.den;
    fb = f2.num/f2.den;
    fc = f3.num/f3.den;

    if(fa < fb && fa < fb)
    {
        printf("The smallest fraction is: %d/%d",f1.num,f1.den);
    }
    else if(fb < fa && fb < fc)
    {
        printf("The smallest fraction is: %d/%d",f2.num,f2.den);
    }
    else {
        printf("The smallest fraction is: %d/%d",f3.num,f3.den);
    }
    
    return 0;
}