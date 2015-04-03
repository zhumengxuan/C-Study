#include <stdio.h>

int main(void)
{
	int i,num,n;
	int sum = 0;
	
	printf("pls input num&n:\n");
	scanf("%d%d",&num,&n);
	if(num>9||num<1)
		return 0;

	for(i = 0; i < n; i ++)
	{
		sum += num;
		num = num*10 + 2;
	}
	printf("sum = %d\n", sum);

	return 0;
}

