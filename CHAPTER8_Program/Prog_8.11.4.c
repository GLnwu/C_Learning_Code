#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int letter_sum;
	int word_count;
	int c;
	int 

	letter_sum   = 0;	//字母的总数
	word_count = 0;		//单词的个数;
	while((c = getchar()) != EOF)
	{
		if(isalpha(c))
			letter_sum++;
				
		
