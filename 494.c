#include <stdio.h>

int main(void)
{
	char c;
	int num=0,flag=1;

	while((c=getchar())!= EOF)
	{
		if(((c>='A'&&c<='Z')||(c>='a'&&c<='z'))&&flag==1)/*C�O�_���}�Y�r��*/
		{
			num++;
			flag=0;
		}
		if(((c>='A'&&c<='Z')||(c>='a'&&c<='z'))&&flag==0)
			flag=0;
		if((c<'A'||(c>'Z'&&c<'a')||c>'z')&&flag==0)
			flag=1;		 
		if(c=='\n')
		{
			printf("%d\n",num);
			num=0;
			flag=1;
		}
}
return 0;
}
