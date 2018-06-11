/*
 * 以面积求正方形的边长
 */
#include <stdio.h>
#include <math.h>

double line(double area)
{
    return sqrt(area);
}

int main(void)
{
    double area;

    printf("面积：");    scanf("%lf", &area);
    printf("边长为%f。\n", line(area));

    return 0;
}
