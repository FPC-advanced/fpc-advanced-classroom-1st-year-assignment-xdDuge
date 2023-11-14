//8. Write a program to add n fractions

#include<stdio.h>

typedef struct fraction
{
    int num, den;
} Frac;

int input_n();
Frac input_fraction();
void input_n_fractions(int n, Frac f[n]);
int find_gcd(int a, int b);
Frac add_fractions(Frac f1, Frac f2);
Frac add_n_fractions(int n, Frac f[n]);
void output(int n, Frac sum);

int main()
{
    int n;
    n = input_n();
    Frac f[n],sum;
    input_n_fractions(n,f);
    sum = add_n_fractions(n,f);
    output(n,sum);
}

int input_n()
{
    int x;
    printf("Please enter the number of fractions you wish to add: ");
    scanf("%d",&x);
    return x;
}

Frac input_fraction()
{
    Frac f;
    printf("Enter the numerator : \n");
    scanf("%d",&f.num);
    printf("Enter the denominator : \n");
    scanf("%d",&f.den);
    return f;
}

void input_n_fractions(int n, Frac f[n])
{
    for(int i = 0;i<n;i++)
    {
        f[i] = input_fraction();
    }
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

Frac add_fractions(Frac f1, Frac f2)
{
    int hcf;
    Frac sum;

    sum.num = (f1.num*f2.den) + (f2.num * f1.den);
    sum.den = (f1.den*f2.den);
    hcf = find_gcd(sum.num,sum.den);
    sum.num = sum.num/hcf;
    sum.den = sum.den/hcf;
    return sum;
}

Frac add_n_fractions(int n, Frac f[n])
{
    Frac sum = {0,1};//Initializing it because i had used two sums previously: sum & sumt, sum = add_fractions(f[i],f[i+1]); sumt = add_fractions (sum,sumt);
    for(int i=0;i<n;i++)
    {
        sum = add_fractions(sum,f[i]);
    }
    return sum;
}

void output(int n, Frac sum)
{
    printf("The sum of the %d fractions is %d/%d.",n,sum.num,sum.den);
}
