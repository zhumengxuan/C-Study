#include <stdio.h>
#include <stdlib.h>

struct stu
{
	int id;
	char sex;
};

int main(void)
{
	struct stu *p = (struct stu*)malloc(sizeof(struct stu));
	if(p != NULL)
	{
		p->id = 10;
		printf("p->id=%d\n",p->id);	
	}

	return 0;
}

