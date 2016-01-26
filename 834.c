#include <stdio.h>
int check;
void juice(int first,int last);
int main(void)
{
	int first;
	int last;
	while((scanf("%d %d",&first,&last))==2)
	{
		check=1;
		juice(first,last);
	}
	return 0;
}
void juice(int first,int last)
{
	int ans;
	int mod;
	ans=first/last;
	mod=first%last;
	if(check==1)
	{
		printf("[%d;",ans);
		check=0;
	}
	else
		printf("%d,",ans);
	if(mod!=1&&mod!=0)
		juice(last,mod);
	else
		printf("%d]\n",last);
}	
