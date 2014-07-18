#include <stdio.h>
#include <math.h>

#define HEALTH playerState[0][0]
#define MAGIC  playerState[0][1]

int playerState[1][8];

int main(){

	printf("Your health begins at %d\n", HEALTH);
	printf("Your magic begins at %d\n", MAGIC);

	HEALTH = 10; /* Initialize health */

	printf("From there your health defaults to %d\n", HEALTH);
	printf("But your magic remains at %d most of the time.\n\nWell, mostly. Are you magic sensitive? ", MAGIC);

	char startMage = fgetc(stdin);
	if (startMage != 'y' && startMage != 'n')
	    fprintf(stderr, "No, seriously, do you want to be a mage or not?\n");
	else if (startMage = 'y')
	    MAGIC = 5;

	printf("So, your magic is now %d.\n", MAGIC);

return 0;
}
