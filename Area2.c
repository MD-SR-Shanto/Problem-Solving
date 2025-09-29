#include <stdio.h>
int main()
{
    double A, B, C, x, y, z, r, t;

    scanf("%lf%lf%lf",&A,&B,&C);

    x = (A*C)/2;
    y =C*C*3.14159;
    z = ((A+B)/2)*C;
    r = B*B;
    t = A*B;
    printf("TRIANGULO: %.3lf\n", x);
    printf("CIRCULO: %.3lf\n", y);
    printf("TRAPEZIO: %.3lf\n", z);
    printf("QUADRADO: %.3lf\n", r);
    printf("RETANGULO: %.3lf\n",t);


    return 0;
}
