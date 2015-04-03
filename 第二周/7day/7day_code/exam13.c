#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	int max = 0;
	int maxi = 0;
	int maxj = 0;
	int score[6][3] = 
	{
		{55,66,77},
		{88,99,74},
		{98,87,45},
		{33,100,59},
		{55,66,99},
		{49,87,98}
	};

	max = score[0][0];
	for(i = 0;i < 6;i ++)
	{
		for(j = 0;j < 3;j ++)
		{
			if(max < score[i][j])
			{
				max = score[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}
	printf("score[%d][%d] is the hightest score!\n",
			maxi,maxj);
	printf("score[%d][%d] = %d\n",
			maxi,maxj,score[maxi][maxj]);

	return 0;
}

