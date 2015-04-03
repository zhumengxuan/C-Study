#include <stdio.h>

int main(void)
{
	//01 02 03 04
	//10 11 12 13
	//1 + 1
	int num = 10;
	float fvar = 3.14159;

	printf("%.3f\n", fvar); //四舍五入

	printf("%012d\n", num); //一共打印12位，如果不够，左侧补0

	printf("%12d\n", num); //默认左侧补空格

	return 0;
}

