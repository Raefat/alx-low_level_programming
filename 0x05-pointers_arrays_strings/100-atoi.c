#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 *
 * @s: pointer to the string
 *
 * Return: the converted number
 */

int _atoi(char *s)
{
	int firstNumIdx = -1, lastNumIdx = -1, isPositive = 1;
	unsigned int i, num = 0, ten = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			isPositive = !isPositive;
		if (s[i] <= '9' && s[i] >= '0')
		{
			if (firstNumIdx == -1)
			{
				firstNumIdx = i;
				lastNumIdx = i;
			}
			else
				lastNumIdx = i;
			if (s[i + 1] > '9' || s[i + 1] < '0')
				break;
		}
	}
	firstNumIdx = firstNumIdx == -1 ? 0 : firstNumIdx;
	while (lastNumIdx >= firstNumIdx)
	{
		num += (s[lastNumIdx] - '0') * ten;
		ten *= 10;
		lastNumIdx--;
	}
	return (isPositive ? num : -num);
}
