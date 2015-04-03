#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *p1 = (char *)malloc(20*sizeof(char));
	if(p1 == NULL)
	{
		perror("malloc");
		exit(-1);
	}

	p1 = "helloworld!";
	char *p2 = (char *)malloc(20*sizeof(char));
	if(p2 == NULL)
	{
		perror("malloc");
		exit(-1);
	}

	memcpy(p2,p1,20);
	printf("p2=%s\n",p2);

	return 0;
}

