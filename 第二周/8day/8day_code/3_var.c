#include <stdio.h>
//pointer
int main(void)
{
	int var = 10;
	//p变量指向一个int类型的变量地址
	int *p = &var;
	printf("p = %p\n", p);
	printf("&var = %p\n", &var);
	printf("var = %d\n", var);
	//解引用
	//*p == var; 相同的变量
	var = 100;
	*p = 99;
	printf("p = %d\n", *p);
	printf("var = %d\n", var);

	return 0;
}

