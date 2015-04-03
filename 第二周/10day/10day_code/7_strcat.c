#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[12] = "Hello"; //目标数组必须指定数组大小，而且必须足够大
	char src[] = "world!";

	printf("Now the dest is:\n");
	printf("%s\n",strcat(dest,src));
//	printf("%s\n",dest);

	return 0;
}

