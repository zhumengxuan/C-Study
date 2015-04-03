#include <stdio.h>
#include <string.h>

int main(void)
{
	char p[] = "hello\0world";
	//1.计算整个数组的大小
	//2.包含\0
	int size = sizeof(p);
	printf("size = %d\n", size);

	//1.计算字符串的长度
	//2.不包含\0
	int len = strlen(p);
	printf("len = %d\n", len);

	return 0;
}

