#include <stdio.h>

int main(void)
{
	int i,j,n=2,flag=0;
	int ary[200],ary2[200];
	int input1,input2;
	int down,up;
	ary[0]=1;
	ary[1]=2;
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
			n++;
		}
	}
	while((scanf("%d %d",&input1,&input2)) == 2)
	{
		for(i=0;ary[i]<=input1&&i<n;i++)
		{
			ary2[i]=ary[i];
		}
		if(i%2==1)
		{
			down=(i/2)-(input2-1);
			up=(i/2)+(input2-1);
		}
		else if(i%2==0)
		{
			down=(i/2)-input2;
			up=(i/2)+(input2-1);
		}
		if(down<0||up>i)
		{
			down=0;
			up=i-1;
		}
		printf("%d %d:",input1,input2);
		for(i=down;i<=up;i++)
			printf(" %d",ary2[i]);
	
	printf("\n");
	printf("\n");
	}
	return 0;
}
