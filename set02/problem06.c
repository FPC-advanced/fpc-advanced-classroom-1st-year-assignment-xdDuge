//06. Write a program to reverse a string.

#include<stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

void main(){
    char a[1000],reva;
    input_string(a);
    str_reverse(a,reva);
    output(a,reva);
}

void input_string(char *a){
    printf("Enter the string: ");
    scanf("%s",a);
}

void str_reverse(char *str, char *reva){
    for(int i=0;i<len(str);i++){
        
    }
}