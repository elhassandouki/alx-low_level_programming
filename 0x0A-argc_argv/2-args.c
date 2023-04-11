#include <stdio>
#include <unistd.h>

int main(int argc,char const *argv[]){
	int i=0;
	while(argc--){
	printf("%d\n",argv[i]);
	i++;
	}
	return (0);
}
