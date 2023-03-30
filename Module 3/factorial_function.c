#include <stdio.h>

void factorial(int n)
{
    int fact = 1;
    for (int i=n; i>0; i--)
    {
        fact = fact * i;
    }

    printf ("Factorial : %d", fact);
}

void main()
{
    int n;

    printf ("Enter Number : ");
    scanf ("%d", &n);
    factorial(n);
}