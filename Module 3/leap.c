#include <stdio.h>

int main()
{
    int  n,mod;
    printf ("Enter Year : ");
    scanf ("%d", &n);

    mod = n % 4;

    if (mod == 0)
    {
        printf ("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}