#include <stdio.h>

int main(void)
{
	int i = 0;
	//int j = 0;
	int sum = 0;

	//for(j=0;j<12;j++)
	//{
		  for(i=0;i<30;i++)//让整个这部分成为外循环的循环体
		  {
			 sum = sum + 100; //sum += 100;	
		  }	
	//}
	printf("%5d\n",sum);

	return 0;
}

