#include <stdio.h>

int main(void)
{
	int score = 0;
	printf("pls input a score:\n");
	scanf("%d", &score);

	if (score >= 60)
	{
		if (score >= 60 && score < 70)
		{
			printf("D\n");
		}
		if (score >= 70 && score < 80)
		{
			printf("C\n");
		}
		if (score >= 80 && score < 90)
		{
			printf("B\n");
		}
		if (score >= 90 && score <= 100)
		{
			printf("A\n");
		}
		//.....
	}
	if(score<60)
	{
			printf("不及格！\n");
	}

	return 0;
}

