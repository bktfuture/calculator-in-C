#include <stdio.h>
#include <math.h>


int main()
{
    char operator;
    double first;
    double second;
    printf("\nHello! This is simple calculator! <3 ");
    printf("\nPlease choose an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("\nEnter your first operand: ");
    scanf("%lf", &first);
    printf("\nEnter your second operand: ");
    scanf("%lf", &second);
    
    switch (operator)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
    default:
        printf("Please enter viable operator!");
        break;
    }

 
    return 0;
}
