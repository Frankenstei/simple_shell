#include "shell.h"

/**
 * strlen_ - returns string length
 * @str: string to be checked
 *
 * Return: length of string
 */

int strlen_(char *str)
{
	int i;

	if (str == NULL)
	{
		return (0);
	}

	for (i = 0; str != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 * strcmp_ - compares two strings
 * @str1: first string
 * @str2: second string
 *
 * Return: integer
 */

int strcmp_(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	if (*str1 == *str2)
	{
		return (0);
	}
	else if (*str1 < *str2)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

/**
 * strstart_ - checks that needle starts haystack
 * @haystack: main string
 * @needle: sub string
 *
 * Return: haystack
 */

char *strstart_(const char *haystack, const char *needle)
{
	while (*needle)
	{
		if (*needle++ != *haystack++)
		{
			return (NULL);
		}
		return ((char *)haystack);
	}
}

/**
 * strcat_ - concatenate two strings
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: pointer to destination
 */

char *strcat_(char *dest, char *src)
{
	int i, length;

	for (length = 0; dest[length] != '\0'; length++)
	{
		;
	}

	for (i = 0; src[i] != '\0'; i++, length++)
	{
		dest[length] = src[i];
	}
	dest[length] = '\0';
	return dest;
}
