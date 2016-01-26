#include <stdio.h>

int main(void)
{
	int i,num=0,x,reduce=0,up,down,counter;

	while((scanf("%d",&x)) != EOF)
	{
		for(i=1;num<x;i++)
		{
			num=num+i;
		}
		counter=i-1;
		reduce=num-x;
		if(counter==0)
		{
		printf("1/1");
		}
	    if(counter%2==0)
	    {
			up=counter;down=1;
			for(i=0;i<reduce;i++)
				up--;
			for(i=0;i<reduce;i++)
				down++;
	    }
	    if(counter%2==1)
	    { 
			up=1;down=counter;
			for(i=0;i<reduce;i++)
				up++;
			for(i=0;i<reduce;i++)
				down--;
		}


		printf("TERM %d IS %d/%d\n",x,up,down);

		reduce=0;
		num=0;

	}
	return 0;
}
