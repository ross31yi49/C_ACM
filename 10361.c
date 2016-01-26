#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int time,i,test=0;
	int k=0,flog=0,j=0,h=0;
	int long1,long2;
	char ary1[100]={0},ary2[100]={0};
	char s1[100]={0},s2[100]={0},s3[100]={0},s4[100]={0},s5[100]={0},s6[100]={0},c,d;


	scanf("%d",&time);

	for(i=0;i<time;i++)
	{
		h=0;
		flog=0;
		j=0;
		c=getchar();
		if(c=='\n')
			c=getchar();
		while(c!='\n')
		{
			ary1[k]=c;
			c=getchar();
			k++;
		}
		k=0;
		d=getchar();
		while(d!='\n')
		{
			ary2[k]=d;
			d=getchar();
			k++;
		}
		long2=strlen(ary2);
		long1=strlen(ary1);
		for(k=0;k<long2;k++)
		{
			if(ary2[k]!='.')
			   { s6[h]=ary2[k];
				h++; }
		}
		for(k=0;k<long1;k++)
		{
			if(ary1[k]=='<'&&flog==0)
			{
				test=1;
				flog=1;
				j=0;
			}
			else if(ary1[k]=='>'&&flog==1)
			{   test=1;
				flog=2;
				j=0;
			}
			else if(ary1[k]=='<'&&flog==2)
			{   test=1;
				flog=3;
				j=0;
			}
			else if(ary1[k]=='>'&&flog==3)
			{   test=1;
				flog=4;
				j=0;
			}
			if(flog==0)
			{
				s1[j]=ary1[k];
				j++;
			}
			else if(flog==1&&test!=1)
			{
				s2[j]=ary1[k];
				j++;
			}
			else if(flog==2&&test!=1)
			{
				s3[j]=ary1[k];
				j++;
			}
			else if(flog==3&&test!=1)
			{
				s4[j]=ary1[k];
				j++;
			}
			else if(flog==4&&test!=1)
			{
				s5[j]=ary1[k];
				j++;
			}
			test=0;
		}
		printf("%s%s%s%s%s\n",s1,s2,s3,s4,s5);
	    printf("%s%s%s%s%s\n",s6,s4,s3,s2,s5);
		for(k=0;k<100;k++)
		{
			ary1[k]=0;
			ary2[k]=0;
			s1[k]=0;
			s2[k]=0;
			s3[k]=0;
			s4[k]=0;
			s5[k]=0;
			s6[k]=0;
		}
		k=0;

	}
	return 0;
}
