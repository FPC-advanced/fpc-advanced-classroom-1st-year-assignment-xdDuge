//03.  Write a program find whether a number is a composite number

#include<stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main(){
    int n,res;
    n = input_number();
    res = is_composite(n);
    output(n,res);
}

int input_number(){
    int x;
    printf("Enter any number:\n");
    scanf("%d",&x);
    return x;
}

int is_composite(int n){
    for(int i=2;i<n/2;i++){
        if(n%i == 0){
            return 1;
        }
        else{
            continue;
        }
    }
    return 59;
}

void output(int n ,int result){
    if(result == 1){
        printf("The number %d is a composite number.",n);
    }
    else{
        printf("The number %d is a prime number.",n);
    }
}