#include <stdio.h>
#include <math.h>

#define HEALTH playerState[0][0]
#define MAGIC  playerState[0][1]

int playerState[1][8];


int main(){
	playerState[0][0];
	playerState[0][1];
	playerState[0][2];
	playerState[0][3];
	playerState[0][4];
	playerState[0][5];
	playerState[0][6];
	playerState[0][7];


	printf("Your health begins at %d\n", HEALTH);
	printf("Your magic begins at %d\n", MAGIC);

	HEALTH = 10;

	printf("From there your health defaults to %d\n", HEALTH);
	printf("But your magic remains at %d most of the time.\n", MAGIC);

return 0;
}
