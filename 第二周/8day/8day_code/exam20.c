#include <stdio.h>

void input(int *s,int len)
{
	int i = 0;
	printf("请输入数组各元素的值:\n");
	for(i = 0;i < len;i ++)
		scanf("%d",s + i);
}

int main(void)
{
	int i = 0;
	int len = 0;
	printf("请输入数组长度len:\n");
	scanf("%d",&len);

	int arr[len];

	input(arr,len); //手动输入函数

	for(i = 0;i < len;i ++)
	{
		printf("%5d",*(arr + i));
	}
	printf("\n");

	return 0;
}

