#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node 
{
	int id;
	char name[20];
	struct node *next;
};

void insert(struct node *head,char *name)
{
	struct node *new = (struct node *)
		malloc(sizeof(struct node));
	new->id = 2;
	strcpy(new->name,"lisi");
	new->next = NULL;

	struct node *n = head->next;
	while(n != NULL)
	{
		if(strcmp(n->name,name) == 0)
		{
			new->next = n->next;
			n->next = new;
			break;
		}
		n = n->next;
	}
}

int main(void)
{
	struct node *head = (struct node *)
		malloc(sizeof(struct node));
	head->next = NULL;

	struct node *n1 = (struct node *)
		malloc(sizeof(struct node));
	n1->id = 1;
	strcpy(n1->name,"zhangsan");
	n1->next = NULL;
	head->next = n1;

	char name[20];
	printf("pls input a name:\n");
	scanf("%s",name);

	insert(head,name);

	struct node *n = head->next;
	while(n != NULL)
	{
		printf("n->id=%d,n->name=%s\n",n->id,n->name);
		n = n->next;
	}

	return 0;
}

