#include "main.h"
/**
 * _strstr - locates first occurence of substring 'needle'
 * in entire string 'haystack'
 * @needle: substring
 * @haystack: entire string
 * Return: pointer to the beginning of the located substring or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *b;
	char *p;

	while (*haystack != '\0')
	{
		b = haystack;
		p = needle;

		while (*haystack != '\0' && *p != '\0' && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p) /* if end of needle is reached (*p == '\0')*/
			return (b);
		haystack = b + 1;
	}
	return (0); /*0 is same as NULL*/
}
