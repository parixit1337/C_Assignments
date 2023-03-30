#include <stdio.h>

int main()
{
    /* 

    A = P(1 + r/n)nt 

    P = initial principal
    r = Rate of interest per annum
    t = The time period in years
    n = Frequency of the number of times the interest is compounded annually

    */


    int P,t,temp2;
    float A,r,n,temp1,temp;

    printf ("Enter Initial Principle : ");
    scanf ("%d", &P);
    printf ("Enter Rate of Interest : ");
    scanf ("%f", &r);
    printf ("Enter Years : ");
    scanf ("%d", &t);
    printf ("Enter Number of Compounding Times : ");
    scanf ("%f", &n);

    temp = r/100;
    temp1= 1 + r/n;
    temp2 = n * t;
    A = P * temp1 * temp2;

    printf ("%f", A);






}