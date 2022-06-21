#include <stdio.h>
#include <string.h>

#include "../../../include/core/exercises/ejercicios.h"
#include "../../../include/core/menu/menu.h"
#include "../../../include/arrays/arrays.h"


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
    case 4:
        ejercicio_4();
        break;
    case 5:
        ejercicio_5();
        break;
    case 6:
        ejercicio_6();
        break;
    case 7:
        ejercicio_7();
        break;
    case 8:
        ejercicio_8();
        break;
    case 9:
        ejercicio_9();
        break;
    case 10:
        ejercicio_10();
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
    else if (strcmp(option, "04") == 0)
    {
        ejercicio_4();
    } 
    else if (strcmp(option, "05") == 0)
    {
        ejercicio_5();
    } 
    else if (strcmp(option, "06") == 0)
    {
        ejercicio_6();
    } 
    else if (strcmp(option, "07") == 0)
    {
        ejercicio_7();
    } 
    else if (strcmp(option, "08") == 0)
    {
        ejercicio_8();
    } 
    else if (strcmp(option, "09") == 0)
    {
        ejercicio_9();
    } 
    else if (strcmp(option, "10") == 0)
    {
        ejercicio_10();
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

/*
    Automate user input for numbers and store them in array
*/
int stdin_populate_array(char *message, void *array, const unsigned int min, char data_type)
{
    // Start the size counter
    size_t count = 0;

    // Check for silly values
    if (min == 0)
        return count;

    // To store user's answer
    char input;

    do
    {   
        // Update the size of the array    
        count++;

        // Ask for user input
        printf("%s", message);
        fflush(stdin);

        // Check the data type the user wants to enter and store
        switch (data_type)
        {
        case 'N':
        case 'n':
            unsigned int natural = 0;
            scanf("%d", &natural);
            // Store the value into the array
            array_push_int(array, count, natural);
            break;

        case 'Z':
        case 'z':
            int integer = 0;
            scanf("%d", &integer);
            // Store the value into the array
            array_push_int(array, count, integer);
            break;

        case 'Q':
        case 'q':
            float rational = 0;
            scanf("%f", &rational);
            // Store the value into the array
            array_push_float(array, count, rational);
            break;
        
        default:
            return count;
        }

        // If count exceeds the minimum, starts asking the user for input
        if (count >= min)
        {
            printf("Desea continuar? (y/n): ");
            fflush(stdin);
            scanf(" %c", &input);
        }        

    } while (count < min || (input == 'y' || input == 'Y'));

    // Return to total count of entered values
    return count;
}