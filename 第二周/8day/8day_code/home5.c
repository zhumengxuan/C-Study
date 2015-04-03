#include <stdio.h>

int avg(int *a,int n)
{
	int i = 0;
	int sum = 0;
	int aver = 0;

	for(i = 0;i < n;i ++)
	{
		sum += a[i];
	}
	aver = sum / n;
	return aver;
}

int main(void)
{
	int len = 0;
	printf("请输入一个数组长度:\n");
	scanf("%d",&len);

	int num[len];
	int i = 0;
	int count = 0;
	int aver = 0; //用于记录平均数的值
	char ch = '\0';

	printf("请输入数组的各元素的值:\n");
	for(i = 0;i < len;i ++)
	{
		scanf("%d",&num[i]);
		count ++; //count是实际输入的元素的个数

		ch = getchar();
		if(ch == '\n')
			break;
	}

	aver = avg(num,count); //求任意长数组平均数函数
	printf("数组的平均数为:%d\n",aver);

	return 0;
}

