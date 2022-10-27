#include "main.h"
#include <stddef.h>
#include <string.h>
/**
* _strncpy - Copies at most an inputted number of bytes from string src into
*dest
* @dest: The buffer storing the string copy.
* @src: The source string.
* @n: The maximum number of bytes to copied from src.
* Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	return dest;
}
