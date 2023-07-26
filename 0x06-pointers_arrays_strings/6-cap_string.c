#include "main.h"

/**
 * cap_string - function that changes all lowercase letters
 * of a string to uppercase.
 *
 * @s: pointer to string
 *
 * Return: uppercase string
 */

char *cap_string(char *s)
{
	int i = 1;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z'))
		{
			if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'
				|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '\"'
				|| s[i - 1] == '.' || s[i - 1] == '(' || s[i - 1] == ')'
				|| s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == '?'
				|| s[i - 1] == '!')
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
