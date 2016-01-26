#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int total,i,j;
	int number;
	int *rocknumber;
	int ary[1000001];
	while((scanf("%d",&total))!=EOF)
	{   
		scanf("%d",&number);
		rocknumber=malloc(sizeof(int)*number);
		for(i=0;i<number;i++)
			scanf("%d",&rocknumber[i]);
		for(i=1;i<=total;i++)
		{
			for(j=0;j<number;j++)
			{
				if(i-rocknumber[j]>=0&&ary[i-rocknumber[j]]==0)
				{
					ary[i]=1;
					break;
				}
			}
		}
		if(ary[total]==1)
			printf("Stan wins\n");
		else if(ary[total]==0)
			printf("Ollie wins\n");
		for(i=0;i<=total;i++)
			ary[i]=0;
	}
	return 0;
}
