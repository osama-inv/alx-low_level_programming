#include "main.h"
/**
 * get_endianness - returns the number of bits you would need to flip
 * Return: number of bits you would need to flip
 */
int get_endianness(void)
{
unsigned int x = 0x76543210;
char *c = (char *) &x;
return (*c == 0x10);
}
