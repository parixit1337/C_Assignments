#include <stdio.h>

// Write a program to find out the max number from given 10 elements of array

int main()
{
    int array[10]={};
    int max=0, temp;

    for (int i=0; i<10; i++)
    {
        printf ("Enter Element %d : ", i);
        scanf ("%d", &array[i]);
        temp = array[i];

        if (max < temp)
        {
            max = temp;
        }
    }

    printf ("\nElement list : ");

    for (int j=0; j<10; j++)
    {
        printf ("%d ", array[j]);
    }

    printf ("\nMax Number : %d", max);


}