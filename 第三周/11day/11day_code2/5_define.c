#include <stdio.h>
//.h .c .m
//1.如果代码超过2行,需要花括号括起
//2.如果需要接收宏的结果,不要使用花括号括起
#define TOLOWER(ch)	\
			(ch >= 'A' && ch <= 'Z') ?	\
					((ch) + 32) : ch	\

#define TOUPPER(ch) ((ch) - 32)
#define SET1(n, m)	((n) |  (0x1 << (m)))
#define SET0(n, m)	((n) & ~(0x1 << (m)))
#define GETB(n, m)	((n) & (0x1 << (m)) >> (m))
#define SHIGH(n)  (((n) & 0xff00) >> 8)
#define SLOW(n)	  ((n) & 0x00ff)
#define SSWAP(n)  (SHIGH(n) | SLOW(n) << 8)
#define SWAP(a, b)			\
				{			\
					a ^= b; \
					b ^= a; \
					a ^= b;	\
				}\

int main(void)
{
	short var = 0x1234;
	printf("low = %x\n", SLOW(var));
	printf("low = %#x\n", SLOW(var));
	printf("high = %#x\n", SHIGH(var));
	printf("SSWAP = %#x\n", SSWAP(var));

	return 0;
}

