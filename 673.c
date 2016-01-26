#include <stdio.h>
#include <string.h>

int main(void)
{
	int temp=0,i,j,p,time,longth;
	char input[200],change[200],c;

	scanf("%d",&time);
	c=getchar();/*avoid fgets() scan '\n' */  
	for(i=0;i<time;i++)
	{
		memset(input,0,sizeof(char)*200);
		p=0;
		fgets(input,200,stdin);
		input[strlen(input)-1]='\0';
		longth=strlen(input);
		if(longth==0)/* input is empty */
		{
			printf("Yes\n");
			continue;
		}

		for(j=0;j<longth;j++)
		{
			if(input[j]!='('&&input[j]!=')'&&input[j]!='['&&input[j]!=']')/*input[j] haves other char */
				continue;
			if(input[j]=='('||input[j]=='[')
			{
				change[p]=input[j];
				p++;
			}
			else if(change[p-1]=='('&&input[j]==')')
			{
				p--;
			}
			else if(change[p-1]=='['&&input[j]==']')
			{
				p--;
			}
			else/* illegal because input[j] not match change[p-1] such that (] [) */
			{
				p=-1;
				break;
			}
		}

		if(p==0)
			printf("Yes\n");
		else
			printf("No\n");
     }
     return 0;
}
