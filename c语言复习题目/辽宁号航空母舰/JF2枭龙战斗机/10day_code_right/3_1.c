#include <stdio.h>

int main(void)
{
	int score = 0;
	scanf("%d", &score);

	if(score >= 90)
	{
		printf("A\n");
	}
	else
	{
		if(score >= 60 && score <= 89)
		{
			printf("B\n");
		}
		else
		{
			printf("C\n");
		}
	}

	return 0;
}

