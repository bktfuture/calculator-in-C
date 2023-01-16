#include <stdio.h>
#include <math.h>
void calculator(){
    char operator;
    double first;
    double second;
    double result;
    printf("\nPlease choose an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("\nEnter your first operand: ");
    scanf("%lf", &first);
    printf("\nEnter your second operand: ");
    scanf("%lf", &second);
    
    switch (operator)
    {
    case '+':
        result = first + second;
        break;
    case '-':
        result = first - second;
        break;
    case '*':
       result = first * second;
        break;
    case '/':
  result = first / second;
        break;
    default:
        printf("Please enter viable operator!");
        break;
    }
    printf("\nResult: %.2lf", result);
}

int main(){
    printf("\nHello! This is simple calculator! <3 ");
    calculator();
 
    return 0;
}
    