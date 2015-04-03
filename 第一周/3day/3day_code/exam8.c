#include <stdio.h>

int main(void)
{
	int num = 0;
	printf("pls input num:\n");
	scanf("%d",&num);

	if(num >= 12 && num <= 30)
		printf("yes!\n");

	return 0;
}
