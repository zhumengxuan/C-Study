#include <stdio.h>

int main(void)
{
	int i;
	for (i = 1; i <= 7; ++i)
	{
		if (i == 3)
		{
			printf("星期3 请假一天\n");	
			continue;
		}
		printf("星期%d 上课！\n",i);
	}

	return 0;
}

