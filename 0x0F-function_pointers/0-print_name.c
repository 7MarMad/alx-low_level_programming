#include <stdio.h>

/**
 * print_name - printing a name using a specific function depending on main
 * @name: name to be printed
 * @f: function pointer pointing to diferent functions
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
