#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//申请4个字节的内存空间
	//如果分配成功,返回该空间首地址
	//失败返回NULL
	void *p = malloc(1 * sizeof(int));
	if (p != NULL)
	{
		//转换为对应的指针类型
		//才可以将数据保存下去
		int *tmp = (int *)p;
		*tmp = 10;
		printf("分配成功\n");
	}

	return 0;
}

