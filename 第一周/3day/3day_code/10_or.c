#include <stdio.h>

int main(void)
{
	int money = 200;
	int result = 0;

	//money >= 100 && money != 0
	//|| money == 200

	result = money == 199 ||
			 money == 201 ||
			 money == 198 ||
			 money == 202;
	/*
			0		1	左边
		0	0		1
		1	1		1
		右
		边
	*/
	printf("result = %d\n", result);

	return 0;
}

