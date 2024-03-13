#include <stdio.h>
int main()
{
    float num1, num2;
    char op;
    printf("Enter your arithmetic expression in format Num1 (+ - * /) Num2\n");
    scanf("%f %s %f", &num1, &op, &num2);
    if(op == '+')
    {
        printf("%f", num1+num2);
    }
    else if(op == '-')
    {
        printf("%f", num1-num2);
    }
    else if(op == '*')
    {
        printf("%f", num1*num2);
    }
    else if(op == '/')
    {
        printf("%f", num1/num2);
    }
    else
    {
        printf("Invalid operator, cannot parse yet.");
    }
    return 0;
}