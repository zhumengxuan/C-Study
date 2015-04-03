#include <stdio.h>

int main(void)
{
	int i = 0;
	long int f[20] = {1,1};

	for(i = 2;i < 20;i ++)
		f[i] = f[i-1] + f[i-2];

	for(i = 0;i < 20;i ++) //打印出来
	{
		printf("%ld\t",f[i]);
		
		//if(i != 0 && i % 5 == 0) //写成这样又如何?
		//注意这里为什么要写成这样的条件？
		if((i + 1) != 0 && (i + 1) % 5 == 0) 
			printf("\n");
	}

	return 0;
}

