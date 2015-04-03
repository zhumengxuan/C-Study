#include <stdio.h>

int main(void)
{
	int i = 0;
	//循环开始: i = 0
	//循环结束: i < 10
	//循环增量: ++i
	//循环体:  输出每个元素的内容 age[i]
	int age[10] = {0};	
	int sum = 0;
	float avg = 0.0;

	for (i = 0; i < 10; ++i)
	{
		printf("pls input the %dth number:\n",i+1);
		scanf("%d", &age[i]);	
	}

	//计算平均值
	//sum = age[0] + age[1] + age[2] + age[3] + ..
	for (i = 0; i < 10; ++i)
	{
		sum += age[i];
	}
	avg = sum / 10.0;
	printf("avg:%f\n", avg);

	for (i = 0; i < 10; ++i)
	{
		printf("%d ", age[i]);
	}
	printf("\n");

	return 0;
}

