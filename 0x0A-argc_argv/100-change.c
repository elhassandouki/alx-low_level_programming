#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


/* By EMOHAMEDD */

/**
 * max - The Function
 * @coins:  The variable
 * @final: The variable
 * Return: The Return value/void
 */


int max(int *coins, int final)
{
	int i = 0;
	int store = 0;

	while (i < 5)
	{
		if (coins[i] >= store && coins[i] <= final)
			store = coins[i];
		i++;
	}
	return (store);
}

/* By EMOHAMEDD */

/**
 * main - The Function
 * @argc:  The variable
 * @argv: The Variable
 * Return: The Return value/void
 */

int main(int argc, char **argv)
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents)
	{
		cents -= max(coins, cents);
		change++;
	}
	printf("%d\n", change);
	return (0);
}
