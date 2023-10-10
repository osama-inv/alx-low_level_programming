#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char i1 = '0';
char i2 = '0';
char i3 = '0';
char i4 = '0';
int i = 1440;

while (i--)
{
_putchar(i1);
_putchar(i2);
_putchar(':');
_putchar(i3);
_putchar(i4++);
_putchar('\n');
if(i4 == '9'+1)
{
i3++;
i4 = '0';
}
if(i3 == '6')
{
i2++;
i3 = '0';
}
if(i2 == '9'+1)
{
i1++;
i2 = '0';
}

}

return (0);
}

