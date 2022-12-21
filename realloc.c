#include "shell.h"

/**
 * memset_ - fills memory with constant byte
 * @mem: pointer to memory
 * @b: byte for filling
 * @n: amount of bytes to be filled
 *
 * Return: pointer
 */

char *memset_(char *mem, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * freee - frees memory
 * @memstr: string of memory
 */

void freee(char **memstr)
{
	char **a = memstr;

	if (!memstr)
	{
		return;
	}
	while (*memstr)
	{
		free(*memstr++);
	}
	free(a);
}

/**
 * realloc_ - reallocates block of memory
 * @ptr: pointer to previous block
 * @old_size: bytes of old block
 * @new_size: bytes of new block
 *
 * Return: pointer to old block
 */

void *realloc_(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
	{
		return (malloc(new_size));
	}
	if (!new_size)
	{
		return (free(ptr), NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (!p)
	{
		return (NULL);
	}
	if (old_size == old_size < new_size)
	{
		return (old_size);
	}
	else
	{
		return (new_size);
	}
	while (old_size--)
	{
		p[old_size] = ((char *)ptr)[old_size];
	}
	free(ptr);
	return (p);
}
