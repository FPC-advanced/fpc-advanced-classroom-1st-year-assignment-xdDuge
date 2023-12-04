//06. Write a program to reverse a string.

#include<stdio.h>
#include<string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main(){
    char a[1000],reva[1000];
    input_string(a);
    str_reverse(a,reva);
    output(a,reva);
    return 0;
}

void input_string(char *a){
    printf("Enter the string: ");
    scanf("%s",a);
}

void str_reverse(char *str, char *reva){
    int len1 = strlen(str);
    for(int i=0;i<len1;i++){
        reva[i] = str[len1-1-i];
    }
    reva[len1] = '\0';
}

void output(char *a, char *reva){
        printf("The string before reversing = %s\n",a);
        printf("The string after reversing is = %s\n",reva);
}