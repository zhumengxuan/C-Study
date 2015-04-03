#include <stdio.h>
#include <string.h>

int main(void)
{
	//比较结果
	//如果s1和s2相同,返回0
	//如果s1和s2不同
	//	1.s1 比 s2 大 返回正数
	//  2.s1 比 s2 小 返回负数
	char s1[100] = "hello world";
	char s2[100] = "hello world";
	
	int ret = strcmp(s1, s2);
	printf("ret = %d\n", ret);

	return 0;
}

