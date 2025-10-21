#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    //百位：a / 100; 个位：a % 10; 十位：(a / 10) % 10
    int hundreds = a / 100;
    int tens = (a / 10) % 10;
    int units = a % 10;
    int b = hundreds + tens * 10 + units * 100;
    printf("%d", b);
    return 0;
}