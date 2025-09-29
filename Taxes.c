#include <stdio.h>

int main() {

    double x,tax;
    scanf("%lf",&x);

    if (x<=2000.00)
    {
        printf("Isento\n");
    }
    else if (x>=2000.01 && x<=3000.00)
    {
        tax=((x-2000.00)*0.08);
        printf("R$ %.2lf\n",tax);
    }
    else if (x>=3000.01 && x<=4500.00)
    {
        tax=((x-3000.00)*0.18+(1000.00*0.08));
        printf("R$ %.2lf\n",tax);
    }
    else if (x>4500.00)
    {
        tax=((x-4500.00)*0.28+(1500.00*0.18)+(1000*0.08));
        printf("R$ %.2lf\n",tax);
    }
    return 0;
}
