#include <stdio.h>
#include <string.h>

#define NOT_FOUND (-1) // "Macroing"

/*
    Search for a int inside an array of int, if it is found the index is returned, if not returns (-1)
*/
int array_search_int(int *array, unsigned int length, int item)
{
    int result = NOT_FOUND;

    // Keep looping and just stop if it is the end of the array or the item was found
    for (size_t i = 0; i < length && result == NOT_FOUND; i++)
    {
        if (array[i] == item)
            result = i;
    }
    
    // Return the index or an invalid integer
    return result;
}

/*
    Search for a string inside an array of strings, if it is found the index is returned, if not returns (-1)
*/
int array_search_string(char **array, unsigned int length, char *item)
{
    int result = NOT_FOUND;

    // Keep looping and just stop if it is the end of the array or the item was found
    for (size_t i = 0; i < length && result == NOT_FOUND; i++)
    {
        if (strcmp(array[i], item) == 0)
            result = i;
    }
    
    // Return the index or an invalid integer
    return result;
}