#include <stdio.h>

void fibonacci(int n)
{
    int t1 = 0, t2 = 1, t3 = 1, temp;

    printf ("%d ", t1);
    printf ("%d ", t2);

    for (int i=0; i<n; i++)
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

void main()
{
    int n;
    printf ("Enter Number : ");
    scanf ("%d", &n);
    fibonacci(n);
}