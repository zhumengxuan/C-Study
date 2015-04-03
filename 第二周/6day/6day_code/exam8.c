#include <stdio.h>

int main(void)
{
	int i = 0;
	float height[5] = {0};
	float average = 0.0;
	float sum = 0.0;

	for(i = 0;i < 5;i ++)
	{
		printf("pls input the height of student%d:\n",i+1);
		scanf("%f",&height[i]);
	}
	
	for(i = 0;i < 5;i ++)
	{
		printf("student%d:%.2f\n",i+1,height[i]);
	}
	
	for(i = 0;i < 5;i ++)
	{
		sum = sum + height[i]; //sum += height[i];
	}
	average = sum/5;
	printf("average = %.2f.\n",average);

	return 0;
}

