#include <stdio.h>
//自定义一个函数
//通过该函数输出10句hello world

//返回值类型 函数名(参数列表)
//{函数体}
void func(void)
{
	int i = 0;
	for (i = 0; i < 10; i ++)
	{
		printf("hello world\n");
	}
}

int main(void)
{
	//使用func函数
	//main函数为调用者
	//func函数为被调用者
	func();
	printf("over func\n");

	return 0;
}

