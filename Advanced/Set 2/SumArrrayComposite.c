#include<stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main(){
    int n;
    n = input_array_size();
    int a[n];
    input_array(n,a);
    int sum = sum_composite_numbers(n,a);
    output(sum);
}

int input_array_size(){
    int x;
    printf("Enter the size of the array: ");
    scanf("%d",&x);
    return x;
}

void input_array(int n,int a[n]){
    for(int i=0;i<n;i++){
        printf("Enter the array elements: \n");
        scanf("%d",&a[i]);
    }
}

int sum_composite_numbers(int n, int a[n]){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=2;j<a[i];j++){
        if(a[i]%j == 0){
            sum = sum + a[i];
        }
        else{
            continue;
        }
        }
    }
    return sum;
}

void output(int sum){
    printf("The sum of all the composite numbers in the given array is = %d",sum);
}
//The logic in sum_composite is wrong somewhere.