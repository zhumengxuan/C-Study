#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i;
	char *p = (char *)malloc(10*sizeof(char));
	
	if(p == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	
	for(i = 0;i < 10;i ++)
		printf("%d",*(p + i));
	printf("\n");
	
	memset(p,1,10);
	//printf("%s\n",p); //这里是数字，不是字符串
	for(i = 0;i < 10;i ++)
		printf("%d",*(p + i));
	printf("\n");

	return 0;
}

