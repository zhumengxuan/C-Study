#include <stdio.h>

union test
{
	int n;
	//数组在存储上占用连续的内存空间
	//并且有前后顺序
	char ch[4];
};

int main(void)
{
	//0x12345678
	//78 56 34 12
	union test t;
	t.n = 0x7a7b7c7d;
	printf("%x\n", t.ch[0]);
	printf("%x\n", t.ch[1]);
	printf("%x\n", t.ch[2]);
	printf("%x\n", t.ch[3]);

	return 0;
}

