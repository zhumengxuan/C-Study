#include <stdio.h>

int main(void)
{
	int f1 = 1;
	int f2 = 1;
	int f3 = 0;

	int i = 0;
	int n = 0;
	printf("pls input n:\n");
	scanf("%d",&n);

	printf("%3d%3d",f1,f2);

	for(i = 2;i < n;i ++)
	{
		f3 = f1 + f2;
		printf("%3d",f3);
		f1 = f2;
		f2 = f3;
	}
	printf("\n");

	return 0;
}

