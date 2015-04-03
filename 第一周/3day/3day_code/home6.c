#include <stdio.h>

int main(void)
{
	int faHeight = 0;
	int moHeight = 0;
	char sex = '\0';
	char sports = '\0';
	char hea_habit = '\0';
	float pre_Height = 0.0;
	float pre_Height0 = 0.0;

	printf("pls input the height of father:\n");
	scanf("%d",&faHeight);
	printf("pls input the height of mother:\n");
	scanf("%d",&moHeight);
	printf("pls input the sex of child(M&F):\n");
	getchar();
	scanf("%c",&sex);
	printf("pls input sports or not(Y&N):\n");
	getchar();
	scanf("%c",&sports);
	printf("pls input the hea_habit is good or not(Y&N):\n");
	getchar();
	scanf("%c",&hea_habit);

	printf("faHeight is:%d\n",faHeight);
	printf("moHeight is:%d\n",moHeight);
	printf("sex is:%c\n",sex);
	printf("sports is:%c\n",sports);
	printf("hea_habit is:%c\n",hea_habit);
	if(sex == 'M'||sex == 'm')
		pre_Height = (faHeight+moHeight)*0.54;
	else if(sex == 'F'||sex == 'f')
		pre_Height = (faHeight*0.923+moHeight)/2;
	else
		printf("sex error!\n");

	pre_Height0 = pre_Height;
	if(sports == 'Y'||sports == 'y')
		pre_Height += pre_Height0*0.02;
	if(hea_habit == 'Y'||hea_habit == 'y')
		pre_Height += pre_Height0*0.015;

	printf("The pre_Height is:%.2f.\n",pre_Height);

	return 0;
}

