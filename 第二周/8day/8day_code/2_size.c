#include <stdio.h>

int main(void)
{
	int var;
	int size1 = sizeof(var); 
	int size2 = sizeof(&var);

	printf("size1 = %d\n", size1); 
	//抽屉里面的苹果是4个字节大小一个的
	
	printf("size2 = %d\n", size2); 
	//抽屉本身是8个字节大小一个的

	return 0;
}

