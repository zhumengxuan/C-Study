#include <stdio.h>

enum size
{
	L,
	M,
	XL,
	XXL
};

int main(void)
{
	enum size blacket;
	blacket = XXL;
	printf("blacket = %d\n",blacket);
	
	switch(blacket)
	{
		case L:
			printf("L!\n");
			break;

		case M:
			printf("M!\n");
			break;

		case XL:
			printf("XL!\n");
			break;

		case XXL:
			printf("XXL!\n");
			break;

		default:
			printf("Have no this kind!\n");
			break;
	}

	return 0;
}

