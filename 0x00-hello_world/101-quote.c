#include <stdio.h>

/**
 * main - main entry
 *
 * Description: program that prints some text
 *
 * Return: 1
*/


int main(void)
{	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;

	for (i = 0; txt[i] != '\0'; i++)
	{
		putchar(txt[i]);
	}
	return (1);
}
