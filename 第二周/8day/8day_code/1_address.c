#include <stdio.h>
//pointer
int main(void)
{
	//系统按照变量的大小和起始地址
	//将完整的数据读出
	int var0;
	int var1;

	printf("%p\n", &var0);
	printf("%p\n", &var1);

	return 0;
}

