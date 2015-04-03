#include <stdio.h>

int main(void)
{
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	
	printf("pls input the time:\n");
	scanf("%d: %d: %d", &hours, &minutes, &seconds);
	seconds ++; //秒数加1

	if(seconds == 60)
	{
		seconds = 0;
		minutes ++;
		if(minutes == 60)
		{
			minutes = 0;
			hours ++;
			if(hours == 24)
			{
				hours = 0;
			}
		}
	}
	printf("%d : %d : %d\n", hours, minutes, seconds);

	return 0;
}

