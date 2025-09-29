#include <stdio.h>
int main()
{
    int a, b;
    float c, value;
    int d, e;
    float f;
    scanf("%d%d%f%d%d%f", &a, &b, &c, &d, &e ,&f);
    value=(b*c)+(e*f);
    printf("VALOR A PAGAR: R$ %.2f\n", value);


    return 0;
}
