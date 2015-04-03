//打印所有的水仙花数
#include <stdio.h>

int main(void)
{
	int ge = 0;
	int shi = 0;
	int qian = 0;
	int i = 0;
	int sum = 0;

	printf("所有的水仙花数:\n");
	for(i = 100; i <= 999; i ++)
	{
		ge = i % 10;
		shi = (i / 10) % 10;
		qian = (i / 100) % 10;
		sum = ge * ge * ge + shi * shi * shi + qian * qian * qian;

		if(sum == i)
			printf("%4d",i);
	}
	printf("\n");

	return 0;
}
