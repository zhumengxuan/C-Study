#include <stdio.h>

int main(void)
{
	int num = 0;
	int counter = 0;

	scanf("%d", &num);
	if(num == 0)
		printf("%d是1位数！\n", num);
	else
	{
		while(num)//1234
		{
			printf("%d ", num % 10);
			num /= 10;
			counter ++;
		}
		printf("\n%d位数\n", counter);
	}

	return 0;
}

