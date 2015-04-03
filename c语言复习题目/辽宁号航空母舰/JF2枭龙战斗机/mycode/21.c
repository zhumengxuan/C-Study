#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

	for(i = 0; i < 4; i ++)
	{
		for(j = 0; j < 4; j ++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 4; i ++)
	{
		for(j = i + 1; j < 4; j ++)
		{
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}

	for(i = 0; i < 4; i ++)
	{
		for(j = 0; j < 4; j ++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
