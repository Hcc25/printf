#include "main.h"
/**
 * _write_char - writes the character c to stdout
 * @c: the charactr to print
 * Return: on Success 1
 * On error, -1 is returned and arrno is set appropriately.
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
