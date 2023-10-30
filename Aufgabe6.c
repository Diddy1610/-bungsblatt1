#include <stdio.h>

int main()
{
    int a, b = 5, c, d;

    a = b / 2;
    printf("%d\n", a);

    c = b % 2;
    printf("%d\n", c);

    d = 1 - (b - 1);
    printf("%d\n", d);

    b = b * -3;
    printf("%d\n", b);

    d = d % 3;
    printf("%d\n", d);

    c = c + b * d + 4;
    printf("%d\n", c);

    a = b + d;
    printf("%d\n", a);

    a = 0; b = 2; c = 3; d = 4;
    printf("%d\n", a);

    a = (b + 2) * 2 * c + 1;
    printf("%d\n", a);

    a = b * d * c * (-1);
    printf("%d\n", a);

    return 0;
}