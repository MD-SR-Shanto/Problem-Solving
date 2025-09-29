#include <stdio.h>
int main()
{
    double n;
    scanf("%lf",&n);

    if(n>=0 && 25.0000>=n)
    {
        printf("Intervalo [0,25]\n");
    }
    else if (n<=50.0000 && 25.0001<=n)
    {
        printf("Intervalo (25,50]\n");
    }

    else if (n<=75.0000 && 50.0001<=n)
    {
        printf("Intervalo (50,75]\n");
    }

    else if (n<=100.0000 && 75.0001<=n)
    {
        printf("Intervalo (75,100]\n");
    }

    else if (n<0 || n> 100.0000)
    {
        printf("Fora de intervalo\n");
    }

    return 0;
}


