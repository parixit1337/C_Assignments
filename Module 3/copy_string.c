#include <stdio.h>
#include <string.h>

// Write a program to copy string from one string to another string with user define function.

void copy1(char x[])
{
    char str2[20];
    strcpy(str2,x);

    printf ("Enter String 2 value : %s", str2);
}

int main()
{
    char str1[20] = "Hello";

    printf ("Enter String 1 value : ");
    scanf ("%s", str1);

    copy1(str1);
}