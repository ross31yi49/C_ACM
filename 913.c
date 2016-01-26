#include <stdio.h>
#include <math.h>

int main(void)
{
	long long int n,row=1,output,foutput;
	while((scanf("%lld",&n))!=EOF)
	{
	    
		row=(n+1)/2;
		output=((n+1)*row)-1;
		foutput=(output-2)*3;
		printf("%lld\n",foutput);

	}
	return 0;
}
