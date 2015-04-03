#include <stdio.h>

int main(void)
{
	int x = 1;
	double y = 2.14159;
	//隐式转换
	double z = x + y; //类型是什么
	printf("z = %lf\n",z);

	return 0;
}

