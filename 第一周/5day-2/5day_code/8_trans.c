#include <stdio.h>
// 256 128 64 32 16 8 4 2 1
int main(void)
{
	int m = 0;
	m = 257;
	//将指定内容强制转换
	char ch = '\0';
	ch = (char)m; //这是为什么呢？
	printf("ch = %d\n", ch);

	return 0;
}

