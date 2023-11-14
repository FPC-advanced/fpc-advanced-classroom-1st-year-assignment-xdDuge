//4. Write a program to evaluate a polynomial at a given point using [Horner's Method]

#include<stdio.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(float x, float result);

int main()
{
    int n,x;
    n = input_degree();
    float a[n+1];
    input_coefficients(n+1,a);
    x = input_x();
    float res = evaluate_polynomial(n,a,x);
    output(x,res);
}

int input_degree()
{
    int n;
    printf("Please enter the degree: \n");
    scanf("%d",&n);
    return n;
}

void input_coefficients(int n, float a[n])
{
    printf("Enter the coefficients of the polynomial: \n");
    for(int i=0;i<n;i++)
    {
        printf("Term %d: \n",i);
        scanf("%f",&a[i]);
    }
}

float input_x()
{
    float x;
    printf("Please enter the value of x.");
    scanf("%f",&x);
    return x;
}

float evaluate_polynomial(int n,float a[n],float x)
{
    float res = a[0];

    for(int i = 1; i<= n; i++)
    {
        res = res * x + a[i];
    }
    return res;
}

void output(float x, float result)
{
    printf("The polynomial evaluated at x = %f = %f",x,result);
}