#include <stdio.h>
/*
   以下是以米为单位
   BMI = 体重(公斤) / 身高^2(米)

   以下是以厘米为单位
   BMI = 体重(公斤) / (身高 * 身高 / 10000)

   体重过轻  BMI < 18
   正常范围  18 <= BMI＜24
   异常范围  
   　　    过重：    24 <= BMI＜27
   		   轻度肥胖：27 <= BMI＜30
           中度肥胖：30 <= BMI＜35
           重度肥胖：BMI >= 35　 

*/
int main(void)
{
	float height = 0.0;
	float weight = 0.0;
	float result = 0.0;

	printf("请输入身高:");
	scanf("%f", &height);

	printf("请输入体重:");
	scanf("%f", &weight);

	result = weight / (height * height);
	printf("result = %f\n", result);

	if (result < 18)
	{
		printf("体重过轻\n");
	}
	else if (result >= 18 && result < 24)
	{
		printf("体重正常\n");	
	}
	else if (result >= 24 && result < 27)
	{
		printf("过重\n");
	}
	else if (result >= 27 && result < 30)
	{
		printf("轻度肥胖\n");
	}
	else if (result >= 30 && result < 35)
	{
		printf("中度肥胖\n");
	}
	else
	{
		printf("重度肥胖\n");
	}

	return 0;
}

