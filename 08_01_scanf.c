/* This is a sample program that asks user for some basic data
and prints it on the screen in order to show what was entered */

#include <stdio.h>

main()
{
    // Set  up the variables that scanf will fill

    char firstInitial;
    char lastInitial;
    int age;
    int favorite_number;

    printf("What letter does your first name begin with?\n");
    scanf(" %c", &firstInitial);

    printf("What letter does your last name begin with?\n");
    scanf(" %c", &lastInitial);

    printf("How old are you?\n");
    scanf(" %d", &age);

    printf("What is your favorite number (integers only)?\n");
    scanf(" %d", &favorite_number);

    return 0;
}
