#include <stdio.h>
#include <stdlib.h> 
int main(int argc,char *argv[]){ 
	int sum =0; 
	char *i; 
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while(--argc){ 
		for(i[argc];*i;i++){ 
			if(*i < '0' || *i>  '9') 
				return(printf("Error\n",),1);
		       sum += atoi(argv[argc]);	
		}
	}
	printf("%d\n",sum);
       	return (0); 
}
