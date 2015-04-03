#include <stdio.h>
//定义一个函数, 接收一个字符参数
//最后输出该字符
void myprint_char(char ch)
{
	printf("ch = %c\n", ch);
}

//		  形参==形式参数
void func(int v)
{
	printf("main函数传递过来的数据:%d\n", v);
}

int main(void)
{
	int var = 100111;
	//实参  实际参数
	func(var);
	printf("over func\n");

	myprint_char('a');

	return 0;
}

