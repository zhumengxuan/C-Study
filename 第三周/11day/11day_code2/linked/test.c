#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "llinked.h"

int main(void)
{
	struct node *head = 
			(struct node *)
			malloc(sizeof(struct node ));

	struct node *n1 = 
			(struct node *)
			malloc(sizeof(struct node ));
	n1->id = 1;
	strcpy(n1->name,"mazi");
	n1->next = NULL;

	llist_append_node(head, n1);
	llist_print_all(head);

	return 0;
}

