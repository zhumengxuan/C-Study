#include <stdio.h>

int *func(int *p,int len,int num)
{
	int i = 0;
	int *pnum = NULL;

	for(i = 0;i < len;i ++)	
	{
		if(p[i] == num)
			pnum = &p[i];
	}

	return pnum; //返回找到的数字的地址
}

int main(void)
{
	int i = 0;
	int search = 0;
	int *p = NULL;//用于接收函数返回值的指针
	int arr[] = {1,2,3,56,78};
	int len = sizeof(arr)/sizeof(arr[0]);

	printf("已预设的数组为:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%3d的地址为:%p\n",arr[i],&arr[i]);
	}
	printf("\n");

	printf("请输入你想查找的数字:\n");
	scanf("%d",&search);

	p = func(arr,len,search);
	printf("查找到的数字的地址为:%p\n",p);

	return 0;
}

