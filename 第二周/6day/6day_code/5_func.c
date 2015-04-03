#include <stdio.h>
//将昨天的四则运算函数
//修改为函数声明+实现的方式
//函数声明
void func(void);

int main(void)
{
	//不能检查出函数使用是否正确
	func();

	return 0;
}

//函数定义,函数实现
void func(void)
{
	printf("hello world\n");
}

