#include <stdio.h>

int main(void)
{
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	int sum_seconds = 0;

	printf("pls input the time:\n");
	scanf("%d: %d: %d: ",&hours,&minutes,&seconds);
	seconds++;

	sum_seconds = hours*3600+minutes*60+seconds;
	hours = sum_seconds / 3600;
	sum_seconds %= 3600;
	minutes = sum_seconds / 60;
	sum_seconds %= 60;
	seconds = sum_seconds;

	if(hours == 24)
	{
		hours = 0;
		minutes = 0;
		seconds = 0;
	}
	printf("%d: %d: %d",hours,minutes,seconds);
	printf("\n");

	return 0;
}

