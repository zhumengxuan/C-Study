#include <stdio.h>

int main(void)
{
	int month = 0;
	printf("pls input month:\n");
	scanf("%d",&month);

	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31天!\n");
			break;

		case 2:
			printf("28或者29天!\n");
				break;

		case 4:
		case 6:
		case 9:
		case 11:
			printf("30天!\n");
			break;

		default:
			break;
	}

	return 0;
}

