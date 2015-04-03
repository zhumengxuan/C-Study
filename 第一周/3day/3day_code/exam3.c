#include <stdio.h>

int main(void)
{
	int length = 0;
	int width = 0;
	int area = 0;
	int len_add = 0;

	printf("pls input the value of length and width:\n");
	scanf("%d %d",&length,&width);

	area = length * width;
	len_add = 2 * length + 2 * width;

	printf("area = %d\n",area);
	printf("len_add = %d\n",len_add);

	return 0;
}

