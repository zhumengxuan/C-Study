#include <stdio.h>

int main(void)
{
	int i,j;
	int temp;
	int num[10] = {9,4,6,8,0,1,3,5,7,2};
	int len = sizeof(num)/sizeof(num[0]);

	printf("The array is:\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");

	for(i=0;i<len-1;i++) //冒泡
	{
		for(j=0;j<len-1-i;j++)
		{
			if(num[j]<num[j+1])
			{
				temp = num[j];	
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}

	printf("The array is:\n");
	for(i=0;i<len;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");

	return 0;
}

