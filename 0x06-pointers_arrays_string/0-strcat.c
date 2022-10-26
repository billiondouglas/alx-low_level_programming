#include "main.h"
#include<stdio.h>
#include<string.h>

/**
 * *_strcat - string concatenate.
 * @dest: input string
 * @src: input string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int j = strlen(src);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';
	return (0);
}
