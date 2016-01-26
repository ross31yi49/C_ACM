#include <stdio.h>

int main(void)
{
	char c;
	int flag=0;
	char ary[200];
	int i=0,num;

	while((c=getchar()) != EOF)
	{
		if(c=='"'&&flag==0)	
		{
			ary[i]=96;
			ary[i+1]=96;
			i+=2;
			flag=1;
		}
		else if(c=='"'&&flag==1)
		{
			ary[i]=39;
			ary[i+1]=39;
			i+=2;
			flag=0;
		}
		else if(c!='"')
		{
			ary[i]=c;
			i++;
		}
		if(c=='\n')
		{
			num=i;
			for(i=0;i<num;i++)
				printf("%c",ary[i]);
			for(i=0;i<num;i++)
				ary[i]=0;
			i=0;
		}
	}
	return 0;
}
