#include <stdio.h>

/*
    Simple number comparison to find the maximum number
*/
int max_int(int number1, int number2)
{
    if(number1 > number2)
    {
        return number1;
    }

    return number2;
}

float max_float(float number1, float number2)
{
    if(number1 > number2)
    {
        return number1;
    }

    return number2;
}

/*
    Simple number comparison to find the minumum number
*/
int min_int(int number1, int number2)
{
    if(number1 < number2)
    {
        return number1;
    }

    return number2;
}

float min_float(float number1, float number2)
{
    if(number1 < number2)
    {
        return number1;
    }

    return number2;
}
