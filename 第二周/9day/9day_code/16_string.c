#include <stdio.h>

int main(void)
{
	int ret = sizeof("A");
	printf("ret = %d\n", ret);

	ret = 0;
	ret = sizeof('A');
	printf("ret = %d\n", ret);
	
	return 0;
}

