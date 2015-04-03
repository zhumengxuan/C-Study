#include <stdio.h>

int main(void)
{
	int num = 0;
	int count = 0;
	int wan = 0;
	int qian = 0;
	int bai = 0;
	int shi = 0;
	int ge = 0;

	printf("回文数有:\n");
	for(num = 10000;num < 100000;num ++)
	{
		wan = (num / 10000) % 10;
		qian = (num / 1000) % 10;
		bai = (num / 100) % 10;
		shi = (num / 10) % 10;
		ge = num % 10;

		if(wan == ge && qian == shi)
		{
			printf("%8d",num);
			count ++;

			if(count % 8 == 0)
				printf("\n");
		}
	}

	if(count % 8 != 0)
		printf("\n");

	return 0;
}

