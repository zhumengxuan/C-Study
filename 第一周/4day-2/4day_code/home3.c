#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("pls input a:\n");
	scanf("%d",&a);
	printf("pls input b:\n");
	scanf("%d",&b);

	int max = 0;
	if(a > b)
		max = a;
	else if(a < b)
		max = b;

	while(1)
	{
		if(max % a == 0 && max % b == 0)
		{
			printf("最小公倍数为:%d\n",max);
			break;
		}
		max ++;
	}

	return 0;
}

