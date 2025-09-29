#include <stdio.h>
int main()
{
    int number, hour;
    float basic, salary;

    scanf("%d%d%f",&number, &hour, &basic);

    salary=basic*hour;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f",salary);




    return 0;
}
