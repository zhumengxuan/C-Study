#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	printf("pls input a & b:\n");
	scanf("%d%d",&a,&b);

	if((a%b) == 0)
		printf("%d 能够被%d整除！\n",a,b);

	return 0;
}

