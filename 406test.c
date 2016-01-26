#include <stdio.h>
int main(void)
{
    int n=2,i,j,flag;
    int ary[200];
    ary[0]=1;
    ary[1]=2;
    printf("%d %d ",ary[0],ary[1]);
	for(i=3;i<1000;i+=2)
	{
		flag=0;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			ary[n]=i;
			printf("%d ",ary[n]);
			n++;
		}
	}
	return 0;
}
