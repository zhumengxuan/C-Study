#include <stdio.h>

void sortarr(int *arr,int len)
{
	int i = 0;
	int j = 0;	
	int min = 0;
	int temp = 0;

	for(i = 0;i < len-1;i ++)
	{
		min = i;
		for(j = i + 1;j< len;j ++)
		{
			if(arr[min] > arr[j])
				min = j;
		}

		if(min != i)
		{
			temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

int main(void)
{
	int N;
	char ch;
	int len1 = 0;
	int i = 0;

	printf("pls input N(数组个数):\n");
	scanf("%d",&N);

	int num[N];
	int len = sizeof(num)/sizeof(num[0]);

	printf("pls input %d numbes:\n",len);
	for(i = 0;i < len; i++)
	{
		scanf("%d",&num[i]);
		len1 ++;
		ch = getchar();
		if(ch == '\n')
			break;
	}

	printf("The old_sort is:\n");
	for(i = 0;i < len1;i ++)
	{
		printf("%3d",num[i]);
	}
	printf("\n");

	sortarr(num,len1);

	printf("The new_sort is:\n");
	for(i = 0;i < len1;i ++)
	{
		printf("%3d",num[i]);
	}
	printf("\n");
	
	return 0;
}

