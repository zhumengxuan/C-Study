#include <stdio.h>

int main(void)
{
	int len = 0;
	int i = 0;
	int j = 0;
	int num = 0;
	int index = 0;
	int age[] = {11,22,33,44,44,55,44,66,44,77};
	len = sizeof(age)/sizeof(age[0]);

	printf("原始的数列:\n");
	for(i = 0;i < len;i ++)
	{
		printf("%5d",age[i]);
	}
	printf("\n");
	
	printf("请输入要删除的数字:\n");
	scanf("%d",&num);

	for(i = 0;i < len;i ++)
	{
		if(age[i] == num)
		{
			//printf("age[%d]=%d.\n",i,num);
			index = i; //index表示要删除的值的位置

			for(j = index;j < len - 1;j ++)
				//这里的j < len-1才行，这样才不会越界
			   	//这个循环放里面来就表示找一个删一个
			{
				//age[j - 1] = age[j]; 
				//如果j取到len，那么age[j]放后面。
				age[j] = age[j + 1];
				//这里要小心不要越界,j最大可以取到len-2
			}
			len --; //删一个长度就减短1
			i --;//既然这个元素都删除了
			//那么i应该停顿一次，然后再继续
		}
	}
	
	printf("删除%d以后的数列:\n",num);
	for(i = 0;i < len;i ++)
	{
		printf("%5d",age[i]);
	}
	printf("\n");

	return 0;
}

