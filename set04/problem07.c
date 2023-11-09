//7. Write a program to add two fractions

#include<stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum);

int main()
{
    Fraction f1,f2;
    f1,f2 = input_fraction();

}

Fraction input_fraction()
{
    Fraction f1,f2;
    printf("Enter numerator of first number: \n");
    scanf("%d",f1.num);
    printf("Enter denominator of first number: \n");
    scanf("%d",f1.den);
    printf("Enter numerator of first number: \n");
    scanf("%d",f2.num);
    printf("Enter denominator of first number: \n");
    scanf("%d",f2.den);
    return f1,f2;
}

int find_gcd(int a, int b)
{
    
}

Fraction add_fractions(Fraction f1, Fraction f2)
{

}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)
{

}