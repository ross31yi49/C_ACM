#include <stdio.h>
#include <string.h>
void change(char *input);
int main(void)
{
	char input[200],temp[200],output[200];
	int first,last,flag,lenght,flag2;
	long long int total,cmp,base;
	int i,j,k;
	while((scanf("%d",&first))!=EOF)
	{
		j=0;flag=0;flag2=0;
		memset(input,0,(sizeof(char)*200));
		memset(output,0,(sizeof(char)*200));
		scanf("%d",&last);
		scanf("%s",temp);
		for(i=0;i<strlen(temp);i++)
		{
			if(temp[i]=='0'&&flag==0)
				continue;
			else
			{
				input[j]=temp[i];
				flag=1;
				j++;
			}
		}
		lenght=strlen(input);
		for(i=0;i<lenght;i++)
		{   
			if(input[i]<='9')
				cmp=input[i]-48;
			else if(input[i]>='A')
				cmp=input[i]-'A'+10;
			if(cmp>=first)
			{
				printf("%s is an illegal base %d number\n",temp,first);
				flag2=1;
				break;
			}
    		else if(input[i]>'F')
			{
				printf("%s is an illegal base %d number\n",temp,first);
				flag2=1;
				break;
			}
		}
		if(flag2==0)
		{
			change(input);
			total=0;
			for(i=0;i<lenght;i++)
			{
				if(input[i]<='9')
					cmp=input[i]-48;
				else if(input[i]>='A')
					cmp=input[i]-'A'+10;
				for(j=0;j<=i;j++)
				{
					if(j==0)
						base=1;
					else
						base=base*first;
				}
				total=total+cmp*base;
			}
			if(total==0)
			{
				printf("0 base %d = 0 base %d\n",first,last);
			}
			else if(last==10)
			{	
				printf("%s base %d = %lld base 10\n",temp,first,total);
			}
			else if(last!=10)
			{
				k=0;
				while(total>0)
				{
					output[k]=total%last;
					total=(total-output[k])/last;
					if(output[k]>=10)
						output[k]+=55;
					else
						output[k]+=48;
					k++;
				}
				change(output);
				printf("%s base %d = %s base %d\n",temp,first,output,last);
			}
		}
	}
	return 0;
}
void change(char* input)
{
	int j=0,i;
	int n;
	char temp[200];
	strcpy(temp,input);
	n=strlen(temp);
	for(i=n-1;i>=0;i--)
	{
		input[j]=temp[i];
		j++;
	}
}
