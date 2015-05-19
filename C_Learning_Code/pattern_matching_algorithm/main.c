#include <stdio.h>
#include <stdlib.h>
#include "Link.h"

int main(void){
	Blstring *s,*t;
	Block *temp;	
	char c;

	printf("请输入你进行匹配：");
	scanf("%c",&c);

	printf("A");
	while(c !='.' ){
		temp	      = (Block *)malloc(sizeof(Block));
		temp->ch[0]   = c;
		s->head->next = temp;
		s->head	      = temp;
		
		scanf("%c",&c);
	}
	s->head->next = NULL;

	return 0;
}
