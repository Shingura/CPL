#include <stdio.h>
#include <math.h>

int main()
{
    printf("%.15lf\n", (log(pow(5280, 3) * pow(236674 + 30303 * sqrt(61), 3) + 744) / sqrt(427)));
    printf("%.15lf\n", 4 * (6 * atan(1.0 / 8) + 2 * atan(1.0 / 57) + atan (1.0 / 239)));
    return 0;
}
