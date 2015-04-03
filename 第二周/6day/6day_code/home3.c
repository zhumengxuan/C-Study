#include <stdio.h>

int avg(int a,int b,int c,int d)
{
	return (a+b+c+d)/4;	
}

int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	printf("pls input 4 numbers:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	int ret = 0;
	ret = avg(a,b,c,d);
	printf("ret = %d\n",ret);

	return 0;
}

