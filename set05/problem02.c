//2.  Write a program to find the weight of a camel, given height, length and stomach radius using four functions.

//> `weight = pi * stomach_radius^3 * sqrt(height * length)`

#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
    float r,h,l,w;
    input_camel_details(&r,&h,&l);
    w = find_weight(r,h,l);
    output(r,h,l,w);   
}

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Please enter the radius of the camel's stomach: \n");
    scanf("%f",radius);
    printf("Please enter the height of the camel: \n");
    scanf("%f",height);
    printf("Please enter the length of the camel: \n");
    scanf("%f",length);
}

float find_weight(float radius, float height, float length)
{
    float weight;
    weight = M_PI * radius * sqrt(height * length);//M_PI is for the pi value
    return weight;
}

void output(float radius, float height, float length, float weight)
{
    printf("The weight of the camel of radius %.2f, height %.2f and length %.2f is %.2funits.",radius,height,length,weight);
}