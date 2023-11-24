#include <stdio.h>
#include <math.h>

int BinToDec(long long bin)
{
    int dec = 0;
    int i =0;
    if (bin == 0)
    {
        return 0;
    }
    
    while (bin > 0)
    {
        
        if ((bin % 10 != 1) && (bin % 10 != 0))
        {
            return 0;
        }
        
        dec = dec + (bin % 10) * (int)pow(2, i);
        bin /= 10;
        i++;
    }
    return dec;
}

int main()
{
    long long int n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);

    int decimal = BinToDec(n);
    if (n == 0)
    {
        printf("%lld = 0 in decimal", n);
        return 0;
    }
    else if (decimal == 0)
    {
        printf("Invalid binary number");
        return 1;
    }
    else
    {
        printf("%lld = %d in decimal", n, decimal);
        return 0;
    }
    
}