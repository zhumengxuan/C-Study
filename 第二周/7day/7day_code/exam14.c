#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;

	int sum_object_C = 0;
	int sum_object_OC = 0;
	int sum_object_CPP = 0;

	int sum_each_1 = 0;
	int sum_each_2 = 0;
	int sum_each_3 = 0;

	float aver_object_C = 0.0;
	float aver_object_OC = 0.0;
	float aver_object_CPP = 0.0;

	float aver_each_1 = 0.0;
	float aver_each_2 = 0.0;
	float aver_each_3 = 0.0;

	int score[3][3] = 
	{
		{81,86,87},
		{88,82,90},
		{91,92,80}
	};

	int len = sizeof(score)/sizeof(score[0]);
	int len1 = sizeof(score[0])/sizeof(score[0][0]);

	for(i = 0;i < len;i ++)
	{
		for(j = 0;j < len1;j ++)
		{
			if(j == 0)
				sum_object_C += score[i][j];
			else if(j == 1)
				sum_object_OC += score[i][j];
			else if(j == 2)
				sum_object_CPP += score[i][j];

			if(i == 0)
				sum_each_1 += score[i][j];
			else if(i == 1)
				sum_each_2 += score[i][j];
			else if(i == 2)
				sum_each_3 += score[i][j];
		}
	}

	aver_object_C = sum_object_C / 3;
	aver_object_OC = sum_object_OC / 3;
	aver_object_CPP = sum_object_CPP / 3;

	aver_each_1 = sum_each_1 / 3;
	aver_each_2 = sum_each_2 / 3;
	aver_each_3 = sum_each_3 / 3;

	printf("aver_object_C = %.2f\n",aver_object_C);
	printf("aver_object_OC = %.2f\n",aver_object_OC);
	printf("aver_object_CPP = %.2f\n",aver_object_CPP);
	printf("aver_each_C = %.2f\n",aver_each_1);
	printf("aver_each_OC = %.2f\n",aver_each_2);
	printf("aver_each_CPP = %.2f\n",aver_each_3);

	return 0;
}

