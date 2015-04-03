#include <stdio.h>

int main(void)
{
	int i = 0;
	int index = 0;
	int num[10] = {0};
	int len = sizeof(num)/sizeof(num[0]);

	for(i = 0;i < len;i ++)
	{
		scanf("%d",&num[i]);
	}

	printf("输入的数组为:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d",num[i]);
	}
	printf("\n");

	for(i = 0;i < len;i ++)
	{
		if(3 == num[i])	
		{
			index = i;
			printf("index = %d\n",index);
		}
	}

	return 0;
}

