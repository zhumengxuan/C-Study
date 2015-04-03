#include <stdio.h>

int main(void)
{
	int i = 0;
	int ge = 0;
	int shi = 0;
	int bai = 0;
	int sum = 0;
	
	for(i = 100; i <= 999; i ++)
	{
		ge = i % 10;
		shi = (i/10) % 10;
		bai = (i / 100) % 10;

		sum = ge * ge*ge + shi*shi*shi + bai*bai*bai;
		if(sum == i)
		{
			printf("%4d",i);
		}
	
	} 
	printf("\n");

	return 0;
}
