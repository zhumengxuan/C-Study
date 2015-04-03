#include <stdio.h>

int main(void)
{
	long int f1 = 1;
	long int f2 = 1;
	int i = 0;
	int n = 0;

	for(i = 1;i <= 10;i ++)//一次打印两项，10次打印20项
	{
		printf("%ld\t%ld\t",f1,f2);
		n += 2;  //一次输出了两项
		
		f1 += f2; //记住也行 f1 = f1 + f2;
		f2 += f1; //理解也行 f2 = f2 + f1;
		
		if(n % 4 == 0)
			printf("\n");
	}

	return 0;
}

