#include <stdio.h>

int x = 10;//全局变量

void func2(void)
{
	printf("x(1) = %d\n", x);
	//声明一个和全局变量名字一样的变量
	//同样发生屏蔽现象
	int x = 20;//局部变量
	printf("x(2)= %d\n", x);
}

//参数屏蔽
void func(int x) //通过参数把x传进去
{
	//不可能输出全局变量x,输出的是副本
	printf("x(3) = %d\n", x);
}

int main(void)
{
	func2();
	func(x);
	printf("x(4) = %d\n", x);

	return 0;
}

