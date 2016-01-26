#include <stdio.h>

long unsigned int R( long unsigned int input)
{ 
	long unsigned int change=0;
	while(input!=0)
	{
		change=change*10+input%10;
		input=input/10;
	}
	return change;
}


int main(void)
{
	long unsigned int input,change;
	int counter,x,num;

	while((scanf("%d",&x))!=EOF)
	{
		for(counter=0;counter<x;counter++)
		{
			scanf("%ld",&input);
			for(num=0;;num++)
			{
				change=R(input);

				if(input==change)
					break;
				else
					input=input+change;
			}
			printf("%d %ld\n",num,change);
		}
	}

	return 0;
}

