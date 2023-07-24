#include "main.h"
/**
 * rev_string - function that reerves a string
 *
 * @s: pointer to a string
 */

void rev_string(char *s)
{
	int start, end = 0;
	char tmp;

	while (s[end] > '\0')
		end++;

	end--;
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
	putchar('\n');
}
