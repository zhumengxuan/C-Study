#include <stdio.h>

int main(void)
{
	int a = 0;
	printf("pls input a num:\n");
	scanf("%d",&a);

	if(a>=80&&a<=90)
		printf("The %d is in 80~90!\n",a);
	else
		printf("The %d is not in 80~90!\n",a);

	return 0;
}

