#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	/*
	a ~  1 ---> 18
	b ~  1 ---> 18
	c ~  1 ---> 18
	*/
	int i, j, num = 0;
	int max = 0;
	for(i = 1; i <= 18; i ++)
	{
		for(j = 1; j <= 20 - 1 - i; j ++)
		{
			num = i * j * (20 - i - j);
			if(max < num)
			{
				max = num;
				a = i;
				b = j;
			}
		}
	}
	printf("max = %d, a = %d, b = %d, c = %d\n", max, a, b, 20-a-b);

	return 0;
}

