#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int (*func)(int, int); /*pointer to function*/
	int res, num1, num2;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = *argv[2]; /*derefrencing to the first character of the string*/

	if ((op == '/' || op == '%') & (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	res = func(num1, num2);

	printf("%d\n", res);
	return (0);
}
