#include "main.h"

/**
 * get_flags - Picks out all the flags from a format string
 * @flagPtr: A pointer to the the first flag
 *
 * Return: A pointer to a string of flags
 */
char *get_flags(char *flagPtr)
{
	int i, j;
	char *flagStr;

	/*Count the flags*/
	i = 0;
	while (!_isalpha(flagPtr[i]) && flagPtr[i] != '%' && flagPtr[i] != '\0')
	{
		i++;
	}

	/*If no flag is found, return*/
	if (i == 0)
		return (NULL);

	/*If flags are found, allocate memory and insert flags*/
	flagStr = malloc(sizeof(char) * (i + 1));

	if (flagStr == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		flagStr[j] = flagPtr[j];
		j++;
	}

	/*Close off with a string terminator*/
	flagStr[j] = '\0';

	return (flagStr);
}
