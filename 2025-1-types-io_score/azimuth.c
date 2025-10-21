#include <stdio.h>
#include <math.h>

int main()
{
    int x_1, y_1, x_2, y_2;
    scanf("%d %d\n", &x_1, &y_1);
    scanf("%d %d", &x_2, &y_2);
    double distance = hypot((y_1 - y_2), (x_1 - x_2));
    // tan = (y2-y1) / (x2-x1)
    double r_angle = atan2((x_2 - x_1), (y_2 - y_1));
    double d_angle = r_angle / (2 * acos(-1.0)) * 360;
    double angle = fmod(d_angle + 360, 360);
    printf("%.4lf %.4lf\n", distance, angle);
    return 0;
}