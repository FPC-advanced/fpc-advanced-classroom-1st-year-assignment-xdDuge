//Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*

//weight = pi * stomach_radius^3 * sqrt(height * length)`

#include<stdio.h>

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
    printf("Please enter the ")
}