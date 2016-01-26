#include <stdio.h>
#include <string.h>

int counter;
char input1[32],input2[32];

void output(int down,int up);

int main(void)
{
	while((scanf("%s %s",input1,input2))==2)
	{
		counter=-1;
		output(0,(strlen(input1)-1));
		printf("\n");
	}
	return 0;
}
void output(int down,int up)
{
	int i;
	if(down>up)
		return;
	else
	{
		counter++;
		for(i=0;input2[i]!='\0';i++)
		{
			if(input1[counter]==input2[i])
			{
				output(down,i-1);
				output(i+1,up);
				printf("%c",input2[i]);
				break;
			}
		}
	}
}
