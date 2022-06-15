#include <stdio.h>
#include <string.h> // For strcmp()
#include <stdlib.h> // For system()

// Custom libraries
#include "../../include/core/main.h"
#include "../../include/core/menu/menu.h"
#include "../../include/arrays/arrays.h"

// Predefine in the preprocessor the length for the list of exercises
#define AMOUNT_EXERCISES 10

int main(void) 
{   
    
    int exercises[AMOUNT_EXERCISES];
    // Populate the list
    for(int i = 0; i < AMOUNT_EXERCISES; i++)
    {
        exercises[i] = i + 1;  
    }
    // Launching the App
    app_v1(exercises, AMOUNT_EXERCISES); 
    

    /*
    char *exercises[AMOUNT_EXERCISES] = {"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13"};
    // Launching the App
    app_v2(exercises, AMOUNT_EXERCISES);
    */

    // Closing the program and the prompt
    system("exit");

    return 0;
}

/*
    Integer list mode
*/
void app_v1(int *list, unsigned int length) 
{
    unsigned int option;

    // Show the menu while the options are inside the array
    do
    {       
        // Displaying the options
        show_menu_int(list, length);

        // Asking for the input
        printf("Ingrese codigo (sin parentesis): ");
        fflush(stdin);
        scanf("%d", &option);

        // Clean the console after choosing the exercise
        system("clear");

        // Redundant, but necessary to print the title right here, and not write it to each exercise file
        if (array_search_int(list, length, option) == -1)
        {
            break;
        }        
        
        // If the option matches the number from an excercise, then launch it
        launch_exercise_int(option);

    } while (array_search_int(list, length, option) >= 0);

}

/*
    String list mode
*/
void app_v2(char **list, unsigned int length)
{
    char option[5];

    // Show the menu while the options are inside the array
    do
    {       
        // Displaying the options
        show_menu_string(list, length);

        // Asking for the input
        printf("Ingrese codigo (sin parentesis): ");
        fflush(stdin);
        scanf("%s", option);

        // Clean the console after choosing the exercise
        system("clear");

        // Redundant, but necessary to print the title right here, and not write it to each exercise file
        if (array_search_string(list, length, option) == -1)
        {
            // Freeing the allocated memory of this string
            memset(option, 0, sizeof(option));
            break;
        }        
        
        // If the option matches the number from an excercise, then launch it
        launch_exercise_string(option);

    } while (array_search_string(list, length, option) >= 0);
}