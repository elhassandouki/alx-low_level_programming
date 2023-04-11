#include <stdio.h>
#include <unistd.h>

/**
 * main - The Function
 * @argc:  The variable
 * @argv: The Variable
 * Return: The Return value/void
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
