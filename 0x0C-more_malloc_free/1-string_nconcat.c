#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 * Return: pointer to allocated memory containing s1 and n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	for (i = 0; s1[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
		concat[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i];
	concat[len] = '\0';
	return (concat);
}