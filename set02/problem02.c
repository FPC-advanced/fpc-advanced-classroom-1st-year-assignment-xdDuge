//02.  Write a program to find if a triangle is scalene.

#include<stdio.h>

float input_side();
int check_scalene(float a, float b, float c);
void output(int isscalene);

int main()

{
    float s1,s2,s3,t;
    s1 = input_side();
    s2 = input_side();
    s3 = input_side();
    t = check_scalene(s1,s2,s3);
    output(t);
}

float input_side()
{
    float a;
    printf("Enter the first side of the triangle: \n");
    scanf("%f",&a);
    return a;
}

int check_scalene(float a, float b, float c)
{
    if(a!=b && a!=c)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

void output(int isscalene)
{
    if(isscalene == 2)
    {
        printf("The triangle is scalene");
    }
    else
    {
        printf("The triangle is not scalene");
    }
}