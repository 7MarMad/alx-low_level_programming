#include <stdio.h>

/**
 * my_Startup_Func - a function that execute before main
 *
 */
void my_Startup_Func(void) __attribute__ ((constructor));

void my_Startup_Func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
