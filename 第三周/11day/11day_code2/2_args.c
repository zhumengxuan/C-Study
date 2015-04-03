#include <stdio.h>
//带参数的宏 
//参数为a,最后会被实参替换
//宏的参数没有数据类型
#define PINT(a)	printf("a = %d\n", a)
//多个参数之间以逗号隔开
#define PFLOAT(a, b) printf("a = %f, b = %f\n", a, b)
//定义一个带三个参数的宏
//用来输出三个字符
#define PCHAR(a, b, c)	printf("a = %c, b = %c, c = %c\n", a, b, c)

int main(void)
{
	PINT(10);
	PFLOAT(1.2, 3.9);
	PCHAR('z', 'x', 'y');

	return 0;
}

