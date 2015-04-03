#include <stdio.h>

int main(void)
{
	int m = 10;
	//将指针初始化为NULL
	int *p = &m; //如果去掉本行，下面的p1将不被优化成NULL
	int *p1;//怎么解释？不同的版本的编译器在细节方面存在差异

	printf("p1 = %p\n", p1);
	printf("p1 == NULL %d\n", 
				p1 == NULL);
	printf("NULL = %p\n", NULL);

	if (p1 == NULL)
	{
		p1 = &m;
		printf("p1 is init\n");
	}

	return 0;
}

