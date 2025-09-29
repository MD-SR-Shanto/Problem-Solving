#include <stdio.h>

struct person{
int real;
int imagine;
};

int main()
{

    struct person num1;
    struct person num2;

    printf("enter the real & imagine number of num1: ");
    scanf("%d %d", &num1.real, &num1.imagine);
    printf("enter the real & imagine number of num2: ");
    scanf("%d %d", &num2.real, &num2.imagine);

    struct person new;
    new.real = num1.real + num2.real;
    new.imagine = num1.imagine + num2.imagine;

    printf("real: %d \ imagine: %di", new.real, new.imagine);

    return 0;
}
