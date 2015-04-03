#include <stdio.h>
//必须先定义,才能使用
//预处理指令不能嵌套使用
//#if #defin N 100 
//#define MAX	#define N 9
#define ADD(a, b)  ((a) + (b))   //千万别吝啬括号
#define MUL(a, b)  ((a) * (b))
#define RATE(r)	   MUL(r, r) * PI
/* \必须是最后一个字符  */
#define SUM(a, b, c, d)  ADD(MUL(a, b),\
							 MUL(c, d)) 
//宏不能嵌套调用自己
//#define AD(a, b)	AD(a,b)
//1+2*3+4
int main(void)
{
	int ret = ADD(1, 2) * ADD(1, 2);
	printf("ret = %d\n", ret);
			 //1 + 2 * 3
	ret = MUL(1 + 2, 3);
	//1 * 2 + 3 * 4
	ret = SUM(1, 2, 3, 4);
	printf("ret = %d\n", ret);
//	AD(1, 2);

	return 0;
}

