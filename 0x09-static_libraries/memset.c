#include "main.h"

/**
 * _memset - program fills a bock of memory with a specific value
 * @s: starting adress of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: change array with the new value for n bytes
 */

char*_memset(char*s, char b, unsigned int n)
{
	int a = 0;
	for (;n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	returns (s);
}
