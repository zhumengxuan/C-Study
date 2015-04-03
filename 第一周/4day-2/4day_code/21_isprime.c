#include <stdio.h>
#include <math.h>

int main(void)
{
	int i,N;
	printf("pls input a N:\n");
	scanf("%d",&N);

	//for(i = 0;i <= sqrt(N); i ++) //注意这里的i不能为0，否则报错
	for(i = 2;i <= sqrt(N); i ++) //注意这里的i不能为0，否则报错
	{
		if(N%i == 0) //原因是这里i被用作分母了，报错Floating point exception:8
		{
			printf("%d is not a prime!\n",N);
			return 0; //这里不能是break，因为break的话，后面的if语句还会执行，我们想要的目标是后面的不再执行了
		}
	}
if(N != 1) //因为1既不是素数，也不是合数。
	printf("%d is a prime!\n",N);
/*
//方法二:
	for(i = 2;i <= sqrt(N); i ++) 
	{
		if(N%i == 0)
		{
			printf("%d is not a prime!\n",N);
			//return 0;
			break; //如果这里改用break的话，也就是说让这个循环退出，那么如果是素数，就会执行到循环的最后，循环跳出的时候，i已经为i>sqrt(N)了!在后面就要修改一下判断条件了!
		}
	}
if(	N != 1&&i > sqrt(N)) //因为1既不是素数，也不是合数。
	printf("%d is a prime!\n",N);
*/
	return 0;
}


