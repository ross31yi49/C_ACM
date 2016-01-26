#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	char input[60];
	int many;
}scan;
int main(void)
{
	int time,i,longth,number,j,k,h;
	scan DNA[110];
	scan temp;
	scanf("%d",&time);
	for(h=0;h<time;h++)
	{
		scanf("%d %d",&longth,&number);
		for(i=0;i<number;i++)
		{
			scanf("%s",DNA[i].input);
		}
        for(i=0;i<number;i++)
        {
			for(j=0;j<longth;j++)
			{
				for(k=j;k<longth;k++)
				{
					if(DNA[i].input[j]>DNA[i].input[k])
						DNA[i].many++;
				}
			}
		}
		for(j=number;j>=0;j--)
		{
			for(i=0;i<number-1;i++)
		    {
				if(DNA[i].many>DNA[i+1].many)
				{
					temp=DNA[i];
	                DNA[i]=DNA[i+1];
	                DNA[i+1]=temp;
                }
            }
        }
        for(i=0;i<number;i++)
        {
			printf("%s\n",DNA[i].input);
		}
		if(h<time-1)
			printf("\n");
		for(i=0;i<number;i++)
			DNA[i].many=0;

	}
	return 0;
}


