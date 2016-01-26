#include <stdio.h>
#include <string.h>
int main(void)
{
	char ary[50];
	int i;
	scanf("%s",ary);
	for(i=0;i<strlen(ary);i++)
	{
		printf("%d: %c\n", i, ary[i]);
	}
	return 0;
}
