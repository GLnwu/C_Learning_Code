#include <stdio.h>
#include <stdlib.h>
#include "Link.h"
int main(void){
	Blstring *s,*t;			/* s和t是主串和模式串的带长度的头节点指针 */
	char c;
	Block *te,*mp;
	
	printf("输入主串(以‘.’结束)：");
	c = getchar();
	s = (Blstring *)malloc(sizeof(Blstring));	/* 声明指向结构体的指针是不会分配内存空间的，所以必须用malloc申请，里面的二级指针也是如此 */
	s->head = (Block *)malloc(sizeof(Block));
	s->head->next = NULL;		/* 将s初始化位头指针指向初始化的空链表 */
	te = s->head;			/* te动态指向链表的当前表位，以便于尾插入，初值指向头节点s */
	while(c != '.'){
		mp 	  = (Block *)malloc(sizeof(Block));
		mp->ch[0] = c;
		te->next  = mp;		/* 将mp插入te的尾部 */
		te 	  = mp;		/* 将te指向新的尾节点 */
		c 	  = getchar();
	}
	te->next=NULL;
	te=mp=NULL;			/* 重新初始化te和mp */

	printf("输入模式串(以‘.’结束)：");
	c=getchar();
	t=(Blstring *)malloc(sizeof(Blstring));
	t->head = (Block *)malloc(sizeof(Block));
	t->head->next=NULL;		/* 将t初始化为头指针指向初始化的空链表 */
	te=t->head;			/* te动态指向链表的当前表位，以便于尾插入，插值指向头节点s */
	while(c != '.'){
		mp 	  = (Block *)malloc(sizeof(Block));
		mp->ch[0] = c;
		te->next  = mp;		/* 将mp插入te的尾部 */
		te 	  = mp;		/* 将te指向新的尾节点 */
		c 	  = getchar();
	}
	te->next=NULL;
	te=mp=NULL;			/* 重新初始化te和mp */
	
	if(StrIndex(s,t) != NULL)	/* 比较s和t的串 */
		printf("模式串与主串匹配，位置为：");
	else
		printf("模式串与主串不匹配。");
	free(te);free(mp);		/* 释放所有malloc后的内存空间 */
	free(s);free(t);	
	return 0;
}		
