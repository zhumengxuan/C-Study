#include <stdio.h>
#include <math.h>

double math(double a,double b,char sign)
{
	double ret = 0.0;
	if(fabs(b - 0) < 0.000001)	
	{
		ret = -9999999;
		return ret;
	}

	switch(sign)
	{
		case '+':
			ret = a + b;
			break;

		case '-':
			ret = a - b;
			break;

		case '*':
			ret = a * b;
			break;

		case '/':
			ret = a / b;
			break;

		default:
			break;
	}

	return ret;
}

int main(void)
{
	double a = 0.0;
	double b = 0.0;
	char ch = '\0';
	double ret = 0.0;

	printf("请输入a、计算符号与b,例如(a+b):\n");
	scanf("%lf%c%lf",&a,&ch,&b);

	ret = math(a,b,ch);
	printf("计算结果ret = %.2lf\n",ret);

	return 0;
}

