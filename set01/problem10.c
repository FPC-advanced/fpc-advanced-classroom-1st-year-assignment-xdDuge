//10. Write a C program to compare two strings, character by character.
//> For example, `Hello` should be equal to `Hello`, but not equal to `hello`.
//> `Hello` will be lesser than `Hellw` (alphabetical order).

#include <stdio.h>
#include <string.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2,int result);

int main()
{
    char str1[100], str2[100];
    input_two_strings(str1, str2);
    int result = stringcompare(str1, str2);
    output(str1, str2, result);
    return 0;
}

void input_two_strings(char *str1, char *str2)
{
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
}

int stringcompare(char *str1, char *str2)
{
    return strcmp(str1, str2);
}

void output(char *str1, char *str2, int result)
{
    if (result < 0) {
        printf("%s is less than %s\n", str1, str2);
    } else if (result > 0) {
        printf("%s is greater than %s\n", str1, str2);
    } else {
        printf("%s is equal to %s\n", str1, str2);
    }
}