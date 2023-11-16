// Write a program to find borga(x) given x.

// > The formula for finding borga(x) is `1 + (x^1)/3! + (x^2)/5! + (x^3)/7! + ...`. Stop when the next term is less 0.000001 using four functions.

#include<stdio.h>
#include<math.h>

int input();
float borga_X(int x);
void output(int x, float result);

int main()
{
    int x;
    float res;
    x = input();
    res=borga_X(x);
    output(x,res);
    return 0;
}

int input()
{
    int x;
    printf("Enter the value of x: \n");
    scanf("%d",&x);
    return x;
}
float borga_X(int x)
{
    float term=1.0,res=1.0;
    int a=1,fact=3;
    // do{
    //     fact *= (2 * n - 1) * (2 * n);
    //     term = pow(x,n)/fact;
    //     res += term;
    //     n++;
    // }
    // while(term>=0.000001);
    while(term>0.000001)
    {
        int d=0;
        for(int i=1;i<=fact;i++) 
        {
            d=fact*i;
        }
        term=(float)pow(x,a)/d;
        fact+=2;
        a++;
        res+=term;
    }
    return res;
}

void output(int x, float result)
{
    printf("Borga(%d) = %f",x,result);
}