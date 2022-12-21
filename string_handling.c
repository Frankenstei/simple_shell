#include "shell.h"

/**
 * strlen_ - returns string length
 * @s: string to be checked
 *
 * Return: length of string
 */

int strlen_(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * strcmp_ - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: integer
 */

int strcmp_(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * strstart_ - checks that needle starts haystack
 * @haystack: main string
 * @needle: sub string
 *
 * Return: haystack
 */

char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenate two strings
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
