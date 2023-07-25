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
	int firstNumIdx = 0, lastNumIdx = 0, num = 0, ten = 1, isPositive;

	while (s[firstNumIdx] > '9' || s[firstNumIdx] < '0')
		firstNumIdx++;

	lastNumIdx = firstNumIdx;
	while (s[lastNumIdx] <= '9' && s[lastNumIdx] >= '0')
		lastNumIdx++;

	isPositive = s[firstNumIdx - 1] == '-' ? 0 : 1;

	while (lastNumIdx > firstNumIdx)
	{
		lastNumIdx--;
		num += (s[lastNumIdx] - '0') * ten;
		ten *= 10;
	}
	return (isPositive ? num : -num);
}
