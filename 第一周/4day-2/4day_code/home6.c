#include <stdio.h>

int main(void)
{
	int num = 1;
	int max = 0;

	while(num != 0)
	{
		scanf("%d",&num);
		if(max < num)
		{
			max = num;
		}
	}
	printf("max = %d\n",max);

	return 0;
}

