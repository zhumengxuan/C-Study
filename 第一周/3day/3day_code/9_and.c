#include <stdio.h>

int main(void)
{
	int id = 123;
	int self = 456;
	int handsome = 99;
	int result;
	
	//同时满足三个条件
	result = id == 123 && 
			 self == 456 && 
			 handsome == 100;
	printf("result = %d\n", result);

	return 0;
}

