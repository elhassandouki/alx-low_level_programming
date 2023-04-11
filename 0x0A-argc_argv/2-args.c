#include <stdio>
#include <unistd.h>

/**
 * main - The Function
 * @argc:  The variable
 * @argv: THe variable
 * Return: The Return value/void
 */

int main(int argc, char **argv)
{
	if (argc >= 1)
	{
		while (*argv)
		{
			printf("%s\n", *argv);
			argv++;
		}
	}
	return (0);
}
