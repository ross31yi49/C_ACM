#include <stdio.h>

int main(void)
{
	int x;
	int i;

	while((scanf("%d",&x)) == 1)
	{
		if(x==2)
		{
			printf("00\n");
			printf("01\n");
			printf("81\n");
		}
		if(x==4)
		{
			for(i=0;i<10000;i++)
			{
				if((i%100+i/100)*(i%100+i/100)==i)
					printf("%04d\n",i);
			}
		}
		if(x==6)
		{
			for(i=0;i<1000000;i++)
			{
				if((i%1000+i/1000)*(i%1000+i/1000)==i)
					printf("%06d\n",i);
			}
		}
		if(x==8)
		{
			for(i=0;i<100000000;i++)
			{
				if((i%10000+i/10000)*(i%10000+i/10000)==i)
					printf("%08d\n",i);
			}
		}
	}
		return 0;
	
}	
