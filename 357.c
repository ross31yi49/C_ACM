#include <stdio.h>
int main(void)
{
	long long int way[30005],i,howmuch,j;
	int money[5]={1,5,10,25,50};
	for(i=0;i<30001;i++)
		way[i]=0;
	way[0]=1;
	for(i=0;i<5;i++)
	{
		for(j=money[i];j<30001;j++)
		{
			way[j]=way[j]+way[j-money[i]];
		}
	}
	while((scanf("%lld",&howmuch))==1)
	{
		if(howmuch<=4)
			printf("There is only 1 way to produce %lld cents change.\n",howmuch);
		else
			printf("There are %lld ways to produce %lld cents change.\n",way[howmuch],howmuch);
	}
	return 0;
}
