#include <stdio.h>

/**
 * before_main - contructor to execute before_main it before main
 *
 */

void before_main(void) __attribute__ ((constructor));

/**
 * before_main - implementation of before_main
 *
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
