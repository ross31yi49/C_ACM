#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *stack,*ary,*check;
	int upline,number,x,i;
	while((scanf("%d",&number))==1)
	{
		check=(int*)malloc(sizeof(int)*number);
		ary=(int*)malloc(sizeof(int)*number);
		stack=(int*)malloc(sizeof(int)*number);
		for(i=0;i<number;i++)
			check[i]=i+1;
		if(number==0)
			break;
		while(1)
		{
			for(i=0;i<number;i++)
				scanf("%d",&ary[i]);
			if(ary[0]==0)
				break;
			x=0,upline=-1;
			for(i=0;i<number;i++)
			{
				if(check[i]!=ary[x])
				{
					upline++;
					stack[upline]=check[i];
				}
				else if(upline==0&&check[i]==ary[x])
					x++;
				else if(upline!=0&&check[i]==ary[x])
				{
                    x++;
                    if(ary[x]==stack[upline])
                    {
						upline--;
						x++;
					}
				}
				printf("x=%d,check[i]=%d,ary[x]=%d,upline=%d,stack[upline]=%d\n",x,check[i],ary[x],upline,stack[upline]);
			}
			for(i=x;i<number;i++)
			{
				printf("ary[i]=%d,stack[upline]=%d",ary[i],stack[upline]);
				if(ary[i]==stack[upline])
					upline--;
				else
					break;
				printf("upline=%d\n",upline);
			}
			if(upline==-1)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	return 0;
}
