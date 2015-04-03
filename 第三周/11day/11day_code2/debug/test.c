#include <stdio.h>
#include "debug.h"

#define PRINT(fmt, var...)  \
			printf(fmt, var)

int main(void)
{
	int a = 10;
	int c = 20;
	PRINT("%d, %d, %d\n", 1, 2, 3);
	printf("a = %d, c = %d\n", a, c);
	//改变调试级别
	level = 2;
	INFO("a = %d, c = %d\n", a, c);	
	DBUG("a = %d, c = %d\n", a, c);
	
	return 0;
}

