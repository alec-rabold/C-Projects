/* This program asks for a last name, and if the user has a last
name that starts with a letter between P and S, they will be sent to
a special room for their tickets. */

#include <stdio.h>

main()
{
    // Set up an array for the last name and then get it from the user

    char name[25];
    printf("What is your last name? ");
    printf("(Please capitalize the first letter!)\n");
    scanf(" %s", name);
    // For a string array, you don't need the &
    if ((name[0] >= 'P') && (name[0] <= 'S'))
    {
        printf("You must go to Room 2432 ");
        printf("for your tickets.\n");
    }
    else
    {
        printf("You can get your tickets here.\n");
    }

    return 0;

}
