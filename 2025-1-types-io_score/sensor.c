#include <stdio.h>

int main()
{
    char name[21];
    int pre;
    double frac, factor;
    char unit;
    scanf("%s %d %lf %lf %c" , &name[0] , &pre , &frac, &factor , &unit);
    printf("%.2s: %d (%.5f) | %.5E %.5f %c", name, pre, frac, pre + frac,(pre + frac) * factor, unit - 32);
}