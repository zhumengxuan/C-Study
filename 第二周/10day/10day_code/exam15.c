#include <stdio.h>

int main(void)
{
	char time[20];
	int year = 2014;
	int month = 9;
	int day = 7;

	sprintf(time,"%d-%d-%d",year,month,day);
	puts(time);

	return 0;
}

