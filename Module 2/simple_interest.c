#include <stdio.h>

void main()
{
    int balance, rate, time;

    printf ("Enter Balance : ");
    scanf ("%d", &balance);

    printf ("Enter Interest Rate : ");
    scanf ("%d", &rate);

    printf ("Enter Time (in Years) : ");
    scanf ("%d", &time);

    printf ("Simple Interest : %d", balance * rate/100 * time);
}