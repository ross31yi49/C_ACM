#include <stdio.h>
#include <string.h>
int main(void)
{
	int output;
	int j,i;
	int ary[100000];
	int n=2,flag=0;
	int boool=0,boool2=0;
	int inverout=0,change,math;
	ary[0]=0;
	ary[1]=2;
	for(i=3;i<1000000;i+=2)
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
	while((scanf("%d",&output))!=EOF)
	{
		boool=0;change=0;inverout=0;boool2=0;
		math=output;
		while(math>0)
		{
			change=math%10;
			inverout=inverout*10+change;
			math/=10;
		}
			for(i=0;i<n && (ary[i] <= output || ary[i] <= inverout);i++)
			{
				if(ary[i]==output)
					boool=1;
                if(ary[i]==inverout)
                    boool2=1;
                if(output==inverout)
					boool2=0;
				else if(boool2==1&&boool==1)
					boool=2;
			}
		if(boool==0)
			printf("%d is not prime.\n",output);
		else if(boool==1)
			printf("%d is prime.\n",output);
		else if(boool==2)
			printf("%d is emirp.\n",output);
	}
	return 0;
}
