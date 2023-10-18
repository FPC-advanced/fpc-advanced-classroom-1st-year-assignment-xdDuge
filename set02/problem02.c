//02.  Write a program to find if a triangle is scalene.

#include<stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int isscalene);

int main(){
    int s1,s2,s3,t;
    s1 = input_side();
    s2 = input_side();
    s3 = input_side();
    t = check_scalene(s1,s2,s3);
    output(t);
}

int input_side(){
    int a;
    printf("Enter the first side of the triangle: \n");
    scanf("%d",&a);
    return a;
}

int check_scalene(int a, int b, int c){
    if(a!=b && a!=c){
        return 2;
    }
    else{
        return 3;
    }
}

void output(int isscalene){
    if(isscalene == 2){
        printf("The triangle is scalene");
    }
    else
    {
        printf("The triangle is not scalene");
    }
}