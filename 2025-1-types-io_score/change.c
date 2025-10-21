#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int n1 = n / 50;
    int n2 = (n - 50 * n1) / 20;
    int n3 = (n - 50 * n1 - 20 * n2) / 10;
    int n4 = (n - 50 * n1 - 20 * n2 - 10 * n3) / 5;
    int n5 = n - 50 * n1 - 20 * n2 - 10 * n3 - n4 * 5;
    printf("%d\n%d\n%d\n%d\n%d\n", n1, n2, n3, n4, n5);
    return 0;
}