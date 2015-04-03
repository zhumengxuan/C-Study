#include <stdio.h>

int main(void)
{
	int i;
	for (i = 1; i <= 7; ++i)
	{

		if (i == 3)
		{
			printf("不上课了,回家种田去！\n");
			//从break后的代码都不会执行
			//循环体的代码在break后不会被执行
			break; //退出循环
			printf("哥哥我回去种田去了！\n");
		}
		printf("天天上课！\n");
	}

	return 0;
}

