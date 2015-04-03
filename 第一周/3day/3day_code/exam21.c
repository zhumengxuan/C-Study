#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	char ch = '\0';
	printf("pls input a&sig&b:(as 3+5)\n");
	scanf("%d%c%d",&a,&ch,&b);

	switch(ch)
	{
		case '+':
			printf("%d+%d=%d\n",a,b,a+b);
			break;
		case '-':
			printf("%d-%d=%d\n",a,b,a-b);
			break;
		case '*':
			printf("%d*%d=%d\n",a,b,a*b);
			break;
		case '/':
			if(b == 0)
				break;
			printf("%d/%d=%d\n",a,b,a/b);
			break;
		default:
			break;
	}

	return 0;
}

