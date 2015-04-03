#include <stdio.h>

int main(void)
{
	//数组中的所有元素为后面字符串中的内容
	char str[100] = "hello world";
	//指针变量所指向的内容为一个字符串常量
	char *p = "hello world";

	str[0] = 'a';
	printf("%s\n", str);

//	p[0] = 'a';
	*(p+4) = 'a'; //只有数组形式存储时才有*(p＋i)这种写法。
	printf("%s\n",p);

	return 0;
}

