//Write a program to find out the mood of a Camel.

// Camel is:
//  - sick when its `stomach_radius` is less than `height` and less than `length`
//  - happy when its `height` is less than `length` and less than `stomach_radius`.
//  - tense when its `length` is less than `height` and `stomach_radius`.

#include<stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(int mood);

int main()
{
    float r,h,l;
    int mood;
    input_camel_details(&r,&h,&l);
    mood = find_mood(r,h,l);
    output(mood);
}

void input_camel_details(float *radius, float *height, float *length)
{
    printf("Please enter the stomach radius of the camel: \n");
    scanf("%f",radius);
    printf("Please enter the height of the camel: \n");
    scanf("%f",height);
    printf("Please enter the length of the camel: \n");
    scanf("%f",length);
}

int find_mood(float radius, float height, float length)
{
    int mood;
    if(radius<height && radius<length)
    {
        mood = 0;
    }
    else if(height<length && height<radius)
    {
        mood = 1;
    }
    else if(length<height && length<radius)
    {
        mood = 2;
    }
    else
    {
        mood = 69;
    }
    return mood;
}

void output(int mood)
{
    if(mood == 0)
    {
        printf("Camel is sick T_T.");
    }
    else if(mood == 1)
    {
        printf("Camel is happy :).");
    }
    else if(mood == 2)
    {
        printf("Camel is tense >_<.");
    }
    else
    {
        printf("Camel is feeling something I don't know");
    }
}