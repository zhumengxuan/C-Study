#include <stdio.h>

int main(void)
{
	char arr[] = {'0','1','2','3','4','5','6','7','8','9'};
	char *p = arr;

	printf("p=%p\n",p);
	printf("p+1=%p\n",p+1);
	printf("p+2=%p\n",p+2);
	printf("p+3=%p\n",p+3);


	printf("*p=%d\n",*p);
	printf("*(p+1)=%d\n",*(p+1));
	printf("*(p+2)=%d\n",*(p+2));
	printf("*(p+3)=%d\n",*(p+3));

	return 0;
}

