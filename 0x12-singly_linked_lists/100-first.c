#include <stdio.h>

/**
 * startup_func - executing the function before the main
 *
 */
void startup_func(void) __attribute__ ((constructor));

void startup_func(void)
{
	printf("You're beat! and yet, you must allow,\n
		I bore my house upon my back!\n");
}
