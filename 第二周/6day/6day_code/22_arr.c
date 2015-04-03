#include <stdio.h>

int main(void)
{
	//初始化数组
	//	int m[1000];
	//一一对应,不能跨元素初始化
	//int age[10] = {1,2,3,4,5,6,7,8,9,10};
	//如果只初始化前n个元素,剩余的元素自动为0
	//int age[10] = {0,0,0,0,1,2,3};
	//初始化的时候清空数组
	int a[6] = {1,2,3,4,5};
	int b[5] = {0};
	int i = 0;
	int len = sizeof(a) / sizeof(a[0]);

	for (i = 0; i < len; ++i)
	{
		b[i] = a[i];
		printf("%d ", b[i]);
	}
	printf("\n");

	return 0;
}

