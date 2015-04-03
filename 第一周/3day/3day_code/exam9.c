#include <stdio.h>

int main(void)
{
	int price = 0;
	printf("pls input a price:\n");
	scanf("%d",&price);

	if(price >= 250 && price <= 300)
		printf("可以接受!\n");

	if(price < 250)
		printf("质量不好!\n");

	if(price > 300)
		printf("买不起!\n");

	return 0;
}

