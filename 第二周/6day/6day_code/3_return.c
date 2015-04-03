#include <stdio.h>
//如果函数没有返回值
//return 可以不返回任何结果
//如果函数有返回值
//return 必须要返回一个明确的结果
int div(int x, int y)
{
	if (y == 0)
	{
		return 0;
	}
	int sum = x / y;
	return sum;
}

void func(void)
{
	printf("hello world\n");
	//break;
	//从这里结束函数,返回函数调用者处
	return ;  //函数提前结束
	printf("滚!\n"); //不会执行
}

int main(void)
{
	int ret = div(1, 0);
	printf("ret = %d\n", ret);
	//func();
	//不能将void类型数据赋值给变量
	//int ret = func();
	func();
	//shell  贝壳
	return 0;
}

