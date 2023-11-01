#include <stdio.h>

int main() 
{
    const int hourlyRate = 12;
    const int regularHours = 40;

    int employee = 1;

    printf("Overtime pay calculator.\n");

    while (employee <= 10)
    {
        int hoursWorked;

        printf("Enter hours worked for Employee %d.\n", employee);
        scanf("%d", &hoursWorked);


        if (hoursWorked <= regularHours)
        {
            printf("No overtime for Employee %d.\n", employee);
        } else {
             int overtimeHours = hoursWorked - regularHours;
            float overtimePay = overtimeHours * hourlyRate;

            
            printf("Overtime pay for Employee %d: Rs. %.2f\n", employee, overtimePay);
        }
        
        employee++;

    }

    return 0;
    
}