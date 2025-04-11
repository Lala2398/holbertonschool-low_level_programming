#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - prototype for concatenates two strings
 *
 * @s1: - string
 * @s2: - string
 * @n: - n
 *
 * Return: always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i = 0;
char *strcon;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

if (n < len2)
len2 = n;
strcon = malloc((len1 + len2 + 1) * sizeof(char));

if (strcon == NULL)
return (NULL);

while (*s1)
{
*strcon++ = *s1++;
}
while (i < len2)
{
*strcon++ = *s2++;
i++;
}
*strcon = '\0';
return (strcon - (len1 + len2));
}

