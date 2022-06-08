#include <stdio.h>
#include <string.h>

#include "../../../include/core/menu/menu.h"
#include "../../../include/core/exercises/ejercicios.h"


void print_menu_title(void);

/*
    Printing all the menu options an titles
*/
void show_menu_int(int *list, unsigned int length)
{   
    // Print title design
    print_menu_title();

    for (size_t i = 0; i < length; i++)
        printf(" (%d)", list[i]);

    printf("\nExit: (0)\n\n");
}

/*
    Printing all the menu options an titles
*/
void show_menu_string(char **list, unsigned int length)
{
    // Print title design
    print_menu_title();

    for (size_t i = 0; i < length; i++)
        printf(" (%s)", list[i]);

    printf("\nExit: (0)\n\n");
}

/*
    If the option(int) matches the any int in the list, then launch it
*/
void launch_exercise_int(int option)
{
    // Exercise title
    printf("\nEjercicio %d:", option);
    printf("\n----------------\n\n");

    switch (option)
    {
    case 1:
        ejercicio_1();
        break;
    case 2:
        ejercicio_2();
        break;
    case 3:
        ejercicio_3();
        break;
    default:
        break;
    }    
}

/*
    If the option(string) matches the any string in the list, then launch it
*/
void launch_exercise_string(char *option)
{
    // Exercise title
    printf("\nEjercicio %s:", option);
    printf("\n----------------\n\n");

    // If the option matches the number from an excercise, then launch it
    if (strcmp(option, "01") == 0)
    {
        ejercicio_1();
    } 
    else if (strcmp(option, "02") == 0)
    {
        ejercicio_2();
    } 
    else if (strcmp(option, "03") == 0)
    {
        ejercicio_3();
    } 
}

/*
    Print design
*/
void print_menu_title(void)
{
    printf("\n\n\n"); 
    printf("\n============");
    printf("\n    MENU    ");
    printf("\n============\n");

    printf("\nEjercicio:");
}