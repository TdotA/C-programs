#include <stdio.h>

int main(int argc, char *argv[]){
	printf("Following arguments are passed into the main():\n");
	printf("argnum \t value \n");
	for (int i=0; i<argc; i++)
		printf("%d \t %s \n", i , argv[i]);
	printf("\n");

	return 0;
}
