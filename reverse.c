#include <stdio.h>

int reverse(int N);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n >= 0)
    {
        printf("%d in reverse = %d", n, reverse(n));
    }
    else
    {
        printf("%d in reverse = -%d", n, reverse(n));
    }
    
    
}

int reverse(int N)
{
    int reversed = 0;

    if (N < 0)
    {
        N = -N;
    }
    
    while(N > 0)
    {
        reversed = N % 10 + 10 * reversed;
        N /= 10;
    }
    return reversed;
}