#include <stdio.h>

int main(void)
{
	float worktime = 0;//工作时间
	int grade = 0;//工资等级
	float basic = 0;//工资标准
	float all = 0;//工资总额
	float tax = 0;//税金
	float netwage = 0;//净工资

grade:	//这个是用于goto语句中的标签，注意写法
printf("**********************************\n\
Enter the number corresponding to\n\
the desired pay rate or action:\n\n\
(1)$8.75/h  (2)$9.33/h\n\
(3)$10.00/h (4)$11.20/h\n\
**********************************\n");

	printf("Please select:\n");
	scanf("%d", &grade);

	printf("Worktimes of this week?worktime=");
	scanf("%f", &worktime);

	switch(grade)
	{
		case 1:
			basic = 8.75;
			break;
		case 2:
			basic = 9.33;
			break;
		case 3:
			basic = 10.00;
			break;
		case 4:
			basic = 11.20;
			break;
		default:
			printf("Select Error!\n");
			goto grade; //用goto语句构成循环
	}

	if(worktime <= 40)
	{
		all = worktime * basic;
	}
	else
	{
		all = (worktime - 40) * 1.5 * basic + 40 * basic;
	}
	/*
	   //这是三目运算符的嵌套使用
	tax = (all > 300) ? (((all - 300) > 150) ?\
	300*0.15+150 * 0.2 + (all - 300 - 150) * 0.25 : (all - 300) * 0.2)\
	: all * 0.15;
    */

	if(all > 300)
	{
		if(all - 300 > 150)//450美元以上的
		{
			tax = 300 * 0.15 + 150 * 0.2 + (all - 450) * 0.25;
		}
		else//300美元以上，450美元以下的
		{
			tax = 300 * 0.15 + (all - 300) * 0.2;
		}
	}
	else //300美元以下的
	{
		tax = all * 0.15;
	}

	netwage = all - tax;//净工资
	printf("Detail:\n");//明细
	printf("all = %.2f\ntax = %.2f\nnetwage = %.2f\n", all, tax,\
	netwage);

	return 0;
}

