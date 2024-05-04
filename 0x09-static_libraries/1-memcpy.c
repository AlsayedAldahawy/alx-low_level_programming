/**
 * _memcpy - a function that copies memory area.
 * @n: number of bytes being copied.
 * @src: pointer to source memory.
 * Return: a pointer to dest.
 * @dest: pointer to the destination memory area.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
