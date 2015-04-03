#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = (int *)malloc(10 * sizeof(int));
	printf("p = %p\n",p);

	int i;
	for (i = 0; i < 10;i ++)
	{
		p[i] = i;
	}
//	p = (int *)realloc(p, 100 * sizeof(int));
	int *tmp = (int *)realloc(p, 100 * sizeof(int));
	printf("tmp = %p\n",tmp);

	if (tmp == p)
	{
		printf("没有换内存碎片!\n");
	}
	else
	{
		//保存重新分配的内存地址
		p = tmp;
	}

	for(i = 0; i < 20;i ++)
	{
		printf("tmp[%d] = %d\n",i, tmp[i]);
	}

	return 0;
}

