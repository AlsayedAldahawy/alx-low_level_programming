#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the appropriate function based on the operator.
 * @s: The operator string.
 *
 * Description:
 * This function takes an operator string and returns a function pointer
 * corresponding to the specified operation. It searches through an array
 * of valid operators and their associated functions.
 *
 * Return: Pointer to the selected function, or NULL if not found.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (ops[i].op)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
