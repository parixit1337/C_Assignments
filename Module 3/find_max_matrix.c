#include <stdio.h>

// Write a program to find out the Max number from given Matrix

int main()
{
    int array[3][3]={};
    int max=0, temp;

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
        printf ("Enter Element [%d][%d] : ", i,j);
        scanf ("%d", &array[i][j]);
        temp = array[i][j];

        if (max < temp)
        {
            max = temp;
        }
        }
         printf ("\n");
    }

    printf ("\nMatrix : \n\n");

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
        printf ("%d ", array[i][j]);
        }
        printf ("\n");
    }


    printf ("\nMax Number : %d", max);


}