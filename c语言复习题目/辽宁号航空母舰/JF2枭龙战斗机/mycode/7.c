#include <stdio.h>

int main(void)
{
	int i,j,k;
	for(i = 'x'; i <= 'z'; i ++)
	{
		for(j = 'x'; j <= 'z'; j ++)
		{
			if(i != j)
			{
				for(k = 'x'; k <= 'z'; k ++)
				{
					if(k != i && k != j)
					{
						if(i != 'x' && k !='x' && k != 'z')
							printf("a和%c比，b和%c比，c和%c比\n",i,j,k);
					}
				}
			}
		}
	}

	return 0;

}
