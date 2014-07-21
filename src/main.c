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

/* Initial questions asked to character */

#define QUESTION_1 playerQuestions[0][0]
#define QUESTION_2 playerQuestions[0][1]
#define QUESTION_3 playerQuestions[0][2]
#define QUESTION_4 playerQuestions[0][3]
#define QUESTION_5 playerQuestions[0][4]

int playerState[1][8];
int playerQuestions[1][5];

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

	printf("\n\n\n\nNow, I'm going to ask you a series of questions before you enter the isles.\n\nYou enter a marketplace, and witness a thief cutting a purse from a noble. What do you do?\n");

	QUESTION_1 = fgetc(stdin);
	if (QUESTION_1 != 1 && QUESTION_1 != 2 && QUESTION_1 != 3)
	    fprintf(stderr, "Please choose an option.\n");
	else if (QUESTION_1 = 1)
	    printf("You entered %d\n", QUESTION_1);
	else if (QUESTION_1 = 2)
	    printf("You entered %d\n", QUESTION_1);
	else if (QUESTION_1 = 3)
	    printf("You entered %d\n", QUESTION_1);

return 0;
}
