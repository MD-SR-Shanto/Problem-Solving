/*Author: MD SR Shanto
Designation: Student of CSE 13 Batch
Problem: C program to create a basic calculator
*/
#include <stdio.h>
//Global Declaration
int main()
{
    //Local Declaration
    int num1, num2, summation, subtract, multiplication;
    int modulus;
    double division;
    //Take input from user
    printf("Enter two integer numbers: ");
    scanf("%d%d", &num1, &num2);

    ///Processing the inputs according to the desired output
    //Summation of Two integers
    summation = num1 + num2;

    //Subtraction of Two integers
    subtract = num1 - num2;

    //Mulltiplication of Two integers
    multiplication = num1 * num2;

    //Division of Two integers
    division = (double) num1 / num2;

    //Modulus of Two integers
    modulus = num1 % num2;

    //Output the result
    printf("Summation of %d , %d is: %d\n", num1, num2, summation);
    printf("Subtraction of %d , %d is: %d\n", num1, num2, subtract);
    printf("Multiplication of %d , %d is: %d\n", num1, num2, multiplication);
    printf("Division of %d , %d is: %f\n", num1, num2, division);
    printf("Remainder is: %d\n", modulus);


    return 0;
}
