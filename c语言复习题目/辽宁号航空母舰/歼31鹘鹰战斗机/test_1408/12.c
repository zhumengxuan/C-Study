#include <stdio.h>

void up_and_down(int *num,int len)
{
	int i = 0;
	printf("递增和递减子序列分别为:\n");
	printf("%d  %d",num[0],num[1]);	

	for(i = 2;i < len;i ++)
	{
		if(num[i-2] < num[i-1]&&num[i-1] < num[i])
			printf("  %d",num[i]);
		else if(num[i-2] > num[i-1]&&num[i-1] > num[i])
			printf("  %d",num[i]);
		else
			printf("\n%d  %d",num[i-1],num[i]);
	}
	printf("\n");
}

int main(void)
{
	int N;
	printf("请确定数组的元素个数:\n");
	scanf("%d",&N);
	int num[N];

	int i = 0;
	int len = 0;
	char ch;

	printf("请输入数组的各个元素:\n");
	for(i = 0;i < N;i ++)
	{
		scanf("%d",&num[i]);
		len ++;
		ch = getchar();
		if(ch == '\n')
			break;
	}

	up_and_down(num,len);

	return 0;
}

