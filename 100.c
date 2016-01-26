#include <stdio.h>

int main(void)
{
	int start;  
	int end;
	int change;
	int i;
	int x,y;
	int num=1;/*include 1*/
	unsigned int exe;
	int largest;

	while(scanf("%d %d",&start,&end)!=EOF)
	{

		x=start;
		y=end;
		if(start>end)
		{
			change=end;
			end=start;
			start=change;
		}

		for(i=start;i<=end;i++)
		{
			exe=i;
			while(exe>1)
			{
				if(exe%2==1)
					exe=exe*3+1;
				else
					exe=exe/2;

				num++;
			}
			if(num>largest)/*find the largest*/
				largest=num;

			num=1;

		}
		printf("%d %d %d\n",x,y,largest);
		largest=0;/*reset*/
	}
	return 0;

}
