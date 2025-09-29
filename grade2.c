#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5, grade;
    float avarage;
    printf("enter the value of num1, num2, num3, num4, num5");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    avarage = (num1+num2+num3+num4+num5)/5;
    grade = avarage/10;
    switch (grade)
    {
    case 8-10:
        printf("you got A+");
        break;
    case 7:
        printf("you got A");
        break;
    case 6:
         printf("you got A-");
        break;
    case 5:
         printf("you got B");
        break;
    case 4:
         printf("you got C");
        break;
    case 3:
         printf("you got D");
        break;
        default:
             printf("F");
        break;
    }

    return 0;
}
