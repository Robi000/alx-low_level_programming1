#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: copy destination
 * @src: copy source
 * @n: bytes to be copied
 * Return: copied string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str)
	{
		str++;
		length++;
	}

	return (length);

}


/**
 *_strcat - concatinates two strings
 *@dest:destination pointer
 *@src:pointer to a string
 *Return: concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cat = dest + _strlen(dest);
	int length =  _strlen(dest);

	while (*src && n--)
	{
		*cat = *src;
		src++;
		cat++;
        	length++;
	}
	*cat = '\0';
	cat -= (length);
	//*dest = *cat;

	return (cat);
}
