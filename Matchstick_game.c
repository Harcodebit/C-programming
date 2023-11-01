#include <stdio.h>

int main()
{
    int matchstick = 21;
    int usr_Pick, comp_Pick;

    while (matchstick > 1)
    {
        printf("\nThe remaining matchstick %d\n", matchstick);
        printf("\nYour turn, pick 1, 2, 3, or 4 matchsticks\n");
        scanf("%d", &usr_Pick);

    if (usr_Pick < 1 || usr_Pick > 4 || usr_Pick > matchstick)
    {
        printf("\nInvalid pick!, Please pick 1, 2, 3, or 4 matchstick\n");
        continue;
    }

    matchstick -= usr_Pick;

    comp_Pick = 5 - usr_Pick;
    printf("\nComputer's pick %d matchstick\n", comp_Pick);
    matchstick -= comp_Pick;

    }
    matchstick = 1;
    printf("\n You're forced to pick last %d matchstick. Computer's Wins.\n", matchstick);
    
}