#include <stdio.h>

int main(void)
{
	float a,b,h,m;
	float output;
	while((scanf("%f:%f",&a,&b))!=EOF)
	{
	    if(a==0&&b==0)
	    break;
		h=a*30;
		m=b*5.5;

		if((h-m)>=0)
		{
			output=h-m;
			if(output>180)
				output=360-output;
		}

		if((h-m)<0)
		{
			output=m-h;
			if(output>180)
				output=360-output;
		}
		printf("%.3f\n",output);
	}

	return 0;
}
