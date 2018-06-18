#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    Point pt;
    double fuel;
} Car;

double distance_of(Point pa, Point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(Car c)
{
    printf("当前位置：(%.2f, %.2f)\n", c.pt.x, c.pt.y);
    printf("剩余燃料：%.2f", c.fuel);
}

int move(Car *c, Point dest)
{
    double d = distance_of(c->pt, dest);

    if (d > c->fuel)
        return 0;

    c->pt = dest;
    c->fuel -= d;
    return 1;
}

int main(void)
{
    Car mycar = {{0.0, 0.0}, 90.0};
    while (1) {
        int select;
        Point dest;
        put_info(mycar);
        printf("开动汽车吗[Yes---1/No---0]:");
        scanf("%d", &select);
        if (select != 1) break;
        printf("请输入目的地的x坐标:");     scanf("%lf", &dest.x);
        printf("请输入目的地的y坐标:");     scanf("%lf", &dest.y);
        if (!move(&mycar, dest))
            puts("燃料不足！");
    }
    return 0;
}