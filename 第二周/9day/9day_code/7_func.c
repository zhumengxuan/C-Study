#include <stdio.h>

void printer(void (*p)(void))
{
	p();
}

void func(void)
{
	printf("hello world\n");
}

int main(void)
{
	func(); //函数调用
	printf("func = %p\n", func);	
	//函数声明
	//void (*p)(void);
	//指向返回值为void,参数列表为void的函数
	void (*p)(void) = func;
	//函数指针的解引用
	p();//函数指针直接调用函数
	
	//printer(p);//函数指针作为函数参数调用函数
	printer(func);//函数指针作为函数参数调用函数

	return 0;
}

