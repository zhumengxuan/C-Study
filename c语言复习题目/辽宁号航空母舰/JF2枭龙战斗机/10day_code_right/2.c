#include <stdio.h>

int main(void)
{
	int num = 0;
	int i = 0;
	int j = 0;

	scanf("%d", &num);
	printf("%d = ", num);

	for(i = 2; i < num; i ++)
	{
		if(num % i == 0)
		{
			printf("%d*", i);
			num /= i;
			i = 1;
		}
	}
	printf("%d\n", num);

	return 0;
}

