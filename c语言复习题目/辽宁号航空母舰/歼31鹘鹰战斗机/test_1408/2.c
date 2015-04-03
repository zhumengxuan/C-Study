#include <stdio.h>

void delete(int *arr,int index,int len)
{
	int i = 0;
	for(i = index;i < len-1;i ++)
	{
		arr[i] = arr[i+1];
	}
	len--;
	
	printf("The new_array is:\n");
	for(i = 0;i < len;i ++)
		printf("%3d",arr[i]);
	printf("\n");
}

int main(void)
{
	int i = 0;
	int N;
	printf("pls input N(数组大小):\n");
	scanf("%d",&N);

	int num[N];
	char ch;
	int len1 = 0;
	int len = sizeof(num)/sizeof(num[0]);

	printf("pls input %d numbers:\n",len);
	for(i = 0;i < len;i ++)
	{
		scanf("%d",&num[i]);
		len1 ++;
		ch = getchar();
		if(ch == '\n')
			break;
	}

	int index = 0;
	printf("pls input index(要删除第几个元素):\n");
	scanf("%d",&index);
	
	printf("The old_array is:\n");
	for(i = 0;i < len1;i ++)
		printf("%3d",num[i]);
	printf("\n");

	delete(num,index,len1);

	return 0;
}

