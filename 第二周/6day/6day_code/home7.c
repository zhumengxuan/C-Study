#include <stdio.h>

void space(int n)
{
	if(n > 0)	
	{
		space(n-1);
		printf(" ");
	}
}

void tran(int n)
{
	if(n > 0)
	{
		tran(n-1);
		printf("*");
	}
}

int main(void)
{
	int i = 0;
	int k = 0;
	int n = 0;

	printf("pls input n:\n");
	scanf("%d",&n);

	for(i = n;i > 0;i -= 2,k ++)
	{
		space(k);
		tran(i);
		printf("\n");
	}

	return 0;
}

