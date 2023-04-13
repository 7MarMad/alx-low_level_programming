#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("this a lot of fun", "  School !!!", 30);
    printf("%shh\n", concat);
    free(concat);
    return (0);
}
