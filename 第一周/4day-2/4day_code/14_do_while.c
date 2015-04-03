#include <stdio.h>

int main(void)
{
/*
	do{
	}while(循环退出条件);//必须添加分号
*/
	int i = 1;
	do{
		printf("%5d", i);
		++ i;	
	}while (i <= 20);
	printf("\n");

	return 0;
}

