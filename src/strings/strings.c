#include <stdio.h>

/*
    Simple character comparison to find the higher char
*/
char max_char(char c1, char c2)
{
    if(c1 > c2)
        return c1;

    return c2;
}


/*
    Simple character comparison to find the lowest char
*/
char min_char(char c1, char c2)
{
    if(c1 < c2)
        return c1;

    return c2;
}