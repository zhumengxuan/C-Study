#include <stdio.h>

int main(void)
{
	int i = 0;
	int n = 2;
	long int f1 = 0;
	long int f2 = 0;
	long int f3 = 0;

	f1 = 1;
	f2 = 1;
	printf("%ld\t%ld\t",f1,f2);

	for(i = 1;i <= 30;i ++)
	{
		f3 = f1 + f2;
		printf("%ld\t",f3);
		n ++;
	
		f1 = f2; //更新f1
		f2 = f3; //更新f2
		
		if(n % 4 == 0)
			printf("\n");
	}

	return 0;
}

