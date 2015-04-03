#include <stdio.h>

int fac(int i)
{
	if(i == 0 || i == 1)
		return 1;
	else
		return fac(i - 1) * i;
}

int main(void)
{
	int result = 0;
	int i = 0;
	printf("pls input the value of i:\n");
	scanf("%d",&i);

	result = fac(i);
	printf("result=%d\n",result);

	return 0;
}

