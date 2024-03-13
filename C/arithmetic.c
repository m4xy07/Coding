#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Please enter 2 numbers\n");
    scanf("%f %f", &num1, &num2);
    printf("Addition is: %f", num1+num2);
    printf("Substraction is: %f", num1-num2);
    printf("Multiplication is: %f", num1*num2);
    printf("Division is: %f", num1/num2);
    return 0;
}