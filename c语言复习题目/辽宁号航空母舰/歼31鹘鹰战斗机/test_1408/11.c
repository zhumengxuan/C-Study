#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int id;
	int data;
	struct node *next;
};

void insert(struct node *head,
		struct node *new,int id)
{
	struct node *n = head;
	while(n->next != NULL)
	{
		if(n->next->id == id)
		{
			new->next = n->next;
			n->next = new;
			break;
		}
		n = n->next;
	}
}

void print(struct node *head)
{
	struct node *n = head->next;
	while(n != NULL)
	{
		printf("n->id=%d,n->data=%d\n",
				n->id,n->data);
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
	n1->data = 88;
	n1->next = NULL;

	head->next = n1;

	struct node *new = (struct node *)
		malloc(sizeof(struct node));
	new->id = 2;
	new->data = 99;
	new->next = NULL;

	int id = 0;
	printf("请输入要插到哪个id结点的前面:\n");
	scanf("%d",&id);

	insert(head,new,id);
	print(head);

	return 0;
}

