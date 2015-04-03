/*利用递归函数
 递归结束条件：day == 10

 由于func(2) = func(1) / 2 - 1
 故  func(1) = 2 * (func(2) + 1)

 即：func(1) = 2 * (func(2) + 1)
 	 func(2) = 2 * (func(3) + 1)
	 func(3) = 2 * (func(4) + 1)
	 ...
	 func(9) = 2 * (func(10) + 1)
	 func(10) == 1
*/

#include <stdio.h>

int func(int day)
{
	int ret = 0;

	if(day == 10)
		ret = 1;
	else
		ret = 2 * (func(day + 1) + 1);

	return ret;
}

int main(void)
{
	int sum = 0;

	sum = func(1);//要求的是第一天的桃子数
	printf("sum = %d\n", sum);

	return 0;
}

