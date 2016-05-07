/*************************************************************************
  > File Name: names1.c
  > Author: GaoLi
  > Mail: bingtang1021@gmail.com 
  > Created Time: Sat 07 May 2016 02:10:58 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NLEN 30
struct namect {
	char fname[NLEN];
	char lname[NLEN];
	int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
char * s_gets(char * st,int n);

int main(void)
{
	struct namect person;

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	return EXIT_SUCCESS;
}

void getinfo(struct namect * pst)
{
	printf("Please enter your first name.\n");
	s_gets(pst->fname,NLEN);
	printf("Please enter your last name.\n");
	s_gets(pst->lname,NLEN);
}

void makeinfo(struct namect * pst)
{
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
	printf("%s %s.your name contains %d letters.\n",
			pst->fname,pst->lname,pst->letters);
}

char * s_gets(char * st,int n)
{
	char * ret_val = NULL;
	char * find;

	if(NULL == st)
	{
		return ret_val;
	}

	ret_val = fgets(st,n,stdin);
	if(ret_val)
	{
		find = strchr(st,'\n');		//look for newline
		if(find)			//if the pointer is not NULL
		{
			*find = '\0';		//place a null terminator there
		}
		else
		{
			while('\n' == getchar())		
				continue;	//dispose of rest of line.
		}

	}
}
