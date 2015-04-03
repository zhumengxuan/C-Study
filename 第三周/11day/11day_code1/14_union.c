#include <stdio.h>

union big
{
	short n;
	char c;
};

union stu
{
	char ch1;
	char ch2;
	char ch3;
	char ch4;
	int y;
};

int main(void)
{
	union stu s;	
	s.y = 383;
	printf("s.y = %d = 0x%08x\n", s.y,s.y);

	printf("s.ch1 = %d = 0x%x\n", s.ch1,s.ch1);
	printf("s.ch2 = %d = 0x%x\n", s.ch2,s.ch2);
	printf("s.ch3 = %d = 0x%x\n", s.ch3,s.ch3);
	printf("s.ch4 = %d = 0x%x\n", s.ch4,s.ch4);
	printf("sizeof(stu) = %ld\n", sizeof(union stu));
	
	union big bi;
	bi.n = 10;
	bi.n = bi.n & 0x00ff;
	printf("bi.n = %d = 0x%08x\n", bi.n, bi.n);
	printf("bi.c1 = %d = 0x%x\n", bi.c, bi.c);
	
	bi.n = 10;
	bi.n = bi.n & 0xff00;
	printf("bi.n = %d = 0x%08x\n", bi.n, bi.n);
	printf("bi.c2 = %d\n", bi.c);

	return 0;
}

