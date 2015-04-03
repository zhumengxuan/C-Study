#include <stdio.h>

int main(void)
{
	int num;
	int sumeven = 0,even  = 0;
	int sumodd = 0,odd = 0;
	
	while(1)
	{
		printf("pls input a number:\n");
		scanf("%d", &num);
		if(num == 0)
			break;

		switch(num % 2)
		{
			case 0:
				even ++;//偶数
				sumeven += num;
				break;

			case 1:
				odd ++;//奇数
				sumodd += num;
				break;
		}
	}

printf("偶数的个数为：%d, 平均值为：%.2f\n", even, sumeven / (float)even);
printf("奇数的个数为：%d, 平均值为：%.2f\n", odd, sumodd / (float)odd);

	return 0;
}

