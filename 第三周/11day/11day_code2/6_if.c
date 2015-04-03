#include <stdio.h>
#define MONEY  
#define PI 3.14159 

int main(void)
{
	#ifdef MONEY
		printf("该货物已经购买...\n");
	#else
		printf("请转账付费...\n");
	#endif

		int r = 3;
	#ifdef PI
		double res = r * r * PI;
		printf("res=%f\n",res);
	#endif

	#if 0
		printf("hello world!\n");
	#endif

	return 0;
}

