#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int c;
	int capital_count,lower_count;

	capital_count = 0;
	lower_count   = 0;	
	while((c = getchar()) != EOF)
	{
		if(isupper(c))
			capital_count++;
		if(islower(c))
			lower_count++;
	}
	printf("There are %d capital letters and %d lower letters\n",capital_count,lower_count);
	return 0;
}
