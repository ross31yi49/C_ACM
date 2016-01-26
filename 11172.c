#include <stdio.h>

int main(void)
{
	int number,i,x,y;
	while((scanf("%d",&number))!=EOF)
	{
		for(i=0;i<number;i++)
		{
			scanf("%d %d",&x,&y);
			if(x>y)
				printf(">\n");
			else if(y>x)
				printf("<\n");
			else if(y==x)
				printf("=\n");
        }
    }
    return 0;
}
