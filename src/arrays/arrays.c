#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "../../include/math/math.h"
#include "../../include/strings/strings.h"

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

/*
    Selection sorting algorithm to order an array of integers
*/
int *array_sort_int(int *array, size_t length, char *order)
{
    // Loop until the penultimate index, the last index will be ordered by definition
    for (size_t i = 0; i < length - 1; i++)
    {
        size_t target_pos = i; 
        // Start searching from the last sorted item
        for (size_t j = i + 1; j < length; j++)
        {        
            // Define the order or the sorting
            if (strcmp(order, "down") == 0)
            {
                // if the actual (i+1) position is greater than the last orderder position, save that index to swap down below
                target_pos = (array[j] > array[target_pos]) ? j : target_pos;
            }
            else
            {
                // if the actual (i+1) position is lower than the last orderder position, save that index to swap down below
                target_pos = (array[j] < array[target_pos]) ? j : target_pos;
            }
        }

        // If the saved index is not the last ordered index, then swap positions
        if (target_pos != i)
        {
            int temp = array[i];
            array[i] = array[target_pos];
            array[target_pos] = temp;
        }        
    }    

    return array;
}

/*
    Selection sorting algorithm to order an array of floats
*/
float *array_sort_float(float *array, size_t length, char *order)
{
    // Loop until the penultimate index, the last index will be ordered by definition
    for (size_t i = 0; i < length - 1; i++)
    {
        size_t target_pos = i; 
        // Start searching from the last sorted item
        for (size_t j = i + 1; j < length; j++)
        {        
            // Define the order or the sorting
            if (strcmp(order, "down") == 0)
            {
                // if the actual (i+1) position is greater than the last orderder position, save that index to swap down below
                target_pos = (array[j] > array[target_pos]) ? j : target_pos;
            }
            else
            {
                // if the actual (i+1) position is lower than the last orderder position, save that index to swap down below
                target_pos = (array[j] < array[target_pos]) ? j : target_pos;
            }
        }

        // If the saved index is not the last ordered index, then swap positions
        if (target_pos != i)
        {
            float temp = array[i];
            array[i] = array[target_pos];
            array[target_pos] = temp;
        }        
    }    

    return array;
}

/*
    Selection sorting algorithm to order an array of chars
*/
char *array_sort_char(char *array, size_t length, char *order)
{
    // Loop until the penultimate index, the last index will be ordered by definition
    for (size_t i = 0; i < length - 1; i++)
    {
        size_t target_pos = i; 
        // Start searching from the last sorted item
        for (size_t j = i + 1; j < length; j++)
        {        
            // Define the order or the sorting
            if (strcmp(order, "down") == 0)
            {
                // if the actual (i+1) position is greater than the last orderder position, save that index to swap down below
                target_pos = (array[j] > array[target_pos]) ? j : target_pos;
            }
            else
            {
                // if the actual (i+1) position is lower than the last orderder position, save that index to swap down below
                target_pos = (array[j] < array[target_pos]) ? j : target_pos;
            }
        }

        // If the saved index is not the last ordered index, then swap positions
        if (target_pos != i)
        {
            char temp = array[i];
            array[i] = array[target_pos];
            array[target_pos] = temp;
        }        
    }    

    return array;
}

/*
    Array push function (for integers)

    It reallocates memory bytes based in the new size of the array (old length + 1),
    and adds one item to the top
*/
void array_push_int(int *array, size_t length, int item)
{
    unsigned int position = length - 1;

    array = (int *) realloc(array, (length * sizeof(item)));
    
    array[position] = item;
}

/*
    Array push function (for floats)

    It reallocates memory bytes based in the new size of the array (old length + 1),
    and adds one item to the top
*/
void array_push_float(float *array, size_t length, float item)
{
    unsigned int position = length - 1;

    array = (float *) realloc(array, (length * sizeof(item)));
    
    array[position] = item;
}

/*
    Array push function (for chars)

    It reallocates memory bytes based in the new size of the array (old length + 1),
    and adds one item to the top
*/
void array_push_char(char *array, size_t length, char item)
{
    unsigned int position = length - 1;

    array = (char *) realloc(array, (length * sizeof(item)));
    
    array[position] = item;
}

/*
    Comparison between an array of numbers to find the maximum
*/
int array_max_int(int *array, size_t length)
{
    if (length == 0)
    {
        return 0;
    } 
    else if (length == 1)
    {
        return array[0];
    }

    int maximum = array[0]; 
     
    for (size_t i = 1; i < length; i++)
    {   
        maximum = max_int(maximum, array[i]);
    }
    
    return maximum;
}

/*
    Comparison between an array of numbers to find the maximum
*/
float array_max_float(float *array, size_t length)
{
    if (length == 0)
    {
        return 0;
    } 
    else if (length == 1)
    {
        return array[0];
    }

    float maximum = array[0];  

    for (size_t i = 1; i < length; i++)
    {   
        maximum = max_float(maximum, array[i]);
    }
    
    return maximum;
}

/*
    Comparison between an array of numbers to find the minimum
*/
int array_min_int(int *array, size_t length)
{
    if (length == 0)
    {
        return 0;
    } 
    else if (length == 1)
    {
        return array[0];
    }

    int minimum = array[0];  

    for (size_t i = 1; i < length; i++)
    {   
        minimum = min_int(minimum, array[i]);
    }
    
    return minimum;
}

/*
    Comparison between an array of numbers to find the minimum
*/
float array_min_float(float *array, size_t length)
{
    if (length == 0)
    {
        return (float) 0;
    } 
    else if (length == 1)
    {
        return array[0];
    }

    float minimum = array[0]; 

    for (size_t i = 1; i < length; i++)
    {   
        minimum = min_float(minimum, array[i]);
    }
    
    return minimum;
}

/*
    Comparison between an array of numbers to find the maximum
*/
char array_max_char(char *array, size_t length)
{
    if (length == 0)
    {
        return '\0';
    } 
    else if (length == 1)
    {
        return array[0];
    }

    char maximum = array[0]; 
     
    for (size_t i = 1; i < length; i++)
    {   
        maximum = max_char(maximum, array[i]);
    }
    
    return maximum;
}

/*
    Comparison between an array of characters to find the lowest char in the array
*/
char array_min_char(char *array, size_t length)
{
    if (length == 0)
    {
        return '\0';
    } 
    else if (length == 1)
    {
        return array[0];
    }

    char minimum = array[0]; 

    for (size_t i = 1; i < length; i++)
    {   
        minimum = min_char(minimum, array[i]);
    }
    
    return minimum;
}

/*
    Get average value of an array of integers
*/
int array_average_int(int *array, size_t length)
{
    int sum = 0;

    for (size_t i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (sum / length);
}

/*
    Get average value of an array of floats
*/
float array_average_float(float *array, size_t length)
{
    float sum = 0.0;

    for (size_t i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (sum / (float)length);
}