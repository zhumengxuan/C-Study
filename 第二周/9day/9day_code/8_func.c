#include <stdio.h>

void UIBottom( void (*action)(void) )
{
	action();
}

void printer( void (*print)(void) )
{
	print();
}

void func(void)
{
	printf("hello world\n");
}

void myaction(void)
{
	printf("hello uibottom\n");
}

int main(void)
{
	//以UIBottom的名义在执行,但是执行的是myaction函数
	UIBottom(myaction); 
	
	printer(func);

	return 0;
}

