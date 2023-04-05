#include <stdio.h>
#include <string.h>

/* 
Write a program of structure for five employee that provides the following 
information print and display empno, empname, address and age 
*/

struct emploee{
    int empno;
    char empname[20];
    char address[30];
    int age;
};

int main()
{
    struct emploee emp1;
    emp1.empno = 1;
    emp1.age = 23;
    strcpy(emp1.empname, "Jay");
    strcpy(emp1.address, "Surat");

    struct emploee emp2;
    emp2.empno = 2;
    emp2.age = 26;
    strcpy(emp2.empname, "Om");
    strcpy(emp2.address, "Anand");

    struct emploee emp3;
    emp3.empno = 3;
    emp3.age = 25;
    strcpy(emp3.empname, "Rahul");
    strcpy(emp3.address, "Rajkot");

    struct emploee emp4;
    emp4.empno = 4;
    emp4.age = 23;
    strcpy(emp4.empname, "Ravi");
    strcpy(emp4.address, "Bhavnagar");

    struct emploee emp5;
    emp5.empno = 5;
    emp5.age = 24;
    strcpy(emp5.empname, "Sagar");
    strcpy(emp5.address, "Surat");




    printf ("Emploee Number : %d\n",emp1.empno);
    printf ("Emploee Name : %s\n",emp1.empname);
    printf ("Emploee Address : %s\n",emp1.address);
    printf ("Emploee Age : %d\n",emp1.age);
    printf ("\n");

    printf ("Emploee Number : %d\n",emp2.empno);
    printf ("Emploee Name : %s\n",emp2.empname);
    printf ("Emploee Address : %s\n",emp2.address);
    printf ("Emploee Age : %d\n",emp2.age);
    printf ("\n");

    printf ("Emploee Number : %d\n",emp3.empno);
    printf ("Emploee Name : %s\n",emp3.empname);
    printf ("Emploee Address : %s\n",emp3.address);
    printf ("Emploee Age : %d\n",emp3.age);
    printf ("\n");

    printf ("Emploee Number : %d\n",emp4.empno);
    printf ("Emploee Name : %s\n",emp4.empname);
    printf ("Emploee Address : %s\n",emp4.address);
    printf ("Emploee Age : %d\n",emp4.age);
    printf ("\n");

    printf ("Emploee Number : %d\n",emp5.empno);
    printf ("Emploee Name : %s\n",emp5.empname);
    printf ("Emploee Address : %s\n",emp5.address);
    printf ("Emploee Age : %d\n",emp5.age);
}
