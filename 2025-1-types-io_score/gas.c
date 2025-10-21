#include <stdio.h>
#include <math.h>
int main()
{
    const double R = 8.314;
    float P, L, T;
    scanf("%f %f %f", &P, &L, &T);
    // V = L ^ 3, PV = nRT. --> n = PV / RT.
    double V = pow(L, 3);
    double n = (P * V) / (R * T);
    printf("%.4e\n", n);
    return 0;
}