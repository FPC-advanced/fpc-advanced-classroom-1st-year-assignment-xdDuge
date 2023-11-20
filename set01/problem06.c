//6. Write a C program to compare three numbers using **pass by reference**

#include<stdio.h>

void input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main()
{
    int a,b,c,lar;
    input(&a,&b,&c);
    compare(a,b,c,&lar);
    output(a,b,c,lar);
}
void input(int *a, int *b, int *c)
{
    printf("Enter a number: ");
    scanf("%d",a);
    printf("Enter a number: ");
    scanf("%d",b);
    printf("Enter a number: ");
    scanf("%d",c);
}
void compare(int a, int b, int c, int *lar)
{
    if (a>=b && a>=c)
    {
        *lar = a;
    }
    else if (b>=c)
    {
        *lar = b;
    }
    else
    {
        *lar = c;
    }
}
void output(int a, int b, int c, int lar)
{
    printf("The largest of the %d, %d and %d is: %d",a,b,c,lar);
}