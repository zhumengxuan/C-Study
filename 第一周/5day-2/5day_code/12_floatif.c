#include <stdio.h>
#include <math.h>

int main(void)
{
	float f = 3.141592;
	//判断是否在合理范围内
	//fabs	绝对值
    if((f - 3.141592) == 0)
//	if (fabs(f - 3.141592) < 0.000001)
	{
		printf("f和3.141592是相等的!\n");
	}
	else
		printf("f和3.141592是不相等的!\n");

	return 0;
}

