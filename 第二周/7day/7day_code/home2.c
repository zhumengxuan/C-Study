#include <stdio.h>

int main(void)
{
	int i = 0;
	int N = 0;
	printf("请输入数组长度N:\n");
	scanf("%d",&N);
	int num[N];

	for(i = 0;i < N;i ++)
	{
		num[i] = i+1;
	}

	for(i = 0;i < N;i ++)
	{
		printf("num[%d] = %d\n",i,i);
	}

	return 0;
}

