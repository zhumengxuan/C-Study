#include <stdio.h>

#define LOOP for(i = 0;i < 10;i ++)

int main(void)
{
	int i = 0;
	LOOP
		printf("哈哈!\n");

#undef

	return 0;
}

