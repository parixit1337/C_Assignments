#include <stdio.h>


//Area of Triangle, Rectangle and Circle

int main()
{
    int n,width,length,r,height,base;
    const float pi=3.14;

    printf ("\n1. Triangle\n2. Rectangle\n3. Circle\n\n");
    printf ("Select Option : ");
    scanf ("%d", &n);

    switch(n)
    {
    case 1 :
    printf ("Enter Height Value : ");
    scanf ("%d", &height);
    printf ("Enter Base Value : ");
    scanf ("%d", &base);
    printf ("Area of Triangle : %d", height * base / 2);
    break;

    case 2:
    printf ("Enter Width Value : ");
    scanf ("%d", &width);
    printf ("Enter Length Value : ");
    scanf ("%d", &length);
    printf ("Area of Rectangle : %d", width * length);
    break;

    case 3:
    printf ("Enter Radius Value (r) : ");
    scanf ("%d", &r);
    printf ("Area of Circle : %f", pi * r * r);
    break;

    default:
    printf ("Wrong Input !!");
    }

}