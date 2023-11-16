//Write a program to find the average of all the odd elements in an array

#include<stdio.h>

int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{
    float avg;
    int n;
    n = input_n();
    int a[n];
    input(n,a);
    avg = odd_average(n,a);
    output(avg);
}

int input_n()
{
    int n;
    printf("Enter the number of integers you wish to take: \n");
    scanf("%d",&n);
    return n;
}

void input(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Enter a number: \n");
        scanf("%d",&a[i]);
    }
}

float odd_average(int n, int a[n])
{
    int i,count=0;
    float sum=0.0,avg;
    for(i=0;i<n;i++)
    {
        if(a[i]%2 != 0)
        {
            sum = sum +a[i];
            count++;
        }
        else{
            continue;
        }
    }
    avg = sum/count;
    return avg;
}

void output(float avg)
{
    printf("The average of all the odd numbers in the array is: %f",avg);
}