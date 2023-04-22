#include<stdio.h>

/**
 * print_name - printing a name with function pointer
 * @name: arg
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
