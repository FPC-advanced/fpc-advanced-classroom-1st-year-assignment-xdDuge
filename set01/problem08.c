//8. Write a C program to find sum of _n_ different numbers entered by the user.

#include<stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int sum);
int main()
{
    int n,sum;
    n = input_array_size();
    int a[n];
    input_array(n,a);
    sum = sum_n_array(n,a);
    output(sum);
}
int input_array_size()
{
    int n;
    printf("Enter the number of inputs required: ");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    for(int i=0; i<n; i++)
    {
        printf("Input array elements: ");
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n, int a[n])
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
void output(int sum)
{
    for(int i=0;i<n;i++)
    {printf("The sum of the numbers in the array is: %d",sum);}
    
}