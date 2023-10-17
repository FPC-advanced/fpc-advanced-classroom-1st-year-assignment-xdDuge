//Write a C program to find the square root of a number.
#include<stdio.h>
#include<math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    float n,sqrt;
    n = input();
    sqrt = square_root(n);
    output(n,sqrt);
}
float input()
{
    float n;
    printf("Enter the number: ");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float sqrt;
    sqrt = pow(n,0.5);
    return sqrt;
}
void output(float n, float sqrroot)
{
    printf("The square root of %f is : %f",n,sqrroot);
}