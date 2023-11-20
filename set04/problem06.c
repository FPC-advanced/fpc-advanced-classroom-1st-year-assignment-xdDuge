//6. Write a program to count the number of words in a string using strtok (_string.h_)

#include<stdio.h>
#include<string.h>

void input_string(char *a);
int count_words(char *string);
void output(int no_words);

int main()
{
    int c;
    char a[1000];
    input_string(a);
    c = count_words(a);
    output(c);
}

void input_string(char *a)
{
    printf("Please enter a sentence :");
    gets(a);// gets for reading the entire sentence.
}

int count_words(char *a)
{
    int count = 0;
    char *word = strtok(a," \n");// splits when it encounters a space and a new line.

    while(word !=NULL)
    {
        count++;
        word = strtok(NULL," \n");
    }
    return count;
}

void output(int no_words)
{
    printf("The total number of words in the sentence is : %d",no_words);
}

