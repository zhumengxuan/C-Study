#include <stdio.h>

int main(void)
{
	int len = 0; //数组长度；
	int i = 0; 
	int j = 0;
	int num = 0; //待删数字
	int index = 0; //位置记录
	int age[] = {11,22,33,44,55,66,77};
	len = sizeof(age)/sizeof(age[0]);
	
	for(i = 0;i < len;i ++)
	{
		printf("%d ",age[i]);
	}
	printf("\n");

	printf("请输入你想删除的数字:\n");
	scanf("%d",&num);

	for(i = 0;i < len;i ++)
	{
		if(age[i] == num)
		{
			printf("age[%d]=%d has found!\n",i,num);
			index = i; //位置标记
			break;
		}
	}

	for(i = index;i < len - 1;i ++)
	{
		age[i] = age[i + 1];
		//age[i + 1] = 0;
	}

	len --; //数组长度减小1

	printf("删除一个数字后的数组:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",age[i]);
	}
	printf("\n");

	return 0;
}

