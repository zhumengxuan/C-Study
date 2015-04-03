#include <stdio.h>
#include <stdlib.h>
//重新申请一块足够大的内存
//将原来内存上的数据拷贝到新的内存空间
//释放原来的内存空间
int main(void)
{
	int n = 10;
	//申请10个int的内存空间
	void *p = malloc(n * sizeof(int));
	if (p != NULL)
	{
		int *tmp = (int *)p;	
		int i;
		for (i = 0; i < n; ++i)
		{
			tmp[i] = i;
			printf("p[%d] = %d\n", i, tmp[i]);
		}
	}

	return 0;
}

