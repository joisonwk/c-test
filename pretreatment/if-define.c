#include <stdio.h>

int main()
{
	#if defined A || B
	printf("defined A or B\n");	
	#else
	printf("defined not thing\n");
	#endif 
	
	#if defined A && B
	printf("defined A and B\n");
	#endif
	return 0;
}
