#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// /usr/include
//包含结构体声明的头文件
//表示包含当前目录下的文件
#include "llinked.h"
// 自定义路径

//节点添加函数
void llist_append_node(struct node *head,
					   struct node *new)
{
	struct node *n = head;
	while (n->next != NULL)
	{
		n = n->next;
	}
	//将节点new添加到链表的末尾
	n->next = new;
}

void llist_print_all(struct node *head)
{
	//循环开始:  n = head->next
	//退出条件:  n == NULL
	//循环增量:	 n = n->next
	//循环体  :  n->id
	//循环遍历所有的数据节点
	struct node *n = head->next;
	while (n != NULL)
	{
		printf("id = %d, name = %s\n", 
					n->id, n->name);
		n = n->next;
	}
}

void llist_search_by_id(struct node *head, 
					    int id)
{
	//循环开始:	n = head->next;
	//循环结束: n == NULL
	//循环增量:	n = n->next;
	//循环体:	id == n->id
	struct node *n = head->next;
	while (n != NULL)
	{
		if (n->id == id)
		{
			printf("Fount it\n");
			//取决于查询条件
			//如果条件的值唯一的话
			//可以马上跳出循环
			printf("id = %d, name = %s\n", 
						n->id, n->name);
			break;
		}
		n = n->next;
	}
}

void llist_search_by_name(struct node *head,
						  char *name)
{
	struct node *n = head->next;
	while (n != NULL)
	{
		if (strcmp(n->name, name) == 0)
		{
			printf("id = %d, name = %s\n",
						n->id, n->name);
		}
		n = n->next;
	}
}

int id_search(struct node *n, void *key)
{
	int *id = (int *)key;
	if (n->id == *id)
	{
		return 1;
	}

	return 0;
}

int name_search(struct node *n, void *key)
{
	char *name = (char *)key;
	if (strcmp(n->name, name) == 0)
	{
		return 1;	
	}
	return 0;
}

void llist_search(struct node *head,
				  void *k,
				  int (*search)(struct node *n, 
				  			    void *key)
				 )
{
	struct node *n = head->next;
	while (n != NULL)
	{
		//判断交由search函数去判断
		if (search(n, k) == 1)
		{
			printf("id = %d, name = %s\n",
					n->id, n->name);
		}
		n = n->next;
	}
}
//1.输入要更改的名字
//2.确认是否更改正确
void func(struct node *head, int id)
{
	char key[10];
	int ok = 0;
	while (!ok)
	{
		scanf("%s", key);
		llist_change_node(head, id, key);
		llist_print_all(head);
		printf("信息是否正确?(0不正确,1正确)\n");
		scanf("%d", &ok);
	}
}



void llist_change_node(struct node *head,
					   int id,
					   char *name)
{
	//找到要修改的节点
	struct node *n = head->next;
	while (n != NULL)
	{
		if (n->id == id)
		{
			//修改名字	
			strcpy(n->name, name);
			break;
		}
		n = n->next;
	}
}

void llist_insert_node(struct node *head,
				       struct node *new,
					   char *name)
{
	struct node *n = head->next;
	while (n != NULL)
	{
		if (0 == strcmp(n->name, name))
		{
			//n1和n2之间插入一个新的节点n4
			//先修改新节点的下一个节点指针
			//n4->next = n1->next;
			//再修改插入位置的下一个节点指针
			//n1->next = n4;
			new->next = n->next;
			n->next = new;
			//不应该再以new节点插入
			break;
		}
		n = n->next;
	}
}

struct node *
llist_searchpre_node(struct node *head,int id)
{
	//循环开始: n = head;
	struct node *n = head;
	//循环退出: n->next == NULL
	while (n->next != NULL)
	{
		//循环体:n->next->id == id
		if (n->next->id == id)
		{
			return n;
		}
		//循环增量:n = n->next
		n = n->next;
	}
	return NULL;
}

void llist_delete_node(struct node *head, int id)
{
	//1.找到要删除节点的上一个节点
	struct node *cur = 
				llist_searchpre_node(head, id);
	//2.删除节点
	struct node *tmp = cur->next;
	//3.修改cur的下一个节点
	cur->next = cur->next->next;
	//4.修改cur下一个节点的下一个节点
	tmp->next = NULL;
	//5.释放tmp
	free(tmp);
}

struct node *llist_destory(struct node *head)
{
	//销毁链表
	struct node *n;
	while (head != NULL)
	{
		//1.先保存当前节点的下一个节点
		n = head->next;
		//2.释放当前节点
		free(head);
		//3.让当前节点等于下一个节点
		head = n;
	}
	//如果返回NULL,说明该链表已被销毁
	//如果不是,说明该链表没有被销毁
	return head;
}

