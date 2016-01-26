#include <stdio.h>
#include <string.h>
int main(void)
{
  char c;
	int ary1[500]={0};
	int ary2[500]={0};
	int input;
	int odd=0,even=0,oddinput,eveninput;
	int i=0,j=0,n,output;

	while((scanf("%d",&input))!=EOF)
	{
        c=getchar();
        putchar(c);
		if(input==0)
			break;
		i=0;j=0;odd=0;even=0;

		oddinput=input;
		eveninput=input/10;
		while(oddinput>0)
		{
			ary1[i]=oddinput%10;
			oddinput=oddinput/100;
			i++;
		}
		while(eveninput>0)
		{
			ary2[j]=eveninput%10;
			eveninput=eveninput/100;
			j++;
		}
		for(n=0;n<i;n++)
		{
			odd=odd+ary1[n];
		}
		for(n=0;n<j;n++)
		{
			even=even+ary2[n];
		}
		output=even-odd;
		if(output==0||(output%11)==0)
			printf("ture\n");
		else
			printf("flase\n");
		for(n=0;n<i;n++)
			ary1[n]=0;
		for(n=0;n<j;n++)
			ary2[n]=0;  
	}
	return 0;
}
