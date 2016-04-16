/*************************************************************************
    > File Name: friends.c
    > Author: GaoLi
    > Mail: bingtang1021@gmail.com 
    > Created Time: Mon 04 Apr 2016 12:35:54 AM CST
 ************************************************************************/
/* friends.c -- 使用指向结构的指针 */
#include<stdio.h>
#define LEN 20

struct names{
	char 	first[LEN];
	char 	last[LEN];
};

struct guy{
	struct 	names handle;
	char	favfood[LEN];
	char	job[LEN];
	float	income;
};
int main(void)
{
	struct guy fellow[2] ={
		{{"Ewen", "Villard" },
		 "grilled salmon",
		 "personality coach",
		 68112.00
		},
		{{"Rodney","Swillbelly"},
			"tripe",
			"tabloid editor",
			232400.00
		}
	};
	struct guy * him;		/* hope is a pointer to a structer */

	printf("address #1: %p #2: %p\n",&fellow[0],&fellow[1]);
	him = &fellow[0];		/* tell the pointer where to point */
	printf("pointer #1:%p #2: %p\n",him,him+1);
	printf("him->income is $%.2f: (*him).income is $%.2f\n",him->income,(*him).income);
	him++;				/* tell the pointer where to point */
	printf("hime->favfood is %s: hime->handle.last is %s\n",him->favfood,him->handle.last);

	return 0;
}
