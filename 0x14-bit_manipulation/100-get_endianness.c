#include "main.h"

/**
 * get_endianness - check if a machine is a little or a big endian
 * Return: 0 for the big, 1 for the little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
