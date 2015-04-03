#include <stdio.h>

int main(void)
{
	int var = 0;
	char ch = '\0';

	int res = sizeof(char);
	printf("res1 = %d\n", res);

	res = sizeof(int);
	printf("res2 = %d\n", res);

	return 0;
}

