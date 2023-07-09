#include <stdio.h>

int main()
{
    int marks1, marks2, marks3, marks4, marks5;
    int total_marks = 500;

    printf("Enter marks get into subject1:");
    scanf("%d", &marks1);


    printf("Enter marks get into subject2:");
    scanf("%d", &marks2);


    printf("Enter marks get into subject3:");
    scanf("%d", &marks3);


    printf("Enter marks get into subject4:");
    scanf("%d", &marks4);


    printf("Enter marks get into subject5:");
    scanf("%d", &marks5);

    float aggregateMarks = marks1 + marks2 + marks3 + marks4 +marks5;
    float percentage = (aggregateMarks/total_marks) * 100;

    printf("Aggregate marks is : %f\n", aggregateMarks);
    printf("Percentage marks is : %f\n",percentage);

    return 0;


}