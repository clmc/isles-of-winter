#include <stdio.h>
#include <math.h>

#define HEALTH playerState[0][0]
#define MAGIC  playerState[0][1]

int playerState[1][8];


int main(){

    int sensitiveCheck, playerSensitive, inputMagic;

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
	printf("But your magic remains at %d most of the time.\n\nWell, mostly. Are you magic sensitive? ", MAGIC);


	scanf("%d", &inputMagic);

	if (inputMagic == 0) {
	    playerSensitive = 0;
	    printf("You are not sensitive.\n");}
	else if (inputMagic == 1) {
	    playerSensitive = 1;
	    printf("You are magic sensitive!\n");}
	else {
	    printf("Please enter 0 if you are not magic sensitive, or 1 if you are.\n");}

return 0;
}
