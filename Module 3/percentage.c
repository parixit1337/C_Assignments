#include <stdio.h>

int main()
{
    int maths,physics,gujarati,english,chemistry;
    int total;
    float percentage;

    printf ("\nEnter Marks of Subject\n\n");

    printf("Maths : ");
    scanf ("%d", &maths);
    printf("Physics : ");
    scanf ("%d", &physics);
    printf("Gujarati : ");
    scanf ("%d", &gujarati);
    printf("English : ");
    scanf ("%d", &english);
    printf("Chemistry : ");
    scanf ("%d", &chemistry);

    total = maths + physics + gujarati + english + chemistry;
    percentage = total / 5;


    printf ("\nTotal : %d\n", total);
    printf ("Percentage : %f\n", percentage);

    if (percentage > 75)
    {
        printf ("Result : Distinction");
    }
    else if (percentage > 60 && percentage<=75)
    {
        printf ("Result : First Class");
    }
    else if (percentage > 50 && percentage <= 60)
    {
        printf ("Result : Second Class");
    }
    else if (percentage > 35 && percentage <= 50)
    {
        printf ("Result : Pass Class");
    }
    else 
    {
        printf ("Result : Fail");
    }





}