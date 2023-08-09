#include "main.h"
#include <string.h>

/**
* *argstostr - concatenates all the arguments of your program
* @ac: number of command line argument
* @av: pointer to pointerto char
* Return: pointer to new string
*/

char *argstostr(int ac, char **av)
{
	int i;
	unsigned int j, z, len = 0;
	char *strg;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	len += ac;
	strg = malloc(sizeof(char) * len);
	if (strg)
	{
		j = 0;
		for (i = 0; i < ac; i++)
		{
			for (z = 0; av[i][z] != '\0'; j++, z++)
			{
				strg[j] = av[i][z];
			}
			strg[j] = '\n';
			j++;
		}
		strg[j] = '\0';
		return (strg);
	}
	return (NULL);
}
