#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//不符合编码规范
	//int *p2 = malloc(sizeof(int));
	//将下面两行代码合并
	int *p = (int *)malloc(sizeof(int));
	//void *p = malloc(sizeof(int));
	//int *tmp = (int *)p;
	return 0;
}

