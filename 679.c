#include <stdio.h>
#include <stdlib.h>
int square(int n);
int main(void)
{
	int *binary;
	int *form;
	int *two;
	int lv,times;
	int i,j;
	int number;
	int count,test,n;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d %d",&lv,&times);
		times--;
		count=lv-1;
		test=count-1;
		two=(int*)malloc(sizeof(int)*count);
		binary=(int*)malloc(sizeof(int)*count);
        number=square(count);
        form=(int*)malloc(sizeof(int)*number);
        for(i=0;i<count;i++)
        {
			two[i]=square(test);
			test--;
        }
        for(i=0;i<count;i++)
        {
			binary[i]=times%2;
			times/=2;
        }
        test=count-1;
        for(i=count-1;i>=0;i--)
        {
			number=number+binary[i]*two[test];
			test--;
        }
        printf("%d\n",number);
		
	}
	return 0;
}
int square(int n)
{
	int i;
	int ans=1;
	if(n==0)
		return 1;
	else
	{
		for(i=0;i<n;i++)
			ans=ans*2;
		return ans;
	}
}
