#include <stdio.h>
#include <stdlib.h>

struct 	Node
{
	int id;
	int data;
	struct Node *next;
};
/*
void append(struct node *head,struct node *new)
{
	struct node *n = head;
	while(n->next != NULL)
	{
		n = n->next;
	}
	n->next = new;
	//n->next->id = id;
	//n->next->data = data;
}
*/
void append(struct Node *head,int id,int data)
{
	struct Node *n = head;
	struct Node *pnew = (struct Node *)malloc(sizeof(struct Node));
	if(pnew != NULL)
	{
		pnew->id = id;
		pnew->data = data;
		pnew->next = NULL;
	}
	while(n->next != NULL)
	{
		n = n->next;
	}
	//n->next = new;
	//n->next->id = id;
	//n->next->data = data;
	n->next = pnew;
}

int main(void)
{
	struct Node *head = (struct Node *)malloc(sizeof(struct Node));
	head->next = NULL;

	append(head,1,99); //传id与data过去
	
	printf("head->next->id=%d\n",head->next->id);
	printf("head->next->data=%d\n",head->next->data);

	return 0;
}

