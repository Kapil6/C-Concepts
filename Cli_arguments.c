#include<stdio.h>

int main(int argc, char* argv[])
{
	int i, num;
	printf("Argument count: %d\n", argc);
	for (i = 0; i < argc; i++)	
		printf("Arg value[%d]: %s\n", i, argv[i]);
	
	num = atoi(argv[1]);
	printf("num : %d\n", num);
	return 0;
}
