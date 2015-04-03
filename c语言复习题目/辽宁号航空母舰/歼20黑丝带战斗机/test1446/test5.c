#include <stdio.h>

int is_avg_integer(int *a,int n)
{
	int i = 0;
	int sum = 0;
	
	for(i = 0;i < n;i ++)
	{
		sum += a[i];
	}

	if(sum % n == 0)
		return 1;
	else
		return 0;
}
/*
int is_avg_integer(int *a,int n)
{
	int i = 0;
	float sum = 0.0;
	float aver = 0.0;

	for(i = 0;i < n;i ++)
	{
		sum += a[i];
	}
	aver = sum / n;

	int integer_aver = (int)aver;

	if((integer_aver - aver) == 0)
		return 1;
	else
		return 0;
}
*/

int main(void)
{
	int i = 0;
	int n = 0;
	printf("你想输入的数字个数n:\n");
	scanf("%d",&n);
	int num[n];

	printf("请输入%d个整数:\n",n);
	for(i = 0;i < n;i ++)
	{
		scanf("%d",&num[i]);
	}

	int ret = is_avg_integer(num,n);
	
	if(ret == 1)
		printf("平均数是整数!\n");
	else if(ret == 0)
		printf("平均数不是整数!\n");

	return 0;
}

