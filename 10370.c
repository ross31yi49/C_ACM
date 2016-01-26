#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j;
	int num,flag=0;
	int people,score;
	int total=0,avar;
	float output;
	int* ary;
	while((scanf("%d",&num))!=EOF)
	{
		for(i=0;i<num;i++)
		{
			scanf("%d",&people);
            ary=(int*)malloc(sizeof(int)*people);
            for(j=0;j<people;j++)
            {
				scanf("%d",&score);
				ary[j]=score;
			}
			total=0;avar=0;flag=0;
            for(j=0;j<people;j++)
            {
				total=total+ary[j];
			}
            avar=total/people;
            for(j=0;j<people;j++)
            {
				if(ary[j]>avar)
					flag++;
			}
			output=((float)flag/(float)people)*100;
			printf("%.3f%%\n",output);
			for(j=0;j<people;j++)
			{
				ary[j]=0;
			}
		}
	}
	return 0;
}

