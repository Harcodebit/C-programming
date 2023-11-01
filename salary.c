#include <stdio.h>

int main()
{
    int sal;

    printf("Enter the Salary");
    scanf("%d", &sal);

    printf(
        "Job title: %s\n", (sal >=25000 && sal <= 40000) ? "manager" : (sal >= 15000 && sal < 25000) ? "Accountant" : "clerk\n"
    );

    return 0;
}