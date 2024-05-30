#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 *
 * Description:
 * This program demonstrates various pointer-related scenarios involving
 * const pointers, constant values, and memory manipulation.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int i = 7;
	int *ptr; /* Uninitialized pointer (dangerous) */
	const int x = 7; /* Constant integer */
	const int *y = &i; /* Pointer to a constant integer */

	int *const z = &i; /* Constant pointer to an integer */
	const int *const p = &i; /* Constant pointer to a constant integer */

	/* x = 8;  We can't change the value z points to (read-only) */

	i = 8; /* Modify the value of i (not recommended) */
	printf("%d\n", *y); /* Prints the value pointed to by y (i) */
	printf("%d\n", *ptr); /* Undefined behavior: ptr is uninitialized */
	printf("%p\n", (void *)ptr); /* Prints the address stored in ptr */

	*ptr = x; /* Undefined behavior: ptr is uninitialized */
	y = &x; /* We can change what address y points to */
	/* *y = x; We can't change the value that y points to (read-only) */

	printf("%d\n", *ptr); /* Prints the value pointed to by ptr (x) */
	printf("%d\n", *y); /* Prints the value pointed to by y (x) */

	*z = 11; /* We can change the value z points to (i = 11) */
	/* z = &x; Can't change the address z points to (constant pointer) */
	printf("%d\n", i); /* Prints the updated value of i */

	/* p = &x; Can't change neither the address nor the value p points to */
	/* *p = 15; Attempting to modify a constant value (compiler error) */

	return (0);
}
