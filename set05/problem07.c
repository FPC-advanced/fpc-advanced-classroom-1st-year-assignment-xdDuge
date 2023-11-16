// Write a program to find out if the name of the camel is a nice name.

// > A camel has a nice name if it has at least 2 vowels and 2 consonants in it

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main()
{
    char name[100];
    int res;
    input(name);
    res = has_nice_name(name);
    output(res);
}

void input(char *name)
{
    printf("Please enter the name of the camel: ");
    scanf("%s",name);
}

int has_nice_name(char *c)
{
    int vowel=0,con=0;
    for(int i=0;c[i]!='\0';i++)
    {
        char ch = tolower(c[i]);
        if(ch == 'a' || ch =='e' || ch =='i' || ch =='o' || ch =='u')
        {
            vowel++;
        }
        else if(ch >='a' && ch <='z')
        {
            con++;
        }
    }
    if(vowel>=2 && con>=2)
    {
        return 1;
    }
    return 0;
}

void output(int res)
{
    if(res == 1)
    {
        printf("The camel has a nice name.");
    }
    else
    {
        printf("The camel doesn't have a nice name.");
    }
}