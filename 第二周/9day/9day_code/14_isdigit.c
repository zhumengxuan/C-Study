#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = 'a';
	int s = isalpha(ch);
	printf("s = %d\n", s);
	//判断是否为数字, 
	//如果是数字字符,返回1
	//不是返回0
	int num = isdigit(ch);
	printf("num = %d\n", num);

	return 0;
}

