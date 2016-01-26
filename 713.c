#include <stdio.h>
#include <string.h>         
int main(void)
{
	int i,time,j,lengh1,lengh2,n,flag,up,p,outl;
	char input1[250],input2[250],output[250];
	scanf("%d",&time);
	for(i=0;i<time;i++)
	{
		flag=0;
		up=0;
		for(j=0;j<250;j++)
		{
			input1[j]=0;
			input2[j]=0;
			output[j]=0;
		}
		scanf("%s %s",input1,input2);
		lengh1=strlen(input1);
		lengh2=strlen(input2);
		if(lengh1>=lengh2)
		{
			n=lengh1;
			p=lengh2;
			for(j=p;j<n;j++)
			{
				input2[j]='0';
			}
		}
		else if(lengh2>lengh1)
		{
			n=lengh2;
			p=lengh1;
			for(j=p;j<n;j++)
				input1[j]='0';
		}
		for(j=0;j<=n;j++)
		{   
			if(up==1&&j==n)
			{
				output[j]='1';
				break;
			}
			else if(up==0&&j==n)
				break;

			output[j]=input1[j]+input2[j]-48;
			if(up==1&&j<n)
			{
				output[j]+=1;
				up=0;
			}
			if(output[j]>'9')
			{
				output[j]-=10;
				up=1;
			}

		}
		outl=strlen(output);
		for(j=0;j<outl;j++)
		{
			if(output[j]=='0'&&flag==0)
				continue;
			else
				flag=1;
			printf("%c",output[j]);
		}
		printf("\n");

	}
	return 0;
}
