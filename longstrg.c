/* longstrg.c -- 打印较长的字符 */
#include <stdio.h>
int main(void)
{
	printf("Here's one way to print a ");
	printf("long string.\n");
	printf("Here's another way to print a \
long string.\n");
	printf("Here's the newest way to print a "
	"long string.\n");
	/* ANSI C 的新方法*/
	return 0;
}
