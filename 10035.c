#include <stdio.h>
#include <string.h>

int main(void)
{
	 int ary1[15]={0};
	 int ary2[15]={0};
	 int input1,input2;
	int i,j=0;
	int flag=0;
	int output=0,num=0;

	while((scanf("%d",&input1))==1)
	{
		scanf("%d",&input2);		                    
		num=0;
		if(input1==0&&input2==0)
			break;
		for(i=0;i<15;i++)
		{
			ary1[i]=input1%10;
			input1/=10;			                    
		}	                    
		for(j=0;j<15;j++)
		{
			ary2[j]=input2%10;
			input2/=10;
		}
		for(i=0;i<15;i++)
		{
				output=flag+ary1[i]+ary2[i];
			if(output>=10)
			{
				num++;
				flag=1;
				output=0;
			}
			else
			{
				flag=0;
				output=0;
			}	
		}
		if(num==0)
			printf("No carry operation.\n");
		else if(num==1)
			printf("%d carry operation.\n",num);
		else if(num>1)
			printf("%d carry operations.\n",num);
	}
	return 0;
}
