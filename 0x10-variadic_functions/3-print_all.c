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

	while (format[len])
		len++;
	va_start(args, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			default:
				break;
		}
		if (i < len - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
