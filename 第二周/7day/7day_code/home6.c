#include <stdio.h>

int main(void)
{
	int num[10] = {0};
	int i = 0;
	float aver = 0.0;
	int sum = 0;

	printf("请输入10个数字:\n");
	for(i = 0;i < 10;i ++)
	{
		scanf("%d",&num[i]);
	}

	for(i = 0;i < 10;i ++)
	{
		sum += num[i];
	}
	aver = sum / 10.0;
	printf("aver = %f\n",aver);	

	for(i = 0;i < 10;i ++)
	{
		if(num[i] < aver)
		{
			printf("%3d",num[i]);
		}
	}
	printf("\n");

	return 0;
}

