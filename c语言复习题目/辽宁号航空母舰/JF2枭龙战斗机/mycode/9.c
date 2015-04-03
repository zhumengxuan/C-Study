#include <stdio.h>

int main(void)
{
	int count = 0;
	int i = 0;
	int arr[5] = {};
	int num = 0;
	printf("请输入一个数:\n");
	scanf("%d",&num);

	while(num)
	{
		arr[i] = num % 10;
		count ++;
		num /= 10;
		i ++;
	}

	printf("他是%d位数.\n",count);
	for(i = 0; i < count; i ++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");

	return 0;
}
