#include <stdio.h>
typedef struct{
	int input;
	int greentime;
	int redtime;
	int time;
	int color;
}RGlight;
int main(void)
{
	RGlight test[101];
	int i=0,flag=0,temp,n,j,min=18001,fmin;
	int output,hour,minate,second;
	while(1)
	{
		for(i=0;;i++)
		{
			scanf("%d",&test[i].input);
			if(test[i].input==0 && i != 0)
				break;
			if(test[i].input==0 && i == 0)
			{
				/* eat  other two zero */
				scanf("%d %d",&test[1].input,&test[2].input);
				if(test[1].input==0&&test[2].input==0)
				{
					flag=1;
					break;
				}
				else
				{
					test[0].input=test[1].input;
					test[1].input=test[2].input;
					i=1;
				}
			}

		}
		if(flag==1)
			break;
		n=i;
		fmin=18001;
		for(i=0;i<n;i++)
		{
			test[i].time=0;
			test[i].greentime=test[i].input-5;
			test[i].redtime=test[i].input+5;
		}
		for(i=0;i<n;i++)
		{
			test[i].time=test[i].time+test[i].greentime;
			test[i].color=0;
			if(test[i].time<fmin)
				fmin=test[i].time;
		}	
		for(i=fmin;i<18001;i++)
		{
			min=18001;
			temp=0;
			/*  if(i!=fmin)
				{
				for(j=0;j<n;j++)
				{
				if(test[j].color==1)
				break;
				}
				if(j==n)
				temp=1;
				}*/
			/* if(temp==1)
			   break;*/
			for(j=0;j<n;j++)
			{
				if(test[j].time<=i&&test[j].color==0)
				{
					test[j].time=test[j].time+test[j].redtime;
					test[j].color=1;
				}
				else if(test[j].time<=i&&test[j].color==1)
				{
					test[j].time=test[j].time+test[j].greentime;
					test[j].color=0;
				}
				if(test[j].time<min)
					min=test[j].time;
			}
			if(i!=fmin)
			{
				for(j=0;j<n;j++)
				{
					if(test[j].color==1)
						break;
				}
				if(j==n)
					temp=1;
			}
			if(temp==1)
				break;
			i=min-1;
		}
		output=i;
		if(output<=18000&&output>=3600)
		{
			hour=output/3600;
			minate=(output-hour*3600)/60;
			second=output%60;
			printf("%02d:%02d:%02d\n",hour,minate,second);
		}
		else if(output<3600&&output>=60)
		{
			hour=0;
			minate=output/60;
			second=output%60;
			printf("%02d:%02d:%02d\n",hour,minate,second);
		}
		else if(output<60)
		{
			hour=0;
			minate=0;
			second=output;
			printf("%02d:%02d:%02d\n",hour,minate,second);
		}
		else if(output>18000)
			printf("Signals fail to synchronise in 5 hours\n");		
	}
	return 0;
}				
