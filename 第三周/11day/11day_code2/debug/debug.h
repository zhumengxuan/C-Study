#ifndef _DEBUG_H_
#define _DEBUG_H_

#define LEVEL_INFO 0
#define LEVEL_DBUG 1
#define LEVEL_WARN 2
#define LEVEL_ERRO 3
int level = 0;
//四个调试宏
#define INFO(fmt, var...)				\
		do{								\
		  if (LEVEL_INFO >= level)		\
		  {								\
			printf("INFO:%s:%s:%d:",\
					__FILE__, __func__,\
				   	__LINE__);	\
		  	printf(fmt, var);			\
		  }								\
		}while(0);

#define DBUG(msg, var...)				\
		do{								\
		  if (LEVEL_DBUG >= level)		\
		  {								\
			printf("DEBUG:%s:%s:%d:",\
					__FILE__, __func__,\
				   	__LINE__);\
		  	printf(msg, var);			\
		  }								\
		}while(0);

#endif

