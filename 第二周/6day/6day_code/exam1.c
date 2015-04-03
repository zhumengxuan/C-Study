#include <stdio.h>

int max(int a,int b,int c)
{
	if(a > b && a > c)
		return a;
	else if(b > a && b > c)
		return b;
	else if(c > a && c > b)
		return c;
	else
	{
		printf("Have no biggest number!\n");
		return 0;
	}
}

int main(void)
{
	int ret = 0;
	ret = max(100,50,10);
	printf("The max_number is:\n%d\n",ret);

	return 0;
}

