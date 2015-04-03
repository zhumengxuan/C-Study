#include <stdio.h>
//求两数的最大值

//其实严格地讲第5行这种写法是错的
//#define MAX(a, b)  a > b ? a : b	
#define MAX(a, b)  (a) > (b) ? (a) : (b)	
//1+2     2*8       (1+2)>(2*8)?(1+2):(2*8)
//1,2     2*8        1,2>2*8?1,2:2*8
int main(void)
{
	// ? : 三目运算符
	int a = 10;
	int b = 20;
	int ret = 0;
	//冒号左边为条件成立时候执行的内容
	//右边为条件不成立时候执行的内容
	a > b ? printf("a is max\n") : 
		    printf("b is max\n");

	//ret = a > b ? a : b;
	ret = MAX(a, b);
	printf("max is %d\n",ret);
	//同上
	//a > b ? (ret = a) : (ret = b);

	/*
	if (a > b)
	{
		ret = a;	
	}
	else
	{
		ret = b;
	}
	*/

	return 0;
}

