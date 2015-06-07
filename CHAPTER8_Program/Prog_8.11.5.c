/* Prog_8.11.5.c -- 改自程序8.4（guess.c） */
#include<stdio.h>
int main(void)
{
	int guess = 50;
	int c;
	int max,min;

	printf("Pick an integer from 1 to 100.I will try to guess");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\n an s if it is smaller and with an b if it is bigger .\n");
	printf("Uh...is your number %d?\n",guess);
	max = 100;
	min = 1;			//max和min代表用户的数字的范围
	while((c = getchar())!='y')	/* 获取用户相应并和y比较 */
	{
		if(c == 'b')
		{
			min = guess;
			guess = guess + (max-min)/2;
			printf("Well. then is it %d?\n",guess);
			continue;
		}
		if(c == 's')
		{
			max = guess;
			guess = guess -(max-min)/2;
			printf("Well. then is it %d?\n",guess);
			continue;
		}
		if(c != 'y'&&c != 'b'&&c != 's')
		{
			printf("Error input!");
			continue;
		}
	}
	printf("I knew I could do it!\n");
	return 0;
}
