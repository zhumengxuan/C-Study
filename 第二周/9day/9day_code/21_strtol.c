#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *str = "0x15";
	long res = strtol(str, NULL, 0); 
	printf("res = %ld\n", res);

	return 0;
}

