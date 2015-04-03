#include <stdio.h>

int main(void)
{
//	int var;
//	scanf("%d", &var);
	int age[10] = {0};	
	//接收用户的输入
	//并且保存到数组的其中一个元素中去
	//最后输出该元素的内容
	//将用户输入的内容保存到第一个元素中去
	scanf("%d", &age[0]);
	printf("%d\n", age[0]);

	return 0;
}

