#include <stdio.h>

int main(void)
{
	//输入字符串
	char str[100];
	//表示接收用户输入一个字符串
	//将输入的内容保存到指定的字符数组中
	
	//不带空格的字符串
	//scanf("%s", str);

	//带空格的输入
	//除回车以外的内容,全部接收
	printf("pls input a string:\n");
	scanf("%[^\n]", str);
//	scanf("%[^]", str);行不？

	printf("%s\n", str);

	return 0;
}

