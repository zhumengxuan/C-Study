#include <stdio.h>

int main(void)
{
	int i = 0;
	int sum = 0;
	int arr[10] = {0};
	int *p = arr;
	int len = sizeof(arr)/sizeof(arr[0]);

	printf("请输入%d个数字:\n",len);
	for (i = 0; i < len; i ++)
	{
		scanf("%d", &p[i]); //下标形式
					 //(p + i)//指针形式
	}
	printf("\n");

	printf("得到的数组为:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d",p[i]);
	}
	printf("\n");

	printf("数组所有元素的和为:\n");
	for(i = 0;i < len;i ++)
	{
		sum += p[i];
	}
	printf("sum = %d\n",sum);

	return 0;
}

