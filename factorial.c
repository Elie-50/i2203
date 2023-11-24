#include <stdio.h>

int factorial(int N);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("%d! = %d", n, factorial(n));
}

int factorial(int N)
{
    if (N <= 1)
    {
        return 1;
    }
    return N * factorial(N -1);
}
