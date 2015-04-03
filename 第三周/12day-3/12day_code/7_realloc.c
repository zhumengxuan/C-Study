#include <stdio.h>
#include <stdlib.h>
//重新申请一块足够大的内存
//将原来内存上的数据拷贝到新的内存空间
//释放原来的内存空间
int main(void)
{
	int n = 10;
	int *p = (int *)malloc(n * sizeof(int));
	//在原来内存大小的基础上,
	//直接裁剪掉一部分内存或不变，返回的地址仍然是原来malloc的地址
	//int *tmp = (int *)realloc(p,n * sizeof(int));
	int *tmp = (int *)realloc(p,sizeof(int));
	if (p == tmp)
	{
		printf("缩减内存!\n");
	}
	
	return 0;
}

