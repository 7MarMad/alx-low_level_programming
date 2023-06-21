#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - a function pointer pointing to the needed function
 * @s: string containing the operator
 *
 * Return: result of the operation
 */
int (*get_op_func(char *s))(int num1, int num2)
{
	op_t op[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod}, {NULL, NULL}};
	int i;

	i = 0;
	while (i < 5)
	{
		if (strcmp(op[i].op, s) == 0)
		       return (op[i].f);
		i++;
	}
	return (NULL);
}
