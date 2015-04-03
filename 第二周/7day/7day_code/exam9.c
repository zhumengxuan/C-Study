#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	int j = 0;
	char arr[] = "helloworld!";
	int len = strlen(arr);
	char temp = '\0';

	printf("排序前:\n");
	printf("%s\n",arr);

	for(i = 0;i < len - 1;i ++)
	{
		for(j = 0;j < len - 1 - i;j ++)
		{
			if(arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("排序后:\n");
	printf("%s\n",arr);

	return 0;
}

