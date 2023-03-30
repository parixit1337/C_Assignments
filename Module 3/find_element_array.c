#include <stdio.h>

// Write a Program of find the element of given position from the array 

int main()
{
    int array[10]={};
    int search, error=0;

    printf ("\nEnter 10 Array Elements : \n\n");

    for (int i=0; i<10; i++)
    {
        printf ("Enter Element %d : ", i);
        scanf ("%d", &array[i]);
    }

    printf ("\nElement list : ");

    for (int j=0; j<10; j++)
    {
        printf ("%d ", array[j]);
    }

    printf ("\nSearch Element : ");
    scanf ("%d", &search);

    for (int j=0; j<10; j++)
    {
        if (search == array[j])
        {
            printf ("Element %d Found at %d index.", array[j], j);
            error=0;
            break;
        }
        else 
        {
            error=1;
        }
    }

    if (error == 1)
    {
        printf ("Element Not Found !");
    }


}