#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int guest = 0;
	int n = 88; //固定的数值n
	printf("n = %d\n",n);

	do
	{	
		printf("请再输入一个数:\n");
		scanf("%d",&guest); //先接收一个数字，然后才能判断
		
		if(guest > n)
			printf("太大了!\n");
		else if(guest < n)
			printf("太小了!\n");
		else
			printf("你太厉害了，思密达!\n");

	}while(guest != n);

	return 0;
}

