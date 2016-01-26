#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
void deletezero(char* ary);
int main(void)
{
	char ary1[100],ary2[100],input[200];
	double  input1;
    double  input2;
	char count;
	int i,j,flag,k;
	while(fgets(input,sizeof(char)*200,stdin)!=NULL)
	{
		flag=0;j=0;k=0;
		input[(strlen(input)-1)]='\0';
		for(i=0;i<strlen(input);i++)/*get ' ' over*/
		{
			if(input[i]!=' '&&flag==0&&(input[i]!='+'||input[i]!='*'))
			{
				ary1[j]=input[i];
				j++;
			}
			if(input[i]=='+'||input[i]=='*')
			{
				count=input[i];
			    flag=1;
			}
			if(input[i]!=' '&&flag==1&&(input[i]!='+'||input[i]!='*'))
			{
				ary2[k]=input[i];
				k++;
			}
		}
		deletezero(ary1);
		deletezero(ary2);
		input1=atof(ary1);
        input2=atof(ary2);
	    if(input1>INT_MAX)
			printf("first number too big\n");
		if(input2>2147483647)
			printf("second number too big\n");
		if(count=='+')
		{
			if((input1+input2)<=INT_MAX)
				continue;
			if(input1>INT_MAX||input2>INT_MAX)
				printf("result too big\n");
			else if((input1+input2)>2147483647)
				printf("result too big\n");
		}
		else if(count=='*'&&(input1!=0&&input2!=0))
		{
			if(input1>INT_MAX||input2>INT_MAX)
				printf("result too big\n");
			else if((input1*input2)>INT_MAX)
				printf("result too big\n");
		}
	}
	return 0;
}
void deletezero(char* ary)
{
	char temp[200];
	int i,flag,j;
	strcpy(temp,ary);
	for(i=0;i<strlen(temp);i++)
		ary[i]=0;
	flag=0;j=0;
	for(i=0;i<strlen(temp);i++)
	{
		if(temp[i]=='0'&&flag==0)
			continue;
		if(temp[i]!='0')
		{   
			flag=1;
			ary[j]=temp[i];
			j++;
		}
		if(temp[i]=='0'&&flag==1)
		{
			flag=1;
			ary[j]=temp[i];
			j++;
		}
	}
}
