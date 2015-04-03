#include <stdio.h>

int main(void)
{
	int var;
	char ch = 'c';
	void *p = &var;
	p = &ch;
	printf("void=%ld\n",sizeof(void *));
	//确定void *真正的类型
	char *pc = (char *)p;

	//*p = 'a';
	printf("%c\n", *pc);
	printf("p = %p\n", p);
	printf("p + 1 = %p\n", p + 1);

	return 0;
}

