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

/*
    Creates an array of integers from a minium number up to a maximum
*/
int *range_int(int start, int end)
{
    const size_t length = (size_t) abs(start - end);
    int *array = (int *) malloc(sizeof(int) * length);

    if (length == 0)
        return array;    

    int value = start;
    for (size_t i = 0; i < length; i++)
    {
        // Populate the array
        array[i] = value;
        // Increment the value 1 each iteration
        value = (start < end) ? (value + 1) : (value - 1);
    }
    
    return array;
}

/*
    Creates an array of floats from a minium number up to a maximum
*/
float *range_float(float start, float end)
{
    const size_t length = (size_t) abs(start - end);
    float *array = (float *) malloc(sizeof(float) * length);

    if (length == 0)
        return array;    

    float value = start;
    for (size_t i = 0; i < length; i++)
    {
        // Populate the array
        array[i] = value;
        // Increment the value 1 each iteration
        value = (start < end) ? (value + 1) : (value - 1);
    }
    
    return array;
}

/*
    Creates an array of doubles from a minium number up to a maximum
*/
double *range_double(double start, double end)
{
    const size_t length = (size_t) abs(start - end);
    double *array = (double *) malloc(sizeof(double) * length);

    if (length == 0)
        return array;    

    double value = start;
    for (size_t i = 0; i < length; i++)
    {
        // Populate the array
        array[i] = value;
        // Increment the value 1 each iteration
        value = (start < end) ? (value + 1) : (value - 1);
    }
    
    return array;
}

/*
    Simple array map function, iterates does aritmetic with the old array values, and creates a second array with the new values
*/
int *array_map_int(int *array, size_t length, int (*func)(int))
{
    int *new_array = (int *) malloc(sizeof(int) * length);

    for (size_t i = 0; i < length; i++)
        new_array[i] = func(array[i]);
    
    return new_array;    
}

/*
    Simple array map function, iterates does aritmetic with the old array values, and creates a second array with the new values
*/
float *array_map_float(float *array, size_t length, float (*func)(float))
{
    float *new_array = (float *) malloc(sizeof(float) * length);

    for (size_t i = 0; i < length; i++)
        new_array[i] = func(array[i]);
    
    return new_array; 
}

/*
    Evaluates every index and returns a new array with the values that pass the test
*/
size_t array_filter_int(int *array, size_t length, int *filtered, int (*func)(int))
{
    size_t new_size = 0;

    for (size_t i = 0; i < length; i++)
    {
        if (func(array[i]) == 0)
        {
            new_size++;
            array_push_int(filtered, new_size, array[i]);
        }
    }
    
    return new_size;    
}

/*
    Evaluates every index and returns a new array with the values that pass the test
*/
size_t array_filter_float(float *array, size_t length, float *filtered, int (*func)(float))
{
    size_t new_size = 0;

    for (size_t i = 0; i < length; i++)
    {
        if (func(array[i]) == 0)
        {
            new_size++;
            array_push_float(filtered, new_size, array[i]);
        }
    }
    
    return new_size;    
}

/*
    Print array in one line
*/
void print_array_int(int *array, size_t length, char *start, char *separator, char *end)
{
    char start_string[32];
    snprintf(start_string, 32, start, length);
    printf("%s", start_string);

    for (size_t i = 0; i < length; i++)
    {        
        printf("%d", array[i]);

        if (i < length - 1)   
            printf("%s ", separator);        
    }

    printf("%s", end);
}

/*
    Print array in one line
*/
void print_array_float(float *array, size_t length, char *start, char *separator, char *end)
{
    char start_string[32];
    snprintf(start_string, 32, start, length);
    printf("%s", start_string);

    for (size_t i = 0; i < length; i++)
    {        
        printf("%.2f", array[i]);

        if (i < length - 1)   
            printf("%s ", separator);        
    }

    printf("%s", end);
}

/*
    Print array in one line
*/
void print_array_double(double *array, size_t length, char *start, char *separator, char* end)
{
    char start_string[32];
    snprintf(start_string, 32, start, length);
    printf("%s", start_string);

    for (size_t i = 0; i < length; i++)
    {        
        printf("%.2f", array[i]);

        if (i < length - 1)   
            printf("%s ", separator);        
    }

    printf("%s", end);
}

/*
    Function to copy values from one array to another
*/
void copy_array_int(int *src, int *dest, size_t length)
{
    dest = (int *) malloc(sizeof(int));

    for (size_t i = 0; i < length; i++)
    {
        array_push_int(dest, (i + 1), src[i]);
    }
}