// Write program to find the weight of a truck load of n camels.

// Take inputs for:
// - truck weight
// - height, radius and length of n different camels
// - weight = pi * stomach_radius^3 * sqrt(height * length)


// > `total_truck_weight = truck_weight + weight_of_camels`

#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

typedef struct _camel {
    float radius, height, length, weight;
} Camel;

void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main()
{
    int n;
    float truck,weight;
    printf("Please enter the number of camels : \n");
    scanf("%d",&n);
    Camel c[n];
    input(n,c,&truck);
    find_camel_weight(n,c);
    weight = compute_total_weight(n,c,truck);
    output(weight);
}

void input(int n, Camel c[n], float *truck_weight)
{
    printf("Please enter the truck weight.");
    scanf("%f",truck_weight);
    for(int i=0;i<n;i++)
    {
        printf("Please enter the height of camel %d: \n",i+1);
        scanf("%f",&c[i].height);
        printf("Please enter the length of camel %d: \n",i+1);
        scanf("%f",&c[i].length);
        printf("Please enter the stomach radius of camel %d: \n",i+1);
        scanf("%f",&c[i].radius);
    }
}

void find_camel_weight(int n, Camel c[n])
{
    for(int i=0;i<n;i++)
    {
        c[i].weight = M_PI * pow(c[i].radius,3) * sqrt(c[i].height * c[i].length);
    }
}

float compute_total_weight(int n, Camel c[n], float truck_weight)
{
    float tot_weight = truck_weight;

    for(int i=0;i<n;i++)
    {
        tot_weight += c[i].weight;
    }
    return tot_weight;
}

void output(float total_weight)
{
    printf("The total weight of the truck is : %.2f units",total_weight);
}