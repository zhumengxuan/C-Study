#include <stdio.h>

int main(void)
{
	int ret = sizeof(char);
	printf("sizeof(char) = %d\n", ret);

	ret = sizeof(97);
	//ret = sizeof('a');
	printf("sizeof('a') = %d\n", ret);

	char c = 0;
	ret = sizeof(c);
	printf("sizeof(c) = %d\n",ret);

	return 0;
}

