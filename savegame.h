#ifndef SAVEGAME_H_INCLUDED
#define SAVEGAME_H_INCLUDED

#include "highscore.h"
# include "variables.h"
#include<string.h>

struct savegame
{
	char savename[100]; //saves user name
	int savescore; //saves user's score
	int savegamestate; //saves game state
	int savenamestate; //checks that whether the name is inputted or not
	int savethorx;
	int savethory;
	int savethorlifeindex;
	int savesuperpowerindex;
	int savea;
	int saveb; //to save big frosts
	int savekeyindex;
	int savesmallfrostx1;
	int savesmallfrosty1;
	int savesmallfrostx2;
	int savesmallfrosty2;

	savegame()
	{

	}
	//save game constructor
	savegame(char *main_savename, int main_savescore, int main_savegamestate, int main_savenamestate, int main_savethorx, int main_savethory, int main_savethorlifeindex,int main_savesuperpowerindex,int main_savea,int main_saveb,int main_savekeyindex,int main_savesmallfrostx1,int main_savesmallfrosty1,int main_savesmallfrostx2,int main_savesmallfrosty2)
	{
		strcpy(savename, main_savename);
		savescore = main_savescore;
		savegamestate = main_savegamestate;
		savenamestate = main_savenamestate;
		savethorx = main_savethorx;
		savethory = main_savethory;
		savethorlifeindex = main_savethorlifeindex;
		savesuperpowerindex = main_savesuperpowerindex;
		savea = main_savea;
		saveb = main_saveb;
		savekeyindex = main_savekeyindex;
		savesmallfrostx1 = main_savesmallfrostx1;
		savesmallfrosty1 = main_savesmallfrosty1;
		savesmallfrostx2 = main_savesmallfrostx2;
		savesmallfrosty2 = main_savesmallfrosty2;
	}
};

void savethegame()
{
	savegame s(playername, playerscore, gamestate, namestate,thorx,thory,thorlifeindex,superpowerindex,a,b,keyindex,smallfrostx1, smallfrosty1, smallfrostx2,smallfrosty2);
	FILE *sg;
	sg = fopen("save game.bin", "wb"); // save game.bin file opens in write mode 

	fwrite(&s, sizeof(s), 1, sg);
	fclose(sg);
}

void loadthegame()
{
	savegame sv;
	FILE *lg;
	lg = fopen("save game.bin", "rb"); // save game.bin file opens in read mode 

	fread(&sv, sizeof(sv), 1, lg);

	//assigns value to continue the game 
	namestate = sv.savenamestate;
	gamestate = sv.savegamestate;
	playerscore = sv.savescore;
	strcpy(playername, sv.savename);
	thorx = sv.savethorx;
	thory = sv.savethory;
	thorlifeindex = sv.savethorlifeindex;
	superpowerindex = sv.savesuperpowerindex;
	a = sv.savea;
	b = sv.saveb;
	keyindex = sv.savekeyindex;
	smallfrostx1 = sv.savesmallfrostx1;
	smallfrosty1 = sv.savesmallfrosty1;
	smallfrostx2 = sv.savesmallfrostx2;
	smallfrosty2 = sv.savesmallfrosty2;
	fclose(lg);
}
#endif