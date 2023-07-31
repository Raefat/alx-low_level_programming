#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: pointer to the first string
 * @needle: pointer to the second string
 * Return: pointer to the beginning located string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
