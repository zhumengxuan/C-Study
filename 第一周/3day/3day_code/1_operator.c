#include <stdio.h>

int main(void)
{
	int var;
	//在声明变量的时候同时进行赋值操作
	//变量初始化
	int var = 10;
	var = 10;
	//当变量作为左值时候
	//相当于赋值操作
	//编译错误,不能对常量赋值
	//lvalue required as left operand of 	   assignment
	10 = var;
	//当变量作为右值时候
	//相当读取变量的值
	return 0;
}

