#include "shell.h"

/**
 * main - Entry point for shell program
 *
 * Return: 0 on success
 */

int main(void)
{
	/* check if descriptor is asssociated with a terminal*/
	if (isatty(STDIN_FILENO) == 1)
	{
		interactive_mode();
	}
	else
	{
		non_interactive_mode();
	}
	return (0);
}
