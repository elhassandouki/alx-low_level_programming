#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - The Function
 * @argc:  The variable
 * @argv: THe variable
 * Return: The Return value/void
 */

int main(int argc ,char  **argv){
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
