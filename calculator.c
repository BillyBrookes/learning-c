#include <stdio.h>

int main(){

    char operator = '\0';
    double a = 0.0;
    double b = 0.0;
    double result = 0.0;

    printf("Please enter a number: \n");
    scanf("%lf", &a);
    printf("Please enter another number: \n");
    scanf("%lf", &b);
    printf("Please enter an operator: \n");
    scanf(" %c", &operator); // Note the space before %c to skip over any leftover whitespace

    switch(operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("The result is: %lf\n", result);

    return 0;
}