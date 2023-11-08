//5. Write a program to find the index of the largest number in an array

#include<stdio.h>
int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main()
{
    int n,lar;
    n = input_size();
    int a[n];
    input_array(n,a);
    lar = find_largest_index(n,a);
    output(lar);
}

int input_size()
{
    int x;
    printf("Enter the size of the array: \n");
    scanf("%d",&x);
    return x;
}

void input_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("Please enter the array elements: \n");
        scanf("%d",&a[i]);
    }
}

int find_largest_index(int n, int a[n])
{
    int lar;
    for(int i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            lar = i;
        }
    }
    return lar;
}

void output(int index)
{
    printf("The largest number in the array is in the index %d",index);
}