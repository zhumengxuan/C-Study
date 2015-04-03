#include <stdio.h>

int main(void)
{
	int n = 0;
	printf("pls input n:\n");
	scanf("%d",&n);

	int m = 0;
	printf("请输入填充数字m:\n");
	scanf("%d",&m);

	int i = 0;
	int j = 0;
	for(i = 0;i < n;i ++)
	{
		for(j = 0;j <= i;j ++)
		{
			printf("%d",m);
		}
		printf("\n");
	}

	return 0;
}

