#include <stdio.h>

// 0 1 1 2 3 5 8...

int main()
{
    int t1=0, t2=1, t3=1, temp, n;

    printf ("Enter Number : ");
    scanf ("%d", &n);

    printf ("%d ", t1);
    printf ("%d ", t2);

    for (int i=0; i<=n; i++)
    {
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;

        if (t3 <= n)
        {

         printf ("%d ", t3);

        }
    }

   
}