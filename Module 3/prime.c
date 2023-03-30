#include <stdio.h>

int main()
{
    int  n,prime=0;
    printf ("Enter Number : ");
    scanf ("%d", &n);

    for (int i=1; i<=n; i++)
    {
        if (n % i == 0)
        {
            prime++;
        }
    }

    if (prime == 0)
    {
        printf ("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}