#ifndef HIGHSCORE_H_INCLUDED
#define HIGHSCORE_H_INCLUDED
#include<stdio.h>
#include<string.h>
#include <iostream>

struct highscore // a structure to store highscore
{
	char name[100];
	int digit;
};

int i = 0;
int test;
char digits[100];
char tempname[100]; // players name temporarily saves here
int tempscore; // players score temporarily saves here
char scorestr[100]; //score becomes string and stores here
highscore H[3]; // array to show 1st 3 highscores
char playername[100]; // to take user name input
int playerscore; // takes player's score
FILE *fp;



void readScore()
{

	fp = fopen("highscore.bin", "rb"); //reads from bin file

	for (i = 0; i < 3; i++)
	{
		fread(&H[i], sizeof(H[i]), 1, fp);

	}

	fclose(fp);
}

void writeScore()
{
	fp = fopen("highscore.bin", "wb"); //writes in bin file

	for (i = 0; i < 3; i++)
	{
		fwrite(&H[i], sizeof(H[i]), 1, fp);

	}
	fclose(fp);
}

void compareScore()
{
	fp = fopen("highscore.bin", "rb"); //reads from bin file

	for (i = 0; i < 3; i++)
	{
		fread(&H[i], sizeof(H[i]), 1, fp);

	}

	if (playerscore > H[0].digit)
	{
		strcpy(H[2].name, H[1].name);
		strcpy(H[1].name, H[0].name);
		strcpy(H[0].name, playername);
		H[2].digit = H[1].digit;
		H[1].digit = H[0].digit;
		H[0].digit = playerscore;
	}

	else if (playerscore > H[1].digit)
	{
		strcpy(H[2].name, H[1].name);
		strcpy(H[1].name, playername);
		H[2].digit = H[1].digit;
		H[1].digit = playerscore;
	}
	else if (playerscore > H[2].digit)
	{
		strcpy(H[2].name, playername);
		H[2].digit = playerscore;
	}

	fclose(fp);
}
#endif 