#include <stdio.h>

int main(void)
{

	char square = '\0';
	double map[11][4];
	double x=0,y=0;
	int n=0;/*�x�}�p��*/
	int i=0;/*�j��p��*/
	int point=0;/*�I�p��*/
	int out=0;

	while(1)
	{
		scanf("%c",&square);
		if(square=='r')
		{
			scanf("%lf %lf %lf %lf",&map[n][0],&map[n][1],&map[n][2],&map[n][3]);
			n++;/*���X�ӯx�}*/
		}
		if(square=='*')/*Ū��*����*/
		{
			break;
		}
	}
	for(point=0;;point++)/*Ū�J�I*/
	{
		scanf("%lf %lf",&x,&y);

		if(x==9999.9&&y==9999.9)
			break;

		else
		{
			for(i=0;i<n;i++)/*���I�N�J�x�}*/
			{
				if(x>map[i][0]&&x<map[i][2]&&y<map[i][1]&&y>map[i][3])
				{ 
					printf("Point %d is contained in figure %d\n",point+1,i+1);/*point��i���O�q0�}�l*/
					out++;/*��@�X�Х�*/
				}
			}
			if(out==0)
				printf("Point %d is not contained in any figure\n",point+1);

			out=0;
		}
	}
	return 0;
}
