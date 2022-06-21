#include <stdio.h>

/*
    Simple number comparison to find the maximum number
*/
int max_int(int number1, int number2)
{
    if(number1 > number2)
        return number1;

    return number2;
}

float max_float(float number1, float number2)
{
    if(number1 > number2)
        return number1;

    return number2;
}

/*
    Simple number comparison to find the minumum number
*/
int min_int(int number1, int number2)
{
    if(number1 < number2)
        return number1;

    return number2;
}

float min_float(float number1, float number2)
{
    if(number1 < number2)
        return number1;

    return number2;
}

/*
    Test if a number is even
*/
int is_even_int(int value)
{	
    // 0 is not odd or even
    // If mod of value is equal to 0 then is not odd, return true
	if ((value % 2) == 0 && value != 0)
		return 0;
	
	return 1;
}

/*
    Test if a number is odd
*/
int is_odd_int(int value)
{	
    // 0 is not odd or even
    // If mod of value is equal to 0 then is not odd, returns false
	if ((value % 2) == 0 && value != 0)
		return 1;
	
	return 0;
}

/*
    Test if an integer is prime
*/
int is_prime_int(int value)
{
    // 0 and 0 are not primes, then return false
    if (value == 0 || value == 1 || value == -1)
        return 1;
    
    // If n is divisible by i, then n is not prime, return false
    for (size_t i = 2; i <= value / 2; i++)
    {
        if (value % i == 0)
            return 1;
    }

    // If the value make it here, it means is probably prime, so return true
    return 0;
}

/*
    Convert integer to it's triangular value
*/
int triangular_number_int(int value)
{
    return ((value * (value + 1)) / 2);
}

/*
    Convert float to it's triangular value
*/
float triangular_number_float(float value)
{
    return ((value * (value + (float) 1)) / (float) 2);
}