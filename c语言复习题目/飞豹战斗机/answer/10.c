#include <stdio.h>

void print_yanhui(int n)
{
	int i = 0;
	int j = 0;
	int arr[n][n];

	for(i = 0; i < n; i ++)
	{
		for(j = 0; j <= i; j ++)
		{
			if(i == j || j == 0)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}

	for(i = 0; i < n; i ++)
	{
		for(j = 0; j <=i; j ++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

}

int main(void)
{
	int n = 0;
	printf("请输入要打印的行数;\n");
	scanf("%d",&n);

	print_yanhui(n);

	return 0;
}
