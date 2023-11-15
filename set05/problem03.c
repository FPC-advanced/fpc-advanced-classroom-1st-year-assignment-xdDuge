//Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*

//weight = pi * stomach_radius^3 * sqrt(height * length)`

#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

struct camel {
	float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c); //passing address variable
void output(Camel c);

int main()
{
    Camel c;
    c = input();
    find_weight(&c);
    output(c);
}

Camel input()
{
    Camel c;
    printf("Please enter the stomach radius of the camel: \n");
    scanf("%f",&c.radius);
    printf("Please enter the height of the camel: \n");
    scanf("%f",&c.height);
    printf("Please enter the length of the camel: \n");
    scanf("%f",&c.length);
    return c;
}

void find_weight(Camel *c)
{
    c->weight = M_PI * pow(c->radius,3) * sqrt(c->height * c->length);//M_PI is for the pi value
}

void output(Camel c)
{
    printf("The weight of the camel of radius %.2f, height %.2f and length %.2f is %.2funits.",c.radius,c.height,c.length,c.weight);
}