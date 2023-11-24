#include <stdio.h>
#include <math.h>

int isPrime(int N);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n))
    {
        printf("%d is prime", n);
    }
    else
    {
        printf("%d is not prime", n);
    }
    
}

int isPrime(int N)
{
    if (N <= 1)
    {
        return 0;
    }
    
    for (int i = 2; i < sqrt(N) + 1; i++)
    {
        if ((N % i) == 0)
        {
            return 0;
        }
    }
    return 1;
}
