#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = 'A';
	ch = tolower(ch);
	printf("ch = %c\n", ch);

	return 0;
}

