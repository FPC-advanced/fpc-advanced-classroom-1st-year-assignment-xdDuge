//5. Write a C program to compare three numbers using **pass by value**

#include<stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{
    int a,b,c,lar;
    a=input();
    b=input();
    c=input();
    lar = compare(a,b,c);
    output(a,b,c,lar);
}

int input()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    return x;
}
int compare(int a ,int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else
    {
        return c; 
    }
}
void output(int a, int b, int c, int lar)
{
    printf("The largest number of the %d, %d and %d is: %d",a, b, c, lar);
}