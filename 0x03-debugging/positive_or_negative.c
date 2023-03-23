#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_nnegative - Entry point
 *
 * @n: arg
 * */
void positive_or_negative(int n)
{
        if (n < 0)
        {
                printf("%d is negative\n", n);
        }
        else if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else
        {
                printf("%d is zero\n", n);
        }
}
