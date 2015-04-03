#include <stdio.h>
#include "func.h"

int main(void)
{
	int ret = add(1, 1);
	printf("ret = %d\n", ret);

	ret = sub(2, 1);
	printf("ret = %d\n", ret);

	return 0;
}

