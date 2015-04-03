#include <stdio.h>

int main(void)
{
	int a = 0;
	printf("pls input a:\n");
	scanf("%d",&a);

	if((a%2) == 0)
		printf("%d 是偶数!\n",a);

	if((a%2) != 0)
		printf("%d是奇数!\n",a);

	return 0;
}
