#include <stdio.h>
#include <string.h>
void change(char cary[],int chack);
int main(void)
{
	char cary1[105]={0};
	char cary2[105]={0};
	int ii,n,iup=0,chack=0;
	int i1long,i2long;

	memset(cary1,0,sizeof(char));
	scanf("%s",cary1);
	change(cary1,chack);
	while(1)
	{
		iup=0;
		if(strlen(cary1)==1&&cary1[0]=='0')
		{
			printf("%s\n",cary1);
			break;
		}
		memset(cary2,0,sizeof(char));/*reset*/
		scanf("%s",cary2);
		if(strlen(cary2)==1&&cary2[0]=='0')
			chack=1;
		change(cary2,chack);
		if(strlen(cary2)==1&&cary2[0]=='0')
		{
			chack=1;
			change(cary1,chack);
			printf("%s\n",cary1);
			break;
		}
		i1long=strlen(cary1);
		i2long=strlen(cary2);
		if(i1long>i2long)
			n=i1long;
		else
			n=i2long;
		for(ii=0;ii<n;ii++)
		{   
			if(cary1[ii]=='\0')
				cary1[ii]='0';
			if(cary2[ii]=='\0')
				cary2[ii]='0';
			cary1[ii]=cary1[ii]+cary2[ii]-'0';
			if(iup==1)
				cary1[ii]=cary1[ii]+1;
			if(cary1[ii]>57)
				iup=1;
			else if(cary1[ii]<=57)
				iup=0;
			if(cary1[ii]>57&&iup==1)
				cary1[ii]=cary1[ii]-10;
			if(ii==(n-1)&&iup==1)
				cary1[n]='1';
		}
	}
	return 0;
}
void change(char cary[],int chack)
{
	int n,i,j=0;
	char cary2[105];
	n=strlen(cary);
	i=n-1;
	strcpy(cary2,cary);
	for(j=0;j<n;j++)
	{
		cary[j]=cary2[i];
		i--;
	}
	if(chack==0)
	{
		for(j=n-1;;j--)
		{   
			if(cary[j]!='0')
				break;
			else if(cary[j]=='0')
				cary[j]='\0';
		}
	}
	return;
}
