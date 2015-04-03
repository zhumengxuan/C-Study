#include <stdio.h>

int main(void)
{
	int m = 0;
	printf("pls input a num:\n");
	scanf("%d", &m);

	if (m % 5 == 0 && m % 7 == 0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

	return 0;
}

