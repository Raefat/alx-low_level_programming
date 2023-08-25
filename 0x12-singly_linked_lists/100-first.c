#include <stdio.h>

/**
 * before_main_fun - constructor to execute before_main() it before main
 *
 */
void before_main_fun(void) __attribute__ ((constructor));

/**
 * before_main_fun - implementation of before_main
 *
 */
void before_main_fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
