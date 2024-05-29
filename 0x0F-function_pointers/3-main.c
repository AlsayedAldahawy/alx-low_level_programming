#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Description:
 * This program performs a mathematical operation on two integer operands
 * based on the specified operator. It uses a function pointer to select
 * the appropriate operation.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int); /* Pointer to function */
	int res, num1, num2;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98); /* Exit with error code 98 (invalid number of arguments) */
	}

	func = get_op_func(argv[2]); /* Get appropriate function based on operator */

	if (!func)
	{
		printf("Error\n");
		exit(99); /* Exit with error code 98 (invalid operator) */
	}

	num1 = atoi(argv[1]); /* Convert first argument to an integer */
	num2 = atoi(argv[3]); /* Convert third argument to an integer */
	op = *argv[2];		  /* Dereferencing to first character of operator string */

	if ((op == '/' || op == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100); /* Exit with error code 100 (division by zero) */
	}

	res = func(num1, num2); /* Perform the operation using selected function */

	printf("%d\n", res); /* Print the result */
	return (0);
}
