#include <stdio.h>

int main(void)
{
	char time[20];
	int hour = 12;
	int min = 59;
	int second = 59;

	sprintf(time,"%d:%d:%d",hour,min,second);
	puts(time);

	return 0;
}

