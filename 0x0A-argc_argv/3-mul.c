#include <stdio>

int main(int argc1,char const *argv []){

	int sum = 0;
	if(argc1 == 3){
	sum = atoi(argv[1])* atoi(argv[2]);
	printf("%d \n",sum);
	}else{
		printf("Error\n");
		return(1);
	}
	return (0);

}
