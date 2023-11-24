#include <stdio.h>

float get_float(char *prompt);
void calculate(float n1, char op, float n2);
char get_char(char *prompt);

int main()
{
    float number1 = get_float("Enter the first number: ");
    
    char operation = get_char("Enter an operation: ");
    
    float number2 = get_float("Enter the second number: ");

    calculate(number1, operation, number2);

}

void calculate(float n1, char op, float n2)
{   
    switch (op)
    {
    case ('+'):
        printf("%.3f %c %.3f = %.3f", n1, op, n2, n1+n2);
        break;
    case ('-'):
        printf("%.3f %c %.3f = %.3f", n1, op, n2, n1-n2);
        break;
    case ('*'):
        printf("%.3f %c %.3f = %.3f", n1, op, n2, n1*n2);
        break;
    case ('/'):
        if (n2 == 0)
        {
            printf("Zero Division Error");
        }
        else
        {
            printf("%.3f %c %.3f = %.3f", n1, op, n2, n1/n2);
        }
        break;
    
    default:
        printf("Invalid Arithmetics Operator");
        break;
    }
}

char get_char(char *prompt)
{
    char c;
    printf("%s", prompt);
    scanf(" %c", &c);
    return c;
}
float get_float(char *prompt)
{
    float input;
    printf("%s", prompt);
    scanf("%f", &input);
    return input;
}
