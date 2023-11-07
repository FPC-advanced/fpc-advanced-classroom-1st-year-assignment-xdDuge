//3. Write a program to find the `nCr` of given n and r

#include<stdio.h>

void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
    int n,r,ncr;
    input_n_and_r(&n,&r);
    ncr = nCr(n,r);
    output(n,r,ncr);
}

void input_n_and_r(int *n,int *r)
{
    printf("Enter the values of n and r : \n");
    scanf("%d %d",n,r);
}

int nCr(int n, int r)
{
    int nfac=1,rfac=1,fac=1;
    for (int i=n;i>1;i--)
    {
        nfac *=i;
    }
    for (int i=r;i>1;i--)
    {
        rfac *=i;
    }
    for (int i=(n-r);i>1;i--)
    {
        fac *=i;
    }
    int ncr = nfac/(rfac*fac);
    return ncr;
}

void output(int n, int r, int result)
{
    printf("The nCr of %dC%d is : %d",n,r,result);
}