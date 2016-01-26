#include <stdio.h>

int main(void)
{
	int input;
	int i=0,j;
	int ary[1000]={0};
	while((scanf("%d",&input))!=EOF)
	{
		i=0;
		if(input<0)
			break;
		if(input==0)
			printf("0\n");
		else
		{
			while(input>0)
			{
				ary[i]=input%3;
				input/=3;
				i++;
			}
		    for(j=i-1;j>=0;j--)
			{
				printf("%d",ary[j]);
			}
			printf("\n");
			for(j=0;j<i;j++)
			{
				ary[j]=0;
			}
		}
	}
	return 0;
}
