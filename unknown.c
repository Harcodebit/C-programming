#include <stdio.h>

// Function to display general information of the Learner Support Centre (LSC)
void displayGeneralInformation() {
    printf("General Information of the Learner Support Centre (LSC):\n");
    // Add details here.
    printf("LSC Name: ABC Learning Center\n");
    printf("Regional Centre: XYZ University\n");
    printf("Study Centre Coordinator: John Doe\n");
    printf("Programme In-Charge: Jane Smith\n");
    // Add more details as needed.
}

// Function to display programmes activated in the study centre
void displayProgrammes() {
    printf("Programmes Activated in the Study Centre:\n");
    // Add details here.
    printf("1. BCA (Bachelor of Computer Applications)\n");
    printf("2. MCA (Master of Computer Applications)\n");
    // Add more programmes as needed.
}

// Function to display scheduling of theory/practical sessions for BCA-MCA programmes
void displayScheduling() {
    printf("Scheduling of Theory/Practical Sessions for BCA-MCA Programmes:\n");
    // Add scheduling details here.
    printf("BCA Theory Sessions: Monday 10:00 AM - 12:00 PM\n");
    printf("BCA Practical Sessions: Wednesday 2:00 PM - 4:00 PM\n");
    printf("MCA Theory Sessions: Tuesday 11:00 AM - 1:00 PM\n");
    printf("MCA Practical Sessions: Thursday 3:00 PM - 5:00 PM\n");
    // Add more scheduling details as needed.
}

// Function to display academic councillor's details
void displayAcademicCouncillors() {
    printf("Academic Councillor's Details:\n");
    // Add councillor details here.
    printf("BCA Programme Academic Councillor: Dr. Emily Johnson\n");
    printf("MCA Programme Academic Councillor: Dr. David Miller\n");
    // Add more councillor details as needed.
}

// Function to display assignment submission schedules for various programmes
void displayAssignmentSchedules() {
    printf("Assignment Submission Schedules for Various Programmes:\n");
    // Add assignment schedules here.
    printf("BCA Assignments: Due every Sunday\n");
    printf("MCA Assignments: Due every Saturday\n");
    // Add more assignment schedules as needed.
}

int main() {
    int choice;

    while (1) {
        printf("\nOpening Menu:\n");
        printf("1) General Information of the Learner Support Centre(LSC)\n");
        printf("2) Programmes activated in the study centre\n");
        printf("3) Scheduling of theory/practical sessions for BCA-MCA programmes\n");
        printf("4) Academic Councillor’s Details\n");
        printf("5) Schedules for Assignment submissions for various programmes\n");
        printf("6) Quit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a valid choice (1-6).\n");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                displayGeneralInformation();
                break;
            case 2:
                displayProgrammes();
                break;
            case 3:
                displayScheduling();
                break;
            case 4:
                displayAcademicCouncillors();
                break;
            case 5:
                displayAssignmentSchedules();
                break;
            case 6:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option (1-6).\n");
                break;
        }
    }

    return 0;
}