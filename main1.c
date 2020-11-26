#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void display(int gameboard[N][N])
{ 
int x;
int y;
	for( x=0; x<N; x++){
		printf("%i|", x+1);
		
		
		
		for( y=0; y<N; y++){
			
			if(gameboard[x][y]==0)
				printf("O|"); 
				
			else if(gameboard[x][y]==1)
				printf("X|");
				
			else 
				printf(" |");
				
		}
		printf("\n");
	}
}
int main(int argc, char *argv[]) {
	
	int c;
	
	printf("  1 2 3 4 5 6\n");
	printf("  ------------\n");
	
		
		
		
		
		int gameboard[N][N] = {
		{3,3,3,3,3,3},
		{3,3,3,3,3,3},
		{3,3,0,1,3,3},
		{3,3,1,0,3,3},
		{3,3,3,3,3,3},
		{3,3,3,3,3,3},
		};
		
		display(gameboard);
		
		
	
	return 0;
	}
	

	

