#include<stdio.h>
#include<ctype.h>
#include "main.h"

/**
 * _islower - searshing for lowercase character
 *
 * Retrun: on success 1. on failure 0
 */
int _islower(int c)
{
	int i;

	if (islower(c) == 0)
		i = 0;
	else
		i = 1;
}
