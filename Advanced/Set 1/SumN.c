#include<stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main()
{
    int a,sum;
    a = input_n();
    sum = sum_n_nos(a);
    output(a,sum);
}
int input_n()
{
    int n;
    printf("Enter The limit: ");
    scanf("%d",&n);
    return n;
}
int sum_n_nos(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum = sum + i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("The sum of natural numbers upto %d is: %d",n,sum);
}