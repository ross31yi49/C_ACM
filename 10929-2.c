#include <stdio.h>
#include <string.h>
int main(void)
{
	/*ar c;*/
	/*nt ary1[500]={0};*/
	/*nt ary2[500]={0};*/
	char input[99999]={0};
	int i=0,odd=0,n,even=0,output;

	while((scanf("%s",input))==1)
	{
	    if(input[0]=='0'&&input[1]=='\0')
	    break;
		n=strlen(input);
		for(i=0;i<n;i+=2)
		{
			odd=odd+(input[i]-48);
		}
		for(i=1;i<n;i+=2)
		{
			even=even+(input[i]-48);
		}
		output=even-odd;
		if(output==0||(output%11)==0)
			printf("%s is a multiple of 11.\n",input);
		else
			printf("%s is not a multiple of 11.\n",input);

		for(i=0;i<n;i++)
			input[i]=0;
		odd=0;
		even=0;
	}
	return 0;
}
