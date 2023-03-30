#include <stdio.h>

int main()

{
    int n;
    printf ("Enter Number : ");
    scanf ("%d", &n);

    while (n !=0)
    {
        printf ("%d",n % 10);
        n = n / 10;
    }
    
}