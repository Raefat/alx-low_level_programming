#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 *
 * @format: pointer to a string
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, len = 0;
	va_list args;
	char *str;
	int marker = 0;

	while (format[len])
		len++;
	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				marker = 0;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				marker = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				marker = 0;
				break;
			case 's':
				str = va_arg(args, char*);
				marker = 0;
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				marker = 1;
				break;
		}
		if (i < len - 1 && marker != 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
