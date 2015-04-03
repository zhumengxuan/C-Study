#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;

	printf("pls input a & b:\n");
	scanf("%d %d",&a,&b);

	if(a>b)
		printf("a大!\n");
	if(a<b)
		printf("b大!\n");

	return 0;
}

