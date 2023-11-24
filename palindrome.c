#include <stdio.h>
#include <math.h>

int is_palindrome(int input);
int length(int input);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (is_palindrome(n))
    {
        printf("%d is a palindrome", n);
    }
    else
    {
        printf("%d is not a palindrome", n);
    }
    
}

int length(int input)
{
    if (input == 0)
    {
        return 1;
    }
    
    int length = 0;
    while (input > 0)
    {
        input /= 10;
        length++;
    }
    return length;
}
int is_palindrome(int input)
{
    int len = length(input);
    
    int i = 1;
    int j = (int)pow(10, len) / 10;
    while(pow(10, i - 1) < j)
    {
        int n1 = ((input%(int)pow(10, i))/(int)pow(10, i - 1));
        int n2 = ((input/j) % 10);
        if (n1 != n2)
        {
            return 0;
        }
        i += 1;
        j /= 10;
    }
    return 1;
}
