#include <stdio.h>

int main(void)
{
	int i = 0;
	int a = 0;
	int b = 0;

	printf("pls input a:\n");
	scanf("%d",&a);

	printf("pls input b:\n");
	scanf("%d",&b);

	int min = 0;
	if(a > b)
		min = b;
	else if(a < b)
		min = a;

	while(min)
	{
		if(a % min == 0 && b % min == 0)	
		{
			printf("最大公约数为:%d\n",min);
			break;
		}
		min --;
	}

	return 0;
}

