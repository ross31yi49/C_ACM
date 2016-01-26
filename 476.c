#include <stdio.h>

int main(void)
{

	char square = '\0';
	double map[11][4];
	double x=0,y=0;
	int n=0;/*矩陣計數*/
	int i=0;/*迴圈計數*/
	int point=0;/*點計數*/
	int out=0;

	while(1)
	{
		scanf("%c",&square);
		if(square=='r')
		{
			scanf("%lf %lf %lf %lf",&map[n][0],&map[n][1],&map[n][2],&map[n][3]);
			n++;/*有幾個矩陣*/
		}
		if(square=='*')/*讀到*停止*/
		{
			break;
		}
	}
	for(point=0;;point++)/*讀入點*/
	{
		scanf("%lf %lf",&x,&y);

		if(x==9999.9&&y==9999.9)
			break;

		else
		{
			for(i=0;i<n;i++)/*把點代入矩陣*/
			{
				if(x>map[i][0]&&x<map[i][2]&&y<map[i][1]&&y>map[i][3])
				{ 
					printf("Point %d is contained in figure %d\n",point+1,i+1);/*point跟i都是從0開始*/
					out++;/*當作旗標用*/
				}
			}
			if(out==0)
				printf("Point %d is not contained in any figure\n",point+1);

			out=0;
		}
	}
	return 0;
}
