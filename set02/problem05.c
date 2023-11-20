//05.  Write a program to find GCD _(HCF)_ of two numbers.

#include<stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main(){
    int a,b,gcd;
    a = input();
    b = input();
    gcd = find_gcd(a,b);
    output(a,b,gcd);
}

int input(){
    int x;
    printf("Enter any 2 integers: \n");
    scanf("%d",&x);
    return x;
}

int find_gcd(int a, int b){

    int hcf;
    for(int i = 1; i <= a || i <= b; i++) {
        if( a%i == 0 && b%i == 0 ){
            hcf = i;
        }
        
   }
   return hcf;
}

void output(int a, int b, int hcf){
    printf("The HCF of %d and %d is: %d",a,b,hcf);
}