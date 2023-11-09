//9. Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.

#include<stdio.h>

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
    float i;

    for(i=1.414 ; i*i<n ; i+=0.000001);    
    return i;
}
void output(float n, float sqrroot)
{
    printf("The square root of %f is : %f",n,sqrroot);
}


