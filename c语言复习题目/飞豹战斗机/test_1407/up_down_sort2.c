#include <stdio.h>
//本题是对已知数组成员进行升序和降序组合的穷举
int main(void)
{
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 0;
	int h = 0;
	int k = 0;
	int p = 0;
	int ret = 0;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	//int num[10] = {1,10,8,5,9,3,2,6,7,4};
	
	int num[10] = {0};
	printf("pls input 10 numbers:\n");
	for(i = 0;i < 10;i ++)
	{
		scanf("%d",&num[i]);
	}
	ret = num[0];

	for(i = 0;i < 9;i ++) 
	//大循环，假想最多的变化次数9次（0～8）
	{
		count1 = 1;//表示已经有一次升序了
		count2 = 1;

		if(ret < num[i + 1]) //升序的情况，处理方法如下
		{
			for(k = i + 1;k < 10;k ++) //变化次数最大为从i+1到9
			{
				if(ret < num[k])//每次判断是否还是升序
				{
					count1 ++;//记录一下本小轮有几个数是升序的
					ret = num[k];//更新一下判断“基准数”
					h = k;	//备份成h是为了后面计算打印次数		
					i = k;  //把k赋给i是为了更新i的值
				}
				else
					break;//如果变为降序，退出循环
			}

			for(p = h - count1 + 1;p < h + 1;p ++)
			//把升序部分的数字打印出来
				printf("%5d",num[p]);
			printf("\n");
			count3 ++;//记录有几组升序数字
			i--;
			//这里是为了抵消i++，即保持在升序的最后一个数字处
			//作为降序的开头的第一个数
		}
		else if(ret > num[i + 1])//降序的情况，处理方法如下
		{
			for(m = i + 1;m < 10;m ++)//变化次数最大为从i+1到9
			{
				if(ret > num[m])
				//每次判断是否还是降序
				{
					count2 ++;//记录一下本小轮有几个数是降序的
					ret = num[m];//更新一下判断“基准数”
					n = m;//备份成n是为了后面计算打印次数 
					i = m;//把k赋给i是为了更新i的值
				}
				else
					break;//如果变为升序，退出循环
			}
			
			for(j = n - count2 + 1;j < n + 1;j ++)
				printf("%5d",num[j]);
			//把降序部分的数字打印出来
			printf("\n");

			count3 ++;//记录有几组降序数字
			i--;
			//这里是为了抵消i++，即保持在降序的
			//最后一个数字处
			//作为升序的开头的第一个数
		}
	}
	printf("count3 = %d\n",count3);
	//升序与降序数字的组数之和

	return 0;
}

