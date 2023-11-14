//1.  Write a program to find the distance between two points.

#include<stdio.h>
#include<math.h>

struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{
    Point p1,p2;
    float res;
    p1 = input();
    p2 = input();
    dist(p1,p2,&res);
    output(p1,p2,res); 
}

Point input()
{
    Point p;
    printf("Enter the x coordinate : \n");
    scanf("%f",&p.x);
    printf("Enter the y coordinate : \n");
    scanf("%f",&p.y);
    return p;
}

void dist(Point p1,Point p2,float *res)
{
    *res = sqrt(pow(p2.x - p1.x,2)+pow(p2.y - p1.y,2));
}

void output(Point a, Point b, float res)
{
    printf("The distance between (%.1f,%.1f) & (%.1f,%.1f) is : %.2f",a.x,a.y,b.x,b.y,res);
}
