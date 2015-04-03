#include <stdio.h>

int main(void)
{
	int arr[5] = {1,2,3,5,6};//注音：排好序的数组插入一个必然覆盖一个
	int i = 0;
	int index = 0;
	int num = 0;

	printf("pls input a num:\n");	
	scanf("%d", &num);
	//找到应该插入的位置
	for(i = 0; i < 5; i ++)
	{
		if(num < arr[i])
		{
			index = i;
			break;
		}
	}
	//如果num应该插入下标为0~4的位置，则进行插入
	//否则不插入
	if(i != 5)
	{
		for(i = 4; i > index; i --)
		{
			arr[i] = arr[i - 1]; //注意：这样会覆盖掉最后一个元素
		}
		arr[index] = num;
	}

	for(i = 0; i < 5; i ++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

