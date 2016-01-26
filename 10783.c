#include <stdio.h>

int main(void)
{
	int input;
	int start,end,i,j,output;

	while((scanf("%d",&input))!=EOF)
	{
		for(i=0;i<input;i++)
		{
			scanf("%d %d",&start,&end);
			output=0;
		    if(start%2==0)
				start++;
			if(end%2==0)
				end--;
			for(j=start;j<=end;j+=2)
			{
				output=output+j;
			}
			printf("Case %d: %d\n",i+1,output);
		}
	}
	return 0;
}                   
