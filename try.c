#include <stdio.h>
///Global Declaration
int main()
{
  int num1;
    float num2;
    double num3;
    char c;
    printf("enter the value of num1");
    scanf("%d",&num1);

    printf("enter the value of num2");
    scanf("%f",&num2);

    printf("enter the value of num3");
    scanf("%lf",&num3);

    printf("enter a character: ");
    scanf(" %c",&c);

    printf("%d\n",num1);
    printf("%f\n",num2);
    printf("%lf\n",num3);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);



    return 0;
}
