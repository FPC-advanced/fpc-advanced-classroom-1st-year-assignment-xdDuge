//07. Write a program to find the area of a triangle.

#include<stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);

int main(){
	Triangle T1;
	T1 = input_triangle();
	find_area(&T1);
	output(T1);
}

Triangle input_triangle(){
	Triangle T1;
	printf("Enter The base value: \n");
	scanf("%d",&T1.base);
	printf("Enter The altitude value: \n");
	scanf("%d",&T1.altitude);
	return T1;
}

void find_area(Triangle *t1){
	float area;
	area = 0.5 * t1.base * t1.altitude;
}

void output(Triangle t){

} 