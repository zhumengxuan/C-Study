#include <stdio.h>

int main(void)
{
	char a;
	short b;
	int c;
	long int d;
	float e;
	double f;
	long double g;


	int *p;//指针变量
	

	printf("char=%lu\n",sizeof(a));  //1个字节
	printf("short=%lu\n",sizeof(b)); //2个字节
	printf("int=%lu\n",sizeof(c));//4个字节
	printf("long int=%lu\n",sizeof(d));//8个字节
	printf("float=%lu\n",sizeof(e));//4个字节
	printf("double=%lu\n",sizeof(f));//8个字节
	printf("long double=%lu\n",sizeof(g));//16个字节
	printf("p=%lu\n",sizeof(p));//mac系统是64位的，指针占8个字节

	return 0;
}

