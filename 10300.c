#include <stdio.h>
int main(void)
{
	int input1,input2,x,y,z,a,b,c,total;

	while((scanf("%d",&input1)!=EOF))
	{
		for(a=0;a<input1;a++)
		{
			scanf("%d",&input2);
			for(b=0;b<input2;b++)
			{
				scanf("%d %d %d",&x,&y,&z);
				c=x*z;
				total=total+c;
			}
			printf("%d\n",total);
			total=0;

		}

	}
	return 0;
}
