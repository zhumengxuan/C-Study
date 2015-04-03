#include <stdio.h>

int main(void)
{
	int i = 0;
	int height[5] = {0};

	for(i = 0;i < 5;i ++)
	{
		printf("pls input the height of student%d:\n",i+1);
		scanf("%d",&height[i]);
	}

	printf("The message is:\n");
	for(i = 0;i < 5;i ++)
	{
		printf("student%d:%d\ncm",i+1,height[i]);
	}

	return 0;
}

