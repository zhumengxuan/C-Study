//当第一包含该文件时
//判断该宏是否已经定义过
//如果没有,马上定义
//那下次再包含的时候,因为该宏已定义
//所以不会包含任何内容
#ifndef _LLINKED_H_
#define _LLINKED_H_

struct node
{
	//数据部分,数据域
	int id;
	char name[10];
	//char name[10];
	//指针部分,下个节点的指针变量
	//指针域
	struct node *next;
};

//添加节点函数
void llist_append_node(struct node *head,
					   struct node *new);
//遍历链表函数
void llist_print_all(struct node *head);

//查询函数
void llist_search_by_id(struct node *head, 
					    int id);
void llist_search_by_name(struct node *head,
						  char *name);
//更新节点信息
void llist_change_node(struct node *head,
					   int id,
					   char *name);
//连亮版本
void func(struct node *head, int id);

//将节点插入到指定名字后面
void llist_insert_node(struct node *head,
				       struct node *new,
					   char *name);
//查找指定id的前一个结点
struct node *
llist_searchpre_node(struct node *head,int id);

//删除指定id节点
void llist_delete_node(struct node *head, int id);

//链表销毁函数
struct node *llist_destory(struct node *head);

//扩展: 通用查询函数
void llist_search(struct node *head,
				  void *k,
				  int (*search)(struct node *n, 
				  			    void *key)
				 );
int name_search(struct node *n, void *key);
int id_search(struct node *n, void *key);

#endif

