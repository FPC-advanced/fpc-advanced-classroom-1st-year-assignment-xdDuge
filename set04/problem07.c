//7. Write a program to add two fractions

#include<stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main()
{
    Fraction f1,f2,sum;
    f1 = input_fraction();
    f2 = input_fraction();
    sum = add_fractions(f1,f2);
    output(f1,f2,sum);
}

Fraction input_fraction()
{
    Fraction f1;
    printf("Enter numerator: \n");
    scanf("%d",&f1.num);
    printf("Enter denominator: \n");
    scanf("%d",&f1.den);
    return f1;
}

int find_gcd(int a, int b)
{
    int hcf;
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i == 0 && b%i == 0)
        {
            hcf=i;
        }
    }
    return hcf;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
    int hcf;
    Fraction sum;

    sum.num = (f1.num*f2.den) + (f2.num * f1.den);
    sum.den = (f1.den*f2.den);
    hcf = find_gcd(sum.num,sum.den);
    sum.num = sum.num/hcf;
    sum.den = sum.den/hcf;
    return sum;
}

void output(Fraction f1, Fraction f2, Fraction sum)
{
    printf("The sum of %d/%d & %d/%d is %d/%d.",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
