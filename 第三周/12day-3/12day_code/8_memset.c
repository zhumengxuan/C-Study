#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//0000 0001

int main(void)
{
	char *p = (char *)malloc(10 * sizeof(char));
	//将前5个元素设置为'a'
	memset(p, 97, 5 * sizeof(char));
	//后5个元素设置为'c'
//	printf("*p1=%c\n",*p1);

	memset(p + 5, 'c', 5 * sizeof(char));
	//printf("*p2=%c\n",*p2);
	
	int i;
	for (i = 0; i < 10; ++i)
	{
		printf("%c", p[i]);
	}
	printf("\n");

	int *num = (int *)malloc(sizeof(int));
	memset(num, 0, sizeof(int));
	printf("num = %d\n", *num);

	return 0;
}

