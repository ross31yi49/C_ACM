#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	int up;
	int down;
	int ans;
}DATA;
DATA game;
int main(void)
{
	int number,lie=0;
	char report[20];
	game.ans=-1;
	game.up=11;
	game.down=0;
	while(1)
	{
		scanf("%d",&number);
		getchar();
		if(number==0)
			break;
		fgets(report,sizeof(char)*20,stdin);
		report[(strlen(report)-1)]='\0';
		if((strcasecmp(report,"too high"))==0)
			game.up=number;
		else if((strcasecmp(report,"too low"))==0)
			game.down=number;
		else if((strcasecmp(report,"right on"))==0)
			game.ans=number;
		if(game.down>game.up||game.up<game.down||game.up-game.down<2||game.up==game.down||game.ans==game.up||game.down==game.ans)
			lie=1;
		if(game.ans!=-1&&lie==1)
		{
			printf("Stan is dishonest\n");
			game.ans=-1;game.up=11;game.down=0;lie=0;
		}
		else if(game.ans!=-1&&lie==0)
		{
			printf("Stan may be honest\n");
			game.ans=-1;
			game.up=11;
			game.down=0;
			lie=0;
		}
	}
	return 0;
}

