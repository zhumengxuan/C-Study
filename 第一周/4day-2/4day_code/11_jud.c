#include <stdio.h>

int main(void)
{
	long int n,num,ret;
	int count = 0;

	printf("pls input a num:\n");
	scanf("%ld",&num);

	n = num; //num进行备份
	while(n)
	{
		n /= 10;
		count++;
	}

	printf("%ld is a %d bit_number!\n",num,count);	


/*
	ret = 0;
	ret = ret * 10 + num % 10;
	//while(num!=0) //为什么错？
	while(num>10)
	{
		num /= 10;
		ret = ret * 10 + num % 10;
	}
*/

	ret = 0;
	while(num!=0) //这个时候就是num != 0了。
	{
		ret = ret * 10 + num % 10;
		num /= 10;
	}

	printf("Now the number is:");
	printf("ret=%ld.\n",ret);

	return 0;
}

