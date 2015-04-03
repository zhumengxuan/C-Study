#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;
	printf("pls input x:\n");
	scanf("%d", &x);

	if (x < 0)
	{
		y = 2 * x + 1;	
	}
	else if (x >= 0 && x < 20)
	{
		y = x*x+5;
	}
	else if (x >= 20 && x <= 30)
	{
		y = 50*x+10;
	}
	else
	{
		y = 100 * x;	
	}
	printf("y = %d\n", y);

	return 0;
}

