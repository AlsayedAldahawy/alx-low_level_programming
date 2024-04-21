#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * @size: size of sqaure array.
 * @a: 2-D array.
 * Address of arr[i][j] = Base Address + (i * y + j) * size
 */

void print_diagsums(int *a, int size)
{

	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0, j = 0; i < size; i++, j += size)
		sum1 += a[i + j];

	for (i = size - 1, j = 0; i >= 0 && j < size; i += size, j++)
		sum2 += a[i - j];

	printf("%d, %d\n", sum1, sum2);
}
