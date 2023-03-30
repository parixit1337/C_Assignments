#include <stdio.h>

int main()
{
    int n,cnt=1;
    printf ("Enter Number : ");
    scanf ("%d", &n);

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf ("%d ", cnt);
            cnt++;
        }
        printf ("\n");
    }


}