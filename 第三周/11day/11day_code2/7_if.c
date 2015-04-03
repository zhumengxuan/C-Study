#include <stdio.h>

#define DEBUG 0
#define MDEBUG 1

int main(void)
{
//快速安全的注释代码
#if MDEBUG
	printf("aaaa\n");
	#if MYDEBUG
	printf("cccc\n");
	#endif
#endif

	return 0;
}

