#include "holberton.h"
#include <stdio.h>

/**
 * _puts - check the code for Holberton School students.
 * @str : char
 * Return: Always 0.
 */
void _puts(char *str)
{
int g;
for (g = 0 ; str[g] != NULL ; g++)
{
_putchar(str[g]);
}
_putchar('\n');
}
