#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * positive_or_negative - program check if the random number
 * positive, negative or zero.
 * @i: argument
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i < 0)
		printf("%i is negative\n", i);
	else
		printf("%i is zero\n", i);
}
