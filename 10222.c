#include <stdio.h>
int main()
{
	char c;
	while((c=getchar())!=EOF)
	{
		switch (c)
		{
			case '2': {
						  printf("`"); 
						  break;
					  }
			case '3': {
						  printf("1"); 
						  break;
					  }
			case '4': {
						  printf("2"); 
						  break;
					  }
			case '5': {
						  printf("3"); 
						  break;
					  }
			case '6': {
						  printf("4"); 
						  break;
					  }
			case '7': {
						  printf("5"); 
						  break;
					  }
			case '8': {
						  printf("6"); 
						  break;}

			case '9': {
						  printf("7"); 
						  break;
					  }
			case '0': {
						  printf("8"); 
						  break;}

			case '-': {
						  printf("9"); 
						  break;
					  }
			case '=': {
						  printf("0"); 
						  break;
					  }

			case 'e': {
						  printf("q"); 
						  break;
					  }
			case 'r': {
						  printf("w"); 
						  break;
					  }
			case 't': {
						  printf("e"); 
						  break;
					  }
			case 'y': {
						  printf("r"); 
						  break;
					  }
			case 'u': {
						  printf("t"); 
						  break;
					  }
			case 'i': {
						  printf("y"); 
						  break;
					  }
			case 'o': {
						  printf("u"); 
						  break;
					  }
			case 'p': {
						  printf("i"); 
						  break;
					  }
			case '[': {
						  printf("o"); 
						  break;
					  }
			case ']': {
						  printf("p"); 
						  break;
					  }
			case '\\': {
						   printf("["); 
						   break;
					   }
			case 'd': {
						  printf("a"); 
						  break;
					  }
			case 'f': {
						  printf("s"); 
						  break;
					  }
			case 'g': {
						  printf("d"); 
						  break;
					  }
			case 'h': {
						  printf("f"); 
						  break;
					  }
			case 'j': {
						  printf("g"); 
						  break;
					  }
			case 'k': {
						  printf("h"); 
						  break;
					  }
			case 'l': {
						  printf("j"); 
						  break;
					  }
			case ';': {
						  printf("k"); 
						  break;
					  }
			case '\'': {
						   printf("l"); 
						   break;
					   }

			case 'c': {
						  printf("z"); 
						  break;
					  }
			case 'v': {
						  printf("x"); 
						  break;
					  }
			case 'b': {
						  printf("c"); 
						  break;
					  }
			case 'n': {
						  printf("v"); 
						  break;
					  }
			case 'm': {
						  printf("b"); 
						  break;
					  }
			case ',': {
						  printf("n"); 
						  break;
					  }
			case '.': {
						  printf("m"); 
						  break;
					  }
			case '/': {
						  printf(","); 
						  break;
					  }
			case ' ': {
						  printf(" "); 
						  break;
					  }
			case '\n': {
						   printf("\n"); 
						   break;
					   }


			default: break;

		}
	}
	return 0;
}

