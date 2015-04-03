#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	int qian = 0;
	int bai = 0;
	int shi = 0;
	int ge = 0;

	qian = (num / 1000) % 10;
	bai = (num / 100) % 10;
	shi = (num / 10) % 10;
	ge = num % 10;

	printf("qian = %d\n",qian);
	printf("bai = %d\n",bai);
	printf("shi = %d\n",shi);
	printf("ge = %d\n",ge);

	return 0;
}

