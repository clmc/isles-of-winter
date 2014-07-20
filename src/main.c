#include <stdio.h>
#include <math.h>

/* Health, Magic, and Stats */
#define HEALTH    playerState[0][0]
#define MAGIC     playerState[0][1]
#define STRENGTH  playerState[0][2]
#define ENDURANCE playerState[0][3]
#define AGILITY   playerState[0][4]
#define INTEL     playerState[0][5]
#define WISDOM    playerState[0][6]
#define LUCK      playerState[0][7]

int playerState[1][8];

int main(){

	printf("Your health begins at %d\nYour magic begins at %d\n", HEALTH, MAGIC);

	HEALTH = 10; /* Initialize health, followed by other stats */
	STRENGTH = 3, ENDURANCE = 2, AGILITY = 2, INTEL = 1, WISDOM = 2, LUCK = 1;

	printf("From there your health defaults to %d\nBut your magic remains at %d most of the time.\n\nWell, mostly. Are you magic sensitive?", HEALTH, MAGIC);

	char startMage = fgetc(stdin); 	/* Player preference, do you want magic? */
	if (startMage != 'y' && startMage != 'n')
	    fprintf(stderr, "No, seriously, do you want to be a mage or not?\n");
	else if (startMage == 'y')
	    MAGIC = 5, STRENGTH = 1, AGILITY = 1, INTEL = 4;

	printf("\nSo, your stats are:\nStr: %d\nEnd: %d\nAgi: %d\nInt: %d\nWis: %d\nLck: %d\n", STRENGTH, ENDURANCE, AGILITY, INTEL, WISDOM, LUCK);
return 0;
}
