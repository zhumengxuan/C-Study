#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p = (int *)malloc(sizeof(int));
	printf("p = %p\n", p);
	//....
	free(p);
	//释放内存后应该将指针变量置空
	p = NULL; //看到这里你明白为什么不能重复释放了么？
	//在此之前p是有值的，但是可能内存已经重新被分配了，再次释放
	//可能会造成内存泄漏，很危险的。
	if (p != NULL)
	{
		*p = 10;
	}
	printf("free p = %p\n", p);

	return 0;
}

