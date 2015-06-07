#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int letter_count;
	int word_count;
	int c;
	int mark;

	letter_count = 0;			//字母的总数
	word_count   = 0;			//单词的个数;
	mark	     = 0;			//mark用来标记，两个单词之间符号或空白存在两个及两个以上时，只计算一次单词数
	while((c = getchar()) != EOF)
	{
		if(isalpha(c))
		{
			letter_count++;
			mark = 1;
		}
		if((isblank(c)||ispunct(c))&& mark == 1)
		{	
			word_count++;
			mark = 0;
		}
	}
	printf("There are %d words and %d letter\n",word_count,letter_count);
	printf("The mean letter of the words is %f\n",(float)letter_count/(float)word_count);
	return 0;
}
