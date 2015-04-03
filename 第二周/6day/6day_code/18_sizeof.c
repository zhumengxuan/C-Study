#include <stdio.h>

int main(void)
{
	//数组大小一旦确定,不能再改变
	//大小必须在声明时候确定
	int age[10] = {0};
	//before
	//after
	int i = 0;

	//动态计算数组元素个数
	//得到数组所有元素的大小之和
	int total = sizeof(age);
	//得到数组中其中一个元素的大小
	int each  = sizeof(age[0]); 
	//得到数组的长度
	int len = total / each;
	//合并后的代码
	len = sizeof(age) / sizeof(age[0]);

	printf("total:%d\n", total);
	printf("each:%d\n", each);
	printf("len:%d\n", len);

	for (i = 0; i < len; ++i)
	{
		scanf("%d", &age[i]);	
	}

	for (i = 0; i < len; ++i)
	{
		printf("%d ", age[i]);
	}
	printf("\n");

	return 0;
}

