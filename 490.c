#include <stdio.h>
#include <string.h>
int main(void)
{
	char *p;
	char input[128][128];
	int i=0,j,k,lenght,lenghtmax,inputnu,change;
	for(i=0;i<128;i++)
	{
		memset(input[i],sizeof(char),0);
	}
	lenghtmax=0;
	for( i = 0; (fgets(input[i],sizeof(char)*127,stdin))!=NULL; ++i)
	{
		p=strrchr(input[i],'\n');
		*p='\0';
		lenght=strlen(input[i]);
		if(lenght>lenghtmax)
		{
			lenghtmax=lenght;
		}
	}
    inputnu=i;
	for(j=0;j<inputnu;j++)
	{
		change=strlen(input[j]);
		if(change<lenghtmax)
		{
			for(i=change;i<lenghtmax;i++)
			{
				input[j][i]=' ';
			}
		}
			
	}
	for(j=0;j<lenghtmax;j++)
	{
		for(i=inputnu-1;i>=0;i--)
		{
			printf("%c",input[i][j]);
		}
		printf("\n");
	}
	return 0;
}
