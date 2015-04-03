#include <stdio.h>

int main(void)
{
	long int num = 0;
	int ret = 0;
	int place = 0;

	printf("pls input a num:\n");
	scanf("%ld",&num);

	if(num > 99999)  //傻瓜式的判断
	{
		printf("num bigger!\n");
		return 0;
	}
	else if(num > 9999 && num <= 99999)
		place = 5;
	else if(num > 999 && num <= 9999)
		place = 4;
	else if(num > 99 && num <= 999)
		place = 3;
	else if(num > 9 && num <= 99)
		place = 2;
	else if(num >= 0 && num <= 9)
		place = 1;
	else
	{
		printf("num is smaller!\n");
		return 0;
	}
	printf("%ld is a %d bit_number!\n",num,place);	
	
	printf("Now the number is:");
	while(num)
	{
		printf("%ld",num%10); //但是这样得到的4321实际上是一个字符串
		num /= 10;
	}
	printf("\n");
	
	return 0;
}

