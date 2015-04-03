#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("pls input a & b:\n");
	scanf("%d%d",&a,&b);

	a>b ? printf("max=a=%d\n",a):printf("max=b=%d\n",b);

	return 0;
}

