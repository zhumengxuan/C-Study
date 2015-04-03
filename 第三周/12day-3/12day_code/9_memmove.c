#include <stdio.h>
#include <string.h>

int main(void)
{
	int src[10] = {1,2,3,4,5,6,7,8,9,0};
	int dst[10] = {0};
	//内存拷贝
	memmove(dst, src, sizeof(src));
	//memmove(dst, src, 32);

	int i = 0;
	for (i = 0; i < 10; ++i)
	{
		printf("%d ", dst[i]);
	}
	printf("\n");

	return 0;
}

