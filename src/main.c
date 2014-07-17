#include <stdio.h>
#include <math.h>

#define HEALTH playerState[0][0]
#define MAGIC  playerState[0][1]

int playerState[1][8];


int main(){

    int i, playerSensitive, inputMagic;

	printf("Your health begins at %d\n", HEALTH);
	printf("Your magic begins at %d\n", MAGIC);

	HEALTH = 10; /* Initialize health */

	printf("From there your health defaults to %d\n", HEALTH);
	printf("But your magic remains at %d most of the time.\n\nWell, mostly. Are you magic sensitive? ", MAGIC);

	scanf("%d", &playerSensitive); /* Take input from player, to determine if they like mages */

	"ny"[i]; where i == 0 or i == 1;
	if (playerSensitive == "n") {
	    printf("You are not sensitive.\n");}
	else if (playerSensitive == "y") {
	    printf("You are magic sensitive!\n");}
	else {
	    printf("Please enter 0 if you are not magic sensitive, or 1 if you are.\n");}

return 0;
}
