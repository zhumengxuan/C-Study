#include <stdio.h>

int main(void)
{
	int year = 0;

	printf("请输入一个年份:");
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 ||
		   	year % 400 == 0)
	{
		printf("%d 是闰年\n", year);
	}

	return 0;
}

