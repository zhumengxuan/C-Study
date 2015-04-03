#include <stdio.h>

int main(void)
{
	int score = 0;
	printf("pls input a score:\n");
	scanf("%d", &score);
	
	if (score > 100)
	{
		printf("重新输入\n");
	}
	else
	{
		score /= 10;
		printf("score %d\n", score);

		switch(score)
		{
			case 10:
			case 9:
				printf("A\n");
				break;
			
			case 8:
				printf("B\n");
				break;

			case 7:
				printf("C\n");
				break;

			case 6:
				printf("D\n");	
				break;

			default:
				printf("不及格\n");
				break;
		}
	}

	return 0;
}

