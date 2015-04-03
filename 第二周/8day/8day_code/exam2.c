#include <stdio.h>

int main(void)
{
	int m = 0;
	int n = 0;

	printf("请输入m:\n");
	scanf("%d",&m);

	printf("请输入n:\n");
	scanf("%d",&n);

	int *pm = &m;
	int *pn = &n;

	if (*pm > *pn)
	{
		printf("*pm = %d比较大\n", *pm);
	}
	else
	{
		printf("*pn = %d比较大\n", *pn);
	}

	return 0;
}

