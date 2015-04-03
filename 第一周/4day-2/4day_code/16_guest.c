#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	int guest = 0;
	//srand(time(0)); //随机数发生器
	//n = rand()%100;  //确保这个数在0～99范围内
	n = arc4random() % 100;
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

