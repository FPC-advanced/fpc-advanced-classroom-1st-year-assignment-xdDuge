// Write a program to find the length of a line
// d=√((x2 – x1)² + (y2 – y1)²)

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main()
{
    Point p1,p2;
    p1 = input_point();
    p2 = input_point();

}

Point input_point()
{
    Point p;
    printf("Enter the absicca value of the point : ");
    scanf("%f",&p.x);
}

