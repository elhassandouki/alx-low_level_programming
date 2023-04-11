#include <stdio>
#include <unistd.h>

/**
 * main - The Function
 * @argc:  The variable
 * @argv: THe variable
 * Return: The Return value/void
 */

int main(int argc,char const *argv[]){
	int i=0;
	while(argc--){
	printf("%d\n",argv[i]);
	i++;
	}
	return (0);
}
