#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	while(num)
	{
		printf("%d",num % 2);
		num /= 2;
	}
	printf("\n");

	return 0;
}

