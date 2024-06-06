#include <stdio.h>

/**
 * constructor_function - Executes before main().
 *
 * Description: Prints a quote.
 */
void constructor_function(void) __attribute__((constructor));

void constructor_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
