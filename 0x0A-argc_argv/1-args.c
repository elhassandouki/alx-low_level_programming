#include <stdio.h>
#include <unistd.h>

/**
 * main - The Function
 * @argc:  The variable
 * @argv: The Variable
 * Return: The Return value/void
 */

int main(int argc,char __attribute__((unused)) **argv ){
	printf("%d\n", argc-1);
	return(0);
}
