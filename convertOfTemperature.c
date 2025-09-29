#include <stdio.h>
int main ()
{
    int choice;
    float f,c;
    printf("1. Fahrenhite to Celsius\n");
    printf("2. Celsius to Fahrenhite\n");
    printf("enter your choice (1 or 2): ");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("enter the value of f: ");
        scanf("%f",&f);
        c=(f-32)*5/9;
        printf("%f",c);
    }
    else if (choice==2)
    {
        printf("enter the value of c: ");
        scanf("%f",&c);
        f=(c*9/5)+32;
        printf("%f",f);
    }
    else
    {
        printf("Invalid choice!!");
    }

    return 0;
}
