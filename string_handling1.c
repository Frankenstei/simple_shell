#include "shell.h"

/**
 * strcpy_ - copies string
 * @dest: destination
 * @src: source
 *
 * Return: pointer to destination
 */

char *strcpy_(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * strdup_ - duplicates string
 * @str: string
 *
 * Return: pointer to duplicate
 */

char *strdup_(const char *str)
{
	int i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
	{
		return (NULL);
	}
	for (i++; i--;)
	{
		ptr[i] = --*str;
	}
	return (ptr);
}

/**
 * puts_ - prints input string
 * @str: string to print
 *
 * Return: void
 */

void puts_(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}

/**
 * putchar_ - prints character to stdout
 *
 * @c: character
 * Return: integer
 */

int putchar_(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
	{
		buf[i++] = c;
	}
	return (1);
}
