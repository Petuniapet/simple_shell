#include "shell.h"

/**
 * env - function that prints enviroment variables
 * @args: arguments
 *
 * Return: 1 on success, 0 otherwise
 */
int env(void)
{
	int index = 0;

	while (environ[index])
	{
		write(STDOUT_FILENO, environ[index], str_len(environ[index]));
		write(STDOUT_FILENO, "\n", 1);
		index++;
	}
	return (1);
}
