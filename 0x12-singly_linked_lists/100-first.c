#include <stdio.h>
void first_func_print(void) __attribute__((constructor));

/**
 * func_print - prints sentence before main
 */
void first_func_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
