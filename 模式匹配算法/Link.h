#include <stdio.h>

#define BLOCK_SIZE 1
typedef struct Block{
	char ch[BLOCK_SIZE];
	struct Block *next;
}Block;

typedef struct{
	Block *head;
 	Block *tail;
	int len;
}Blstring;	/* 为了操作方便定义的结构体，指向串的头和尾 
		 * 每一个串只有一个该结构体定义的变量就够了 */

Block * StrIndex(Blstring *s,Blstring *t)
/* 求模式串t在主串s中第一次出现的位置指针 */
{
	Block *sp,*tp,*start;

	if(t->len == 0)	return s->head->next;	/* 如果模式串的长度为零，返回主串的第一个节点 */
	start = s->head->next;			/* 记录主串的起始比较位置 */		
	sp = start;				/* 主串从start开始 */
	tp = t->head->next;			/* 模式串从第一个节点开始 */

	while(sp != NULL && tp != NULL)
	{
		if(sp->ch == tp->ch)		/* 字符匹配则继续比较 */
		{
			sp = sp->next;
			tp = tp->next;
		}
		else				/* 不匹配，主串的起始位置变为下一个节点 */
		{
			start = start->next;
			sp = start;
			tp = t->head->next;
		}
	}
	if(tp == NULL)	return start;		/* 成功找到匹配主串的起始位置指针 */
	else	return NULL;
}
