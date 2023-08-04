#include "main.h"
#include <string.h>
/**
 * is_palindrome_helper - function that check if a string is palindome
 *
 * @str: pointer to a string
 * @start: first index
 * @end: last index
 * Return: 0 if is not palindrome, 1 if its palindrome
 */

int is_palindrome_helper(char *str, int start, int end)
{
	if (start >= end)
		return (1);
	if (str[start] == str[end])
		return (is_palindrome_helper(str, start + 1, end - 1));
	return (0);
}

/**
 * is_palindrome - function that returns 1 if a
 * string is a palindrome and 0 if not.
 * @s: pointer to a string
 *
 * Return: If the string is not plaindrom - 0, ff yes - 1.
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
