/*
    Original Author: S. M. Shahriar Nirjon
    Last Modified by: Mohammad Saifur Rahman
    last modified: October 13, 2015
    Version: 2.0
*/




# include "iGraphics.h"
# include "highscore.h"
# include "bitmap_loader.h"
# include "savegame.h"
# include "variables.h"
# include<stdio.h>
# include<string.h>


/*
	function iDraw() is called again and again by the system.
*/
void renderbackgroud();
void renderroad();
void gchange();
void gfollow();
void tattack();
void icemove();
void power_ball_render_time();
void collusion_render_time();


void iDraw()
{
	//place your drawing codes here
	iClear();

		if (k < 0)
		{
			iShowBMP(0, 0, "bc\\disclaimer.bmp");
		}

	    if ( k > 0 && k < 500) //marvel studio
	    { 	
			if (ai < 169)
			{
				iShowBMP(0, 0, marvel[ai]);
			}
			iSetColor(1, 255, 49);
			iText(1350, 55, "PRESS (ESC) TO SKIP", GLUT_BITMAP_TIMES_ROMAN_24);
	    }
		

		if (k > 500  && k < 600)
		{
			iShowBMP(dxs, 400, "bc\\sam404.bmp"); //shows "SAM_404"
			iShowBMP(dxp, 200, "bc\\presents.bmp"); //shows "PRESENTS"
		}
		if (k > 600 && k < 750)
		{
			iShowBMP(dxt, 400, "bc\\thorname.bmp"); //shows "THOR :"
			iShowBMP(dxv, 200, "bc\\thesavior.bmp"); //shows "THE SAVIOR"
			if (k > 738)
			{
				iShowBMP(500, 0, "bc\\pressc.bmp"); //press "ESC" to continue
			}
			
		}
		
	
		if (k > 750)
		{
			if (menustate == 0)
			{
				iShowBMP(0, 0, "bc\\thunder.bmp");

				iShowBMP2(xLoki, 0, ob[0], 255); //loki menu
				iShowBMP(xThor, 0, ob[1]);//thor menu

			if (buttonstate == 0)
			{

				iShowBMP2(xLeft[0], yLeft[0], bc[0], 0); //start button
				iShowBMP2(xRight[0], yRight[0], bc[1], 0); //story button 
				iShowBMP2(xLeft[1], yLeft[1], bc[2], 0); //control button
				iShowBMP2(xRight[1], yRight[1], bc[3], 0); //high score button
				iShowBMP2(xLeft[2], yLeft[2], bc[4], 0); //credits button
				iShowBMP2(xRight[2], yRight[2], bc[5], 0); // exit button
			}
			
			if (buttonstate == 1)
			{
				iShowBMP2(760, 650, bcc[0], 0); //start button (changed)
				iShowBMP2(xRight[0], yRight[0], bc[1], 0); //story button 
				iShowBMP2(xLeft[1], yLeft[1], bc[2], 0); //control button
				iShowBMP2(xRight[1], yRight[1], bc[3], 0); //high score button
				iShowBMP2(xLeft[2], yLeft[2], bc[4], 0); //credits button
				iShowBMP2(xRight[2], yRight[2], bc[5], 0); // exit button
			}

			if (buttonstate == 2)
			{
				iShowBMP2(xLeft[0], yLeft[0], bc[0], 0); //start button 
				iShowBMP2(760, 547, bcc[1], 0); //story button (changed)
				iShowBMP2(xLeft[1], yLeft[1], bc[2], 0); //control button
				iShowBMP2(xRight[1], yRight[1], bc[3], 0); //high score button
				iShowBMP2(xLeft[2], yLeft[2], bc[4], 0); //credits button
				iShowBMP2(xRight[2], yRight[2], bc[5], 0); // exit button
			}

			if (buttonstate == 3)
			{
				iShowBMP2(xLeft[0], yLeft[0], bc[0], 0); //start button
				iShowBMP2(xRight[0], yRight[0], bc[1], 0); //story button 
				iShowBMP2(760, 444, bcc[2], 0); //control button (changed)
				iShowBMP2(xRight[1], yRight[1], bc[3], 0); //high score button
				iShowBMP2(xLeft[2], yLeft[2], bc[4], 0); //credits button
				iShowBMP2(xRight[2], yRight[2], bc[5], 0); // exit button
			}

			if (buttonstate == 4)
			{
				iShowBMP2(xLeft[0], yLeft[0], bc[0], 0); //start button
				iShowBMP2(xRight[0], yRight[0], bc[1], 0); //story button 
				iShowBMP2(xLeft[1], yLeft[1], bc[2], 0); //control button
				iShowBMP2(760, 341, bcc[3], 0); //high score button (changed)
				iShowBMP2(xLeft[2], yLeft[2], bc[4], 0); //credits button
				iShowBMP2(xRight[2], yRight[2], bc[5], 0); // exit button
			}

			if (buttonstate == 5)
			{
				iShowBMP2(xLeft[0], yLeft[0], bc[0], 0); //start button
				iShowBMP2(xRight[0], yRight[0], bc[1], 0); //story button 
				iShowBMP2(xLeft[1], yLeft[1], bc[2], 0); //control button
				iShowBMP2(xRight[1], yRight[1], bc[3], 0); //high score button
				iShowBMP2(760, 238, bcc[4], 0); //credits button (changed)
				iShowBMP2(xRight[2], yRight[2], bc[5], 0); // exit button
			}

			if (buttonstate == 6)
			{
				iShowBMP2(xLeft[0], yLeft[0], bc[0], 0); //start button
				iShowBMP2(xRight[0], yRight[0], bc[1], 0); //story button 
				iShowBMP2(xLeft[1], yLeft[1], bc[2], 0); //control button
				iShowBMP2(xRight[1], yRight[1], bc[3], 0); //high score button
				iShowBMP2(xLeft[2], yLeft[2], bc[4], 0); //credits button
				iShowBMP2(760, 135, bcc[5], 0); // exit button (changed)
			}

		}
			
			if (menustate == 1)
			{
				iShowBMP(0, 0, "bc\\thorcontrol.bmp"); //shows control menu
			}

			if (menustate == 2)
			{
				iShowBMP(0, 0, "bc\\highscoremenu.bmp"); //shows highscore menu
				iSetColor(64, 164, 247);
				iText(90, 550, H[0].name, GLUT_BITMAP_TIMES_ROMAN_24);
				iText(790, 550, itoa(H[0].digit, digits, 10), GLUT_BITMAP_TIMES_ROMAN_24);
				iText(90, 450, H[1].name, GLUT_BITMAP_TIMES_ROMAN_24);
				iText(790, 450, itoa(H[1].digit, digits, 10), GLUT_BITMAP_TIMES_ROMAN_24);
				iText(90, 350, H[2].name, GLUT_BITMAP_TIMES_ROMAN_24);
				iText(790, 350, itoa(H[2].digit, digits, 10), GLUT_BITMAP_TIMES_ROMAN_24);
			}

			if (menustate == 3)
			{
				iShowBMP(0, 0, "bc\\creditsmenu.bmp"); // credits pic
				
				if (c >= 1) //shows credits
				{
					iShowBMP(0, ycredit[0], credits[0]);
				}
				if (c >= 90)
				{
					iShowBMP(0, ycredit[1], credits[1]);
				}
				if (c >= 185)
				{
					iShowBMP(0, ycredit[2], credits[2]);
				}
				if (c >= 280)
				{
					iShowBMP(0, ycredit[3], credits[3]);
				}
				if (c >= 370)
				{
					iShowBMP(0, ycredit[4], credits[4]);
				}
				if (c >= 465)
				{
					iShowBMP(0, ycredit[5], credits[5]);
				}
				if (c >= 560)
				{
					iShowBMP(0, ycredit[6], credits[6]);
				}
				if (c >= 655)
				{
					iShowBMP(0, ycredit[7], credits[7]);
				}
				if (c >= 750)
				{
					iShowBMP(0, ycredit[8], credits[8]);
				}
				if (c > 850)
				{
					menustate = 0;
					musicstate = 2;
					c = 0;
					//sends credits to initial point
					ycredit[0] = -200;
					ycredit[1] = -200;
					ycredit[2] = -200;
					ycredit[3] = -200;
					ycredit[4] = -200;
					ycredit[5] = -200;
					ycredit[6] = -200;
					ycredit[7] = -200;
					ycredit[8] = -200;


				}
			}

			if (menustate == 4) //shows story
			{
		
				if (storystate == 0)
				{
					iShowBMP(0, 0, story1[si1]);
				}
				
				if (storystate == 1)
				{
					iShowBMP(0, 0, story2[si1]);
				}

				if (storystate == 2)
				{
					iShowBMP(0, 0, story3[si1]);
				}

				if (storystate == 3)
				{
					iShowBMP(0, 0, story4[si1]);
				}

				if (storystate == 4)
				{
					iShowBMP(0, 0, story5[si1]);
				}

				if (storystate == 5)
				{
					iShowBMP(0, 0, story61[si1]);
				}

				if (storystate == 6)
				{
					iShowBMP(0, 0, story62[si1]);
				}

				if (storystate == 7)
				{
					iShowBMP(0, 0, story63[si1]);
				}

				if (storystate == 8)
				{
					iShowBMP(0, 0, story64[si1]);
				}

				if (storystate == 9)
				{
					iShowBMP(0, 0, story7[si1]);
				}

				if (storystate == 10)
				{
					iShowBMP(0, 0, story8[si1]);
				}

				if (storystate == 11)
				{
					iShowBMP(0, 0, story9[si1]);
				}

				if (storystate == 12)
				{
					iShowBMP(0, 0, story0[si1]);
				}

				if (storystate == 13)
				{
					iShowBMP(0, 0, "bc\\savejane.bmp");
				}

				iSetColor(1, 255, 49);
				iText(1350, 55, "PRESS (ESC) TO SKIP", GLUT_BITMAP_TIMES_ROMAN_24);
			
			}

			if (menustate == 5) //starts game
			{
				if (gamestate == 0)
				{
					iShowBMP(0, 0, newcon[0]);
				
					if (buttonstate == 9)
					{
						iShowBMP2(190, 490, newcon[1], 0); // new game
						iShowBMP2(190, 290, newcon[3], 0); // continue
					}
					
					if (buttonstate == 7)
					{
						iShowBMP2(190, 490, newcon[2], 0); // new game (changed)
						iShowBMP2(190, 290, newcon[3], 0); // continue
					}

					if (buttonstate == 8)
					{
						iShowBMP2(190, 490, newcon[1], 0); // new game
						iShowBMP2(190, 290, newcon[4], 0); // continue (changed)
					}
				}
				if (gamestate == 1)
				{
					iSetColor(255, 255, 255);
					if (namestate == 1)
					{
						iShowBMP(0, 0, "bc\\namein.bmp");
						iText(220, 350, playername, GLUT_BITMAP_TIMES_ROMAN_24); //input name
						
						
					}

					if (namestate == 2)
					{
						// this is to show loading icon
						
						if (load < 455)
						{
							iShowBMP(0, 0, "bc\\loadingbackground1.bmp");
							if (load1 < 91)
							{

								iShowBMP(1243, 70, loading[load1]);
								load1++;
							}
							if (load1 == 91)
							{
								load1 = 0;
							}
							load++;
						}
						if (load == 455)
						{
							initializer(); // sets every value to initial position
							namestate = 3;
						}
						// end of loading icon

					}


					if (namestate == 3) //execution of gameplay starts here
					{
						icetimer++; //to increase the value of the timer

						iShowBMP(0, 0, "bc\\background1\\background1.bmp");
						for (int bi = 0; bi < 100; bi++)
						{
							iShowBMP(upbackground[bi].backx, upbackground[bi].backy, backgroundup[bi]); //renders background
						}

						iShowBMP2(50, 750, thorlife[thorlifeindex], 255); //shows thor's lifebar
						iShowBMP2(50, 650, superpower[superpowerindex], 255); //shows super powerbar
						iShowBMP2(455, 670, "bc\\thunderbolt.bmp", 0); //shows thunder icon

						if (thorlifeindex == 18)
						{
							thorlifeindex = 0; //change the bar to initial position
							gamestate = 4; // calls GAME OVER
						}

						iShowBMP(0, 0, "bc\\backgroundroad\\backgroundroad.bmp");
						for (int ci = 0; ci < 50; ci++)
						{
							iShowBMP(road[ci].roadx, road[ci].roady, backgroundroad[ci]); //renders road
						}

						if ((boxplacement == 0 || boxplacement == 1 || boxplacement == 2 || boxplacement == 3 || boxplacement == 4) && cubes[boxplacement].cracked)
						{
							iShowBMP2(boxx + 25, boxy + 20, keybox[boxindex], 0); // shows the key box
							iscracked = true;	
						}

						if (keyindex == 0)
						{
							iShowBMP2(keyx, keyy, key[0], 0); //shosws the key 1 icon
						}

						if (keyindex == 1)
						{
							iShowBMP2(keyx , keyy, key[0], 0); //shosws the key 1 icon
							iShowBMP2(keyx + 100, keyy, key[0], 0); //shosws the key 2 icon
						}

						if (keyindex == 2)
						{
							iShowBMP2(keyx, keyy, key[0], 0); //shosws the key 1 icon
							iShowBMP2(keyx + 100, keyy, key[0], 0); //shosws the key 2 icon
							iShowBMP2(keyx + 200, keyy, key[0], 0); //shosws the key 3 icon
						}

						if (keyindex == 3)
						{
							iShowBMP2(keyx, keyy, key[0], 0); //shosws the key 1 icon
							iShowBMP2(keyx + 100, keyy, key[0], 0); //shosws the key 2 icon
							iShowBMP2(keyx + 200, keyy, key[0], 0); //shosws the key 3 icon
							iShowBMP2(keyx + 300, keyy, key[0], 0); //shosws the keys 4 icon
						}

						if (icetimer == 200) //this is to move the icecubes
						{
							if (keyindex == 3)
							{
								doorishere = true;
							}
							else
							{
								icemoving = true;
							}
						}

						if (doorishere)
						{
							iShowBMP2(doorx, doory, door[doorindex], 0);
						}

						if (isdoorvisible)
						{
							standing = false;
							thorx += 20; // when door is seen thor moves autometically
							if (thory > 100)
							{
								thory -= 10;
							}
							vanish = true;
							thormoving = 1;
							thorindex++;

							//it takes everything to initial position when level is switched
							if (thorx > 1700 && gamestate == 1)
							{
								gamestate = 5; // calls level 2
								load = 0;
								load1 = 0;
								namestate = 0;
								icetimer = 0;
								doorishere = false;

							}

							if (thorindex > 10)
							{
								thorindex = 0;
							}

							if (thorx + 400 >= doorx)
							{
								isdooropen = true;
							}
						}

						for (int ie = 0; ie < 5; ie++)
						{
							iShowBMP2(cubes[ie].icex, cubes[ie].icey, icecubes[cubes[ie].icestateindex], 0); //shows ice cubes
						}
						

						if (!flag)
						{
							tattack(); // thor is attaking with hammer
							
							if (hitting)
							{
								iShowBMP2(a, b, frost_giant_er_dour[index], 0); //while thor is attacking the giant is stopped
							}

							if (hitting1)
							{
								iShowBMP2(smallfrostx1, smallfrosty1, smallfrostMove[0], 0); //while thor is attacking the giant is stopped
							}

							if (hitting2)
							{
								iShowBMP2(smallfrostx2, smallfrosty2, smallfrostMove[0], 0); //while thor is attacking the giant is stopped
							}
						}
						else
						{

							if (!standing)
							{
								if (thormoving == 1)
								{
									iShowBMP2(thorx, thory, thormove[thorindex], 0);
								}
								if (thormoving == 2)
								{
									iShowBMP2(thorx, thory, thormovereverse[thorindex], 0);
								}
								standcounter++;
								if (standcounter > 3)
								{
									standcounter = 0;
									thorindex = 0;
									standing = true;
								}
							}
							else
							{
								if (thormoving == 1)
								{
									iShowBMP2(thorx, thory, thorstand[0], 0);
								}
								if (thormoving == 2)
								{
									iShowBMP2(thorx, thory, thorstand[1], 0);
								}
							}
						}

						if (!smallflag1)
						{
							iShowBMP2(smallfrostx1, smallfrosty1, smallfrostMove[smallmoveindex1], 0); //to move frost giant 1

							if (smallmoveindex1 == 3)
							{
								smallmoveindex1 = 0;
							}

							else
							{
								smallmoveindex1++;
							}
						}
						
						if (!smallflag2)
						{
							iShowBMP2(smallfrostx2, smallfrosty2, smallfrostMove[smallmoveindex2], 0);  //to move frost giant 2

							if (smallmoveindex2 == 3)
							{
								smallmoveindex2 = 0;
							}

							else
							{
								smallmoveindex2++;
							}
						}

						if (flag1 == 0)
						{

							iShowBMP2(a, b, frost_giant_er_dour[index], 0); //to move frost giant

							if (index == 3)
								index = 0;
							else
								index++;
						}

						if (smallflag1 && !hitting1 && !iscubesvisible)
						{
							iShowBMP2(smallfrostx1, smallfrosty1, smallfrosthit[smallhitindex1], 0);
							if (smallhitindex1 >= 3)
							{
							
								if (thorlifeindex <= 18)
								{
									thorlifeindex++;
									
								}
								else
								{
									thorlifeindex += 0;
								}

								smallhitindex1 = 0;
							}

							else
							{
								smallhitindex1++;
							}
						}

						if (smallflag2 && !hitting2 && !iscubesvisible)
						{
							iShowBMP2(smallfrostx2, smallfrosty2, smallfrosthit[smallhitindex2], 0);
							if (smallhitindex2 >= 3)
							{
								if (thorlifeindex <= 18)
								{
									thorlifeindex++;

								}
								else
								{
									thorlifeindex += 0;
								}

								smallhitindex2 = 0;
							}

							else
							{
								smallhitindex2++;
							}
						}

						if (flag1 == 1 && !hitting && !iscubesvisible)
						{
							iShowBMP2(a, b, frost_attack[index1], 0); //to attack thor
							if (index1 >= 3)
							{
								if (thorlifeindex <= 18)
								{
									thorlifeindex++;

								}
								else
								{
									thorlifeindex += 0;
								}

								index1 = 0;
							}

							else
								index1++;

						}

						iText(850, 870, "SCORE :", GLUT_BITMAP_TIMES_ROMAN_24);
						iShowBMP2(840, 820, "bc\\scorebox.bmp", 0); // to show scorebox
						iText(860, 833, itoa(playerscore, scorestr, 10), GLUT_BITMAP_TIMES_ROMAN_24); // displays score
					}
				}

				if (gamestate == 2)
				{
					loadthegame(); // calls load game
				}

				if (gamestate == 3) // the super power mode
				{

					if (namestate == 3)
					{
						for (int ci = 0; ci < 50; ci++)
						{
							iShowBMP(road[ci].roadx, road[ci].roady, backgroundroad[ci]);
						}
					}

					if (namestate == 4)
					{
						for (int ci = 0; ci < 50; ci++)
						{
							iShowBMP(road[ci].roadx2, road[ci].roady2, backgroundroad2[ci]);
						}
					}

					if (namestate == 6)
					{
						iShowBMP(0, 0, "bc\\lokilevel\\roadbgfinal1.bmp");
					}

					if (thundercounter < 21)
					{
						if (gamestate != 6)
						{
							iShowBMP2(smallfrostx1, smallfrosty1, smallfrostMove[0], 0); //stops giant 1 while the super power is coming
							iShowBMP2(smallfrostx2, smallfrosty2, smallfrostMove[0], 0); //stops giant 2 while the super power is coming
							iShowBMP2(a, b, frost_giant_er_dour[0], 0); //stops giant while the super power is coming
							iShowBMP2(thorx, thory, thunderpower[thundercharindex], 0); //thor's action super power
							iShowBMP2(0, 0, enemythunder[thorthunderindex], 0); // shows the thunder
						}

						else
						{
							iShowBMP2(thorx, thory, thunderpower[thundercharindex], 0); //thor's action super power
							iShowBMP2(0, 0, enemythunder[thorthunderindex], 0); // shows the thunder
						}
						

					}
					if (thundercounter > 21)
					{
						if (namestate == 3)
						{
							for (int ci = 0; ci < 50; ci++)
							{
								iShowBMP(road[ci].roadx, road[ci].roady, backgroundroad[ci]);
								vanish = true;
								vanish1 = true;
								vanish2 = true;
							}
						}
						
						if (namestate == 4)
						{
							for (int ci = 0; ci < 50; ci++)
							{
								iShowBMP(road[ci].roadx2, road[ci].roady2, backgroundroad2[ci]);
								vanish = true;
								vanish1 = true;
								vanish2 = true;
							}
						}

						if (namestate == 6)
						{
							iShowBMP(0, 0, "bc\\lokilevel\\roadbgfinal1.bmp");
						}
						
						iShowBMP2(0, 0, thorthunder[thorthunderindex], 0); // shows the final thunder
						iShowBMP2(thorx, thory, thunderpower[thundercharindex], 0); //thor's action super power
						
					}
					
					
				}

				if (gamestate == 4) //to show GAME OVER
				{

					iShowBMP(0, 0, gameover[gameoverindex]);

					if (gameoverindex == 12)
					{
						iSetColor(255, 255, 255);
						iText(570, 300, "Thank You for Playing", GLUT_BITMAP_TIMES_ROMAN_24);
						iText(850, 300, playername, GLUT_BITMAP_TIMES_ROMAN_24);
						iText(570, 250, "Your Score is ", GLUT_BITMAP_TIMES_ROMAN_24);
						iText(770, 250, scorestr, GLUT_BITMAP_TIMES_ROMAN_24);

						readScore(); // to scan the highscore.bin file and compare it

						if (playerscore > H[0].digit || playerscore > H[1].digit || playerscore > H[2].digit)
						{
							test = 1;
						}

						if (test == 1)
						{
							iText(570, 200, "CONGRATULATIONS !! YOU ARE IN OUR LEADER BOARD !! ", GLUT_BITMAP_TIMES_ROMAN_24);

						}
						else
						{
							iText(570, 200, "BETTER LUCK NEXT TIME ", GLUT_BITMAP_TIMES_ROMAN_24);
						}
						
					}	
				}

				if (gamestate == 5)
				{
					// this is to show loading 2 icon

					if (load < 455)
					{
						iShowBMP(0, 0, "bc\\loadingbackground2.bmp"); //this loading screen will be changed
						if (load1 < 91)
						{

							iShowBMP(1243, 70, loading[load1]);
							load1++;
						}
						if (load1 == 91)
						{
							load1 = 0;
						}
						load++;
						thorx = 100;
						thory = 100;
						isdooropen = false;
						isdoorvisible = false;
						doorindex = 0;
					}
					if (load == 455)
					{
						namestate = 4;
						
					}
					// end of loading 2 icon

					if (namestate == 4) //execution of level 2 starts from here
					{
						icetimer++; //to increase the value of the timer

						iShowBMP(0, 0, "bc\\background2\\background1.bmp");
						for (int bi = 0; bi < 100; bi++)
						{
							iShowBMP(upbackground[bi].backx2, upbackground[bi].backy2, backgroundup2[bi]); //renders background 2
						}

						iShowBMP2(50, 750, thorlife[thorlifeindex], 255); //shows thor's lifebar
						iShowBMP2(50, 650, superpower[superpowerindex], 255); //shows super powerbar
						iShowBMP2(455, 670, "bc\\thunderbolt.bmp", 0); //shows thunder icon

						if (thorlifeindex == 18)
						{
							thorlifeindex = 0; //change the bar to initial position
							gamestate = 4; // calls GAME OVER
						}

						iShowBMP(0, 0, "bc\\backgroundroad2\\backgroundroad.bmp");
						for (int ci = 0; ci < 50; ci++)
						{
							iShowBMP(road[ci].roadx2, road[ci].roady2, backgroundroad2[ci]); //renders road 2
						}

						if ((boxplacement == 0 || boxplacement == 1 || boxplacement == 2 || boxplacement == 3 || boxplacement == 4) && cubes[boxplacement].cracked)
						{
							iShowBMP2(boxx + 25, boxy + 20, keybox[boxindex], 0); // shows the key box
							iscracked = true;
						}

						if (keyindex == 0)
						{
							iShowBMP2(keyx, keyy, key[0], 0); //shosws the key 1 icon
						}

						if (keyindex == 1)
						{
							iShowBMP2(keyx, keyy, key[0], 0); //shosws the key 1 icon
							iShowBMP2(keyx + 100, keyy, key[0], 0); //shosws the key 2 icon
						}

						if (keyindex == 2)
						{
							iShowBMP2(keyx, keyy, key[0], 0); //shosws the key 1 icon
							iShowBMP2(keyx + 100, keyy, key[0], 0); //shosws the key 2 icon
							iShowBMP2(keyx + 200, keyy, key[0], 0); //shosws the key 3 icon
						}

						if (keyindex == 3)
						{
							iShowBMP2(keyx, keyy, key[0], 0); //shosws the key 1 icon
							iShowBMP2(keyx + 100, keyy, key[0], 0); //shosws the key 2 icon
							iShowBMP2(keyx + 200, keyy, key[0], 0); //shosws the key 3 icon
							iShowBMP2(keyx + 300, keyy, key[0], 0); //shosws the keys 4 icon
						}

						if (icetimer == 200) //this is to move the icecubes
						{
							if (keyindex == 3)
							{
								doorishere = true;
							}
							else
							{
								icemoving = true;
							}
						}

						if (doorishere)
						{
							iShowBMP2(doorx, doory, door[doorindex], 0);
						}

						if (isdoorvisible)
						{
							standing = false;
							thorx += 20; // when door is seen thor moves autometically
							if (thory > 100)
							{
								thory -= 10;
							}
							vanish = true;
							thormoving = 1;
							thorindex++;

							//it takes everything to initial position when level is switched
							if (thorx > 1700 && gamestate == 5)
							{
								gamestate = 6; // calls level 3
								load = 0;
								load1 = 0;
								namestate = 0;
								icetimer = 0;
								doorishere = false;

							}

							if (thorindex > 10)
							{
								thorindex = 0;
							}

							if (thorx + 400 >= doorx)
							{
								isdooropen = true;
							}
						}

						for (int ie = 0; ie < 5; ie++)
						{
							iShowBMP2(cubes[ie].icex, cubes[ie].icey, icecubes[cubes[ie].icestateindex], 0); //shows ice cubes
						}


						if (!flag)
						{
							tattack(); // thor is attaking with hammer

							if (hitting)
							{
								iShowBMP2(a, b, frost_giant_er_dour[index], 0); //while thor is attacking the giant is stopped
							}

							if (hitting1)
							{
								iShowBMP2(smallfrostx1, smallfrosty1, smallfrostMove[0], 0); //while thor is attacking the giant is stopped
							}

							if (hitting2)
							{
								iShowBMP2(smallfrostx2, smallfrosty2, smallfrostMove[0], 0); //while thor is attacking the giant is stopped
							}
						}
						else
						{

							if (!standing)
							{
								if (thormoving == 1)
								{
									iShowBMP2(thorx, thory, thormove[thorindex], 0);
								}
								if (thormoving == 2)
								{
									iShowBMP2(thorx, thory, thormovereverse[thorindex], 0);
								}
								standcounter++;
								if (standcounter > 3)
								{
									standcounter = 0;
									thorindex = 0;
									standing = true;
								}
							}
							else
							{
								if (thormoving == 1)
								{
									iShowBMP2(thorx, thory, thorstand[0], 0);
								}
								if (thormoving == 2)
								{
									iShowBMP2(thorx, thory, thorstand[1], 0);
								}
							}
						}

						if (!smallflag1)
						{
							iShowBMP2(smallfrostx1, smallfrosty1, smallfrostMove[smallmoveindex1], 0); //to move frost giant 1

							if (smallmoveindex1 == 3)
							{
								smallmoveindex1 = 0;
							}

							else
							{
								smallmoveindex1++;
							}
						}

						if (!smallflag2)
						{
							iShowBMP2(smallfrostx2, smallfrosty2, smallfrostMove[smallmoveindex2], 0);  //to move frost giant 2

							if (smallmoveindex2 == 3)
							{
								smallmoveindex2 = 0;
							}

							else
							{
								smallmoveindex2++;
							}
						}

						if (smallflag1 && !hitting1 && !iscubesvisible)
						{
							iShowBMP2(smallfrostx1, smallfrosty1, smallfrosthit[smallhitindex1], 0);
							if (smallhitindex1 == 3)
							{

								if (thorlifeindex <= 18)
								{
									thorlifeindex++;

								}
								else
								{
									thorlifeindex += 0;
								}

								smallhitindex1 = 0;
							}

							else
							{
								smallhitindex1++;
							}
						}

						if (smallflag2 && !hitting2 && !iscubesvisible)
						{
							iShowBMP2(smallfrostx2, smallfrosty2, smallfrosthit[smallhitindex2], 0);
							if (smallhitindex2 == 3)
							{
								if (thorlifeindex <= 18)
								{
									thorlifeindex++;

								}
								else
								{
									thorlifeindex += 0;
								}

								smallhitindex2 = 0;
							}

							else
							{
								smallhitindex2++;
							}
						}

						if (flag1 == 0)
						{
							iShowBMP2(a, b, frost_giant_er_dour[index], 0); //to move frost giant
							if (index == 3)
								index = 0;
							else
								index++;

						}
						if (flag1 == 1 && !hitting && !iscubesvisible)
						{
							iShowBMP2(a, b, frost_attack[index1], 0); //to attack thor
							if (index1 == 3)
							{
								thorlifeindex++; //after every hit thor's life decreases by this
								index1 = 0;
							}

							else
								index1++;

						}

						iText(850, 870, "SCORE :", GLUT_BITMAP_TIMES_ROMAN_24);
						iShowBMP2(840, 820, "bc\\scorebox.bmp", 0); // to show scorebox
						iText(860, 833, itoa(playerscore, scorestr, 10), GLUT_BITMAP_TIMES_ROMAN_24); // displays score

					}
				}

				if (gamestate == 6)
				{

					// this is to show loading 2 icon

					if (load < 455)
					{
						iShowBMP(0, 0, "bc\\loadingbackground3.bmp"); //this loading screen will be changed
						if (load1 < 91)
						{

							iShowBMP(1243, 70, loading[load1]);
							load1++;
						}
						if (load1 == 91)
						{
							load1 = 0;
						}
						load++;
						thorx = 100;
						thory = 100;
						isdooropen = false;
						isdoorvisible = false;
						doorindex = 0;
					}
					if (load == 455)
					{
						namestate = 6;

					}
					// end of loading 2 icon

					if (namestate == 6)
					{
						//loki lvl;
						iShowBMP(0, 0, "bc\\lokilevel\\lokibackground.bmp");
						iShowBMP(0, 0, "bc\\lokilevel\\roadbgfinal1.bmp");
						iShowBMP2(50, 750, thorlife[thorlifeindex], 255); //shows thor's lifebar
						iShowBMP2(1250, 750, lokilife[lokilifeindex], 255); //shows loki's lifebar
						iShowBMP2(50, 650, superpower[superpowerindex], 255); //shows super powerbar
						iShowBMP2(455, 670, "bc\\thunderbolt.bmp", 0); //shows thunder icon

						loki_fao_fao++;
						if (loki_fao_fao == 75)
							loki_fao_fao = 0;


						{
							if (hammer_throw)
							{
								iShowBMP2(thorx, thory, "bc\\hammer_throw.bmp", 0);
								if (hammer_in_my_hand)
									hammer_throw = false;

							}

							if (!standing && hammer_in_my_hand)
							{
								if (thormoving == 1)
								{
									iShowBMP2(thorx, thory, thormove[thorindex], 0);
								}
								if (thormoving == 2)
								{
									iShowBMP2(thorx, thory, thormovereverse[thorindex], 0);
								}
								standcounter++;
								if (standcounter > 3)
								{
									standcounter = 0;
									thorindex = 0;
									standing = true;
								}
							}
							else
							{
								iShowBMP2(thorx, thory, "bc\\hammer_throw.bmp", 0);
								/*if (thormoving == 1)
								{
								iShowBMP2(thorx, thory, thorstand[0], 0);
								}
								if (thormoving == 2)
								{
								iShowBMP2(thorx, thory, thorstand[1], 0);
								}*/
							}
						}
						iSetColor(0, 255, 0);
						//iLine(0, 300, 20000, 300);
						//iText(hammer_x, hammer_y, "H", GLUT_BITMAP_TIMES_ROMAN_24);
						if (h == "hammer_going" && hammer_x >= thorx + 15)
							iShowBMP2(hammer_x, hammer_y, "bc\\hammer\\hammer_going.bmp", 0);
						if (h == "hammer_coming" && hammer_x >= thorx + 15)
							iShowBMP2(hammer_x, hammer_y, "bc\\hammer\\hammer.bmp", 0);
						if (hammer)
						{
							hammer_x += 75; // hammer gooing;

							if (hammer_x >= 1600)
							{
								hammer = false;
							}
							else {
								h = "hammer_going";
							}
							if (hammer_x != thorx)
							{
								hammer_in_my_hand = false;
							}

						}
						if (!hammer)
						{
							h = "hammer_coming";
							if (hammer_x == thorx)
							{
								hammer_in_my_hand = true;
							}
							if (hammer_x > thorx)
							{
								hammer_x -= 40;
							}
							if (hammer_x < thorx)
							{
								hammer_x = thorx;
							}

							else
							{
								//ekhan e frost giant move korbe na ekhan e ekta flag raikha hit kortese oi function call kora jay?;
							}
							hammer_y = thory + 30;

						}

						if (hammer_in_my_hand)
						{
							hammer_x = thorx;
						}

						//printf("%d\n", hammer_in_my_hand);
						loki_r_position_change_hoar_jonno_time++; //counter;


						//printf("%d\n\n\n", loki_r_position_change_hoar_jonno_time);

						if (!illusion_break)
						{
							//printf("%d\n\n", illusion_break);
							if (loki_r_position_change_hoar_jonno_time % 40 == 0)
							{
								loki_p_x = 1300 + rand() % 300;
								loki_p_y = 10 + rand() % 230;
								if (loki_r_position_change_hoar_jonno_time % 120 == 0)
									ekbarhit = false;

								if (loki_has_created_his_1st_illusion = true && loki_r_position_change_hoar_jonno_time % 120 == 0)
								{
									//ekbarhit = false;
									loli = true;
									kub_tes = false;
									api_nice_lagsa = false;
									anonymus = rand() % 5;
									loki_power_x = nokol_loki_x[anonymus];
									loki_power_y = nokol_loki_y[anonymus];
									pic_render_x = nokol_loki_x[anonymus];
									pic_render_y = nokol_loki_y[anonymus];
								}
								else if (loki_r_position_change_hoar_jonno_time % 60 == 0)
								{
									//ekbarhit = true;
									loli = true;
									kub_tes = false;
									api_nice_lagsa = false;
									loki_power_x = loki_p_x; // lokipower;
									loki_power_y = loki_p_y; //loki power;
									pic_render_x = nokol_loki_x[anonymus];
									pic_render_y = nokol_loki_y[anonymus];

								}

							}
							//printf("%d", ekbarhit);
							power_ball_render_time();
							if (collusion_render)
							{
								collusion_render_time();
							}

							loki_power_x -= 40;
							iShowBMP2(loki_power_x, loki_power_y, powerball[powerballindex], 0);


							lol -= 40;
							loki_power_x_new1 = lol;
							loki_power_x_new2 = lol;

							if (loki_power_x <= 500)
							{
								if (kub_tes)
									loki_power_x_new1 = -5000;
								if (api_nice_lagsa)
									loki_power_x_new2 = -5000;
								iShowBMP2(loki_power_x_new1, loki_power_y + 60, powerball[powerballindex], 0);
								iShowBMP2(loki_power_x_new2, loki_power_y - 60, powerball[powerballindex], 0);
							}

							if (loki_has_created_his_1st_illusion && !loki_power_marse)
							{

								//iText(pic_render_x, pic_render_y, "FL", 0);
								iShowBMP2(pic_render_x, pic_render_y - 10, loki_throw[loki_throw_index], 0);
								loki_power_marse = true;
							}

							loki_throw_index++;
							if (loki_throw_index >= 9)
							{
								loki_throw_index = 0;
								loki_power_marse = false;
							}
							//iShowBMP2(collusion_x, collusion_y, collusion_pic[collusion_counter], 0);
							//iShowBMP2(loki_power_x, loki_power_y + 10, powerball[powerballindex], 0);

							int x_distance = (loki_power_x - hammer_x) * (loki_power_x - hammer_x);
							int x_distance_new1 = (loki_power_x_new1 - hammer_x) * (loki_power_x_new1 - hammer_x);
							int x_distance_new2 = (loki_power_x_new2 - hammer_x) * (loki_power_x_new2 - hammer_x);
							int y_distance = (loki_power_y - hammer_y) * (loki_power_y - hammer_y);
							int y_distance_new1 = (loki_power_y + 60 - hammer_y) * (loki_power_y + 60 - hammer_y);
							int y_distance_new2 = (loki_power_y - 60 - hammer_y) * (loki_power_y - 60 - hammer_y);
							double sum = x_distance + y_distance;
							double sum_new1 = x_distance_new1 + y_distance_new1;
							double sum_new2 = x_distance_new2 + y_distance_new2;



							double distance_main = sqrt(sum);
							double distance2 = sqrt(sum_new1);
							double distance3 = sqrt(sum_new2);

							if (loki_r_position_change_hoar_jonno_time % 100 == 0)
							{
								if (superpowerindex < 18 && !superclicked)
								{
									superpowerindex++;
								}

							}
							if (loki_power_x_new1 <= thorx + 143 && loki_power_y + 60 >= thory && loki_power_y + 60 <= thory + 127 && loki_power_x_new1 >= thorx + 102)
							{
								loki_power_x_new1 = -5000;
								ekbarhit = true;

							}

							if (loki_power_x <= thorx + 143 && loki_power_y >= thory && loki_power_y <= thory + 127 && loki_power_x >= thorx + 102)
							{
								loki_power_x = -5000;
								ekbarhit = true;

							}


							if (loki_power_x_new2 <= thorx + 143 && loki_power_y - 60 >= thory && loki_power_y - 60 <= thory + 127 && loki_power_x_new2 >= thorx + 102)
							{
								loki_power_x_new2 = -5000;
								ekbarhit = true;
							}

							if (ekbarhit)
							{
								printf("so\n\n\n");
								thorlifeindex++;
								if (thorlifeindex >= 18)
									gamestate = 4;
								ekbarhit = false;
								//gamestate = 4;

							}



							if (distance_main <= 25)
							{
								// distance kacha kachi hoile gayeb;
								// colusion er code hobe;
								//colusion er pic hobe booomm;
								//printf("shakib 123 ");
								//collusion_x=loki_power_x;
								//collusion_y=loki_power_y;
								collusion = true;

								if (collusion && collusion_reset)
								{
									collusion_x = loki_power_x;
									collusion_y = loki_power_y;
									collusion = false;
									collusion_reset = false;

								}
								loki_power_x = -5000;
								//loki_power_x+=2;
							}
							else
							{
								if (loli)
								{
									lol = loki_power_x;
									loli = false;

								}
								collusion_render = false;
							}


							if (distance2 <= 25)
							{
								// distance kacha kachi hoile gayeb;
								// colusion er code hobe;
								//colusion er pic hobe booomm;
								//printf("shakib 123 ");
								collusion = true;

								if (collusion && collusion_reset)
								{
									collusion_x = loki_power_x_new1;
									collusion_y = loki_power_y + 50;
									collusion = false;
									collusion_reset = false;

								}
								kub_tes = true;
								loki_power_x_new1 = -5000;
							}
							else
							{
								//kub_tes = false;
								collusion_render = false;
								if (loli)
								{
									lol = loki_power_x_new1;
									loli = false;

								}
							}

							if (distance3 <= 25)
							{
								// distance kacha kachi hoile gayeb;
								// colusion er code hobe;
								//colusion er pic hobe booomm;
								//printf("shakib 123 ");
								collusion = true;

								if (collusion && collusion_reset)
								{
									collusion_x = loki_power_x_new2;
									collusion_y = loki_power_y - 50;
									collusion = false;
									collusion_reset = false;

								}
								api_nice_lagsa = true;
								loki_power_x_new2 = -5000;
							}
							else
							{
								collusion_render = false;
								//api_nice_lagsa = false;
								if (loli)
								{
									lol = loki_power_x_new2;
									loli = false;

								}
							}
							if (loki_r_position_change_hoar_jonno_time % 20000 == 0)
							{


								//summon the samll giant;
								//lokir small giant er code;
							}

							if (loki_r_position_change_hoar_jonno_time % 600 == 0)
							{
								loki_has_created_his_1st_illusion = true;
								nokol_loki_x[0] = 1300 + rand() % 300;
								nokol_loki_y[0] = 10 + rand() % 230;

							}
							if (loki_r_position_change_hoar_jonno_time % 600 == 0)
							{
								nokol_loki_x[1] = 1300 + rand() % 300;
								nokol_loki_y[1] = 10 + rand() % 230;

							}

							if (loki_r_position_change_hoar_jonno_time % 600 == 0)
							{
								nokol_loki_x[2] = 1300 + rand() % 300;
								nokol_loki_y[2] = 10 + rand() % 230;
							}
							if (loki_r_position_change_hoar_jonno_time % 600 == 0)
							{
								nokol_loki_x[3] = 1300 + rand() % 300;
								nokol_loki_y[3] = 10 + rand() % 230;
							}
							if (loki_r_position_change_hoar_jonno_time % 600 == 0)
							{
								nokol_loki_x[4] = 1300 + rand() % 300;
								nokol_loki_y[4] = 10 + rand() % 230;
							}


							if (loki_r_position_change_hoar_jonno_time % 60 == 0)
							{
								real_loki = rand() % 5;
								fake_loki = rand() % 5;
								while (real_loki == fake_loki)
									fake_loki = rand() % 5;
							}

							iShowBMP2(nokol_loki_x[real_loki], nokol_loki_y[real_loki] - 10, loki_throw[0], 0);


							if (hammer_x >= nokol_loki_x[real_loki] && hammer_y >= nokol_loki_y[real_loki] && hammer_y <= nokol_loki_y[real_loki] + 117)
							{
								if (hammer_x >= nokol_loki_x[real_loki] + 10)
									hammer = false;
								if (h == "hammer_going")
								{
									lokilifeindex++;
									playerscore += 1000;
								}
									
								if (lokilifeindex >= 18)
								{
									nokol_loki_x[0] = -500;
									nokol_loki_x[1] = -500;
									nokol_loki_x[2] = -500;
									nokol_loki_x[3] = -500;
									nokol_loki_x[4] = -500;
									gamestate = 7;
								}
									

							}
							if (real_loki != 0)
							{
								if (!loki_power_marse)
								{
									iShowBMP2(nokol_loki_x[0], nokol_loki_y[0] - 10, loki_throw[0], 0);
								}

							}
							if (real_loki != 1)
							{
								if (!loki_power_marse)
								{
									iShowBMP2(nokol_loki_x[1], nokol_loki_y[1] - 10, loki_throw[0], 0);
								}
							}
							if (real_loki != 2)
							{
								if (!loki_power_marse)
								{
									iShowBMP2(nokol_loki_x[2], nokol_loki_y[2] - 10, loki_throw[0], 0);
								}
							}
							if (real_loki != 3)
							{
								if (!loki_power_marse)
								{
									iShowBMP2(nokol_loki_x[3], nokol_loki_y[3] - 10, loki_throw[0], 0);
								}
							}
							if (real_loki != 4)
							{
								if (!loki_power_marse)
								{
									iShowBMP2(nokol_loki_x[4], nokol_loki_y[4] - 10, loki_throw[0], 0);
								}
							}


						}

						if (illusion_break)
						{
							if (loki_r_position_change_hoar_jonno_time % 100 == 0)
							{
								if (superpowerindex < 18 && !superclicked)
								{
									superpowerindex++;
								}

							}
							power_ball_render_time();
							if (collusion_render)
							{
								collusion_render_time();
							}
							//printf("%d\n", loki_r_position_change_hoar_jonno_time);
							//printf("illusion break\n\n\n");
							//printf("%d\n", illusion_break);
							if (loki_r_position_change_hoar_jonno_time % 120 == 0)
								ekbarhit = false;
							if (loki_power_x <= thorx + 143 && loki_power_y >= thory && loki_power_y <= thory + 127 && loki_power_x >= thorx + 102)
							{
								loki_power_x = -5000;
								ekbarhit = true;

							}
							if (ekbarhit)
							{
								thorlifeindex++;
								if (thorlifeindex >= 18)
									gamestate = 4;
								ekbarhit = false;
								//gamestate = 4;

							}
							//printf("%d");

							if (loki_r_position_change_hoar_jonno_time % 1000 == 0)
							{
								illusion_break = false;
							}
							iShowBMP2(nokol_loki_x[real_loki], nokol_loki_y[real_loki] - 10, loki_throw[0], 0);
							//iText(nokol_loki_x[real_loki], nokol_loki_y[real_loki], "RL", GLUT_BITMAP_TIMES_ROMAN_24);
							if (loki_r_position_change_hoar_jonno_time % 200 == 0)
							{
								loli = true;
								collusion_reset = true;
								nokol_loki_x[real_loki] = 1300 + rand() % 300;
								nokol_loki_y[real_loki] = 10 + rand() % 230;
								loki_power_x = nokol_loki_x[real_loki];
								loki_power_y = nokol_loki_y[real_loki];
							}
							loki_power_x -= 25;
							//iText(loki_power_x,loki_power_y, "LP", GLUT_BITMAP_TIMES_ROMAN_24);
							iShowBMP2(loki_power_x, loki_power_y + 10, powerball[powerballindex], 0);
							//printf("%d %d\n\n\n", collusion_x, collusion_y);
							iShowBMP2(collusion_x, collusion_y, collusion_pic[collusion_counter], 0);
							int x_distance = (loki_power_x - hammer_x) * (loki_power_x - hammer_x);
							int y_distance = (loki_power_y - hammer_y) * (loki_power_y - hammer_y);
							double sum = x_distance + y_distance;

							double distance_main = sqrt(sum);

							if (distance_main <= 30)
							{
								collusion = true;

								if (collusion && collusion_reset)
								{
									collusion_x = loki_power_x;
									collusion_y = loki_power_y;
									collusion = false;
									collusion_reset = false;

								}

								if (!hammer_in_my_hand)
									loki_power_x = -5000;
							}
							else
							{
								collusion_render = false;
								if (loli)
								{
									lol = loki_power_x;
									loli = false;

								}
							}
							if (loki_power_x <= -5000 && loki_power_x >= -5200)
							{
								collusion_render = true;

							}
							else {
								collusion_render = false;
								collusion_x = -500;
							}
							if (hammer_x >= nokol_loki_x[real_loki] && hammer_y >= nokol_loki_y[real_loki] && hammer_y <= nokol_loki_y[real_loki] + 117)
							{
								if (hammer_x >= nokol_loki_x[real_loki] + 10)
									hammer = false;
								lokilifeindex++;
								playerscore += 1000;
								if (lokilifeindex >= 18)
								{
									nokol_loki_x[0] = -500;
									nokol_loki_x[1] = -500;
									nokol_loki_x[2] = -500;
									nokol_loki_x[3] = -500;
									nokol_loki_x[4] = -500;
									gamestate = 7;

								}
								

							}


						}

						iText(850, 870, "SCORE :", GLUT_BITMAP_TIMES_ROMAN_24);
						iShowBMP2(840, 820, "bc\\scorebox.bmp", 0); // to show scorebox
						iText(860, 833, itoa(playerscore, scorestr, 10), GLUT_BITMAP_TIMES_ROMAN_24); // displays score
					}
				}

				if (gamestate == 7)
				{
					iShowBMP(0, 0, "bc\\lokilevel\\lokibackground.bmp");
					iShowBMP(0, 0, "bc\\lokilevel\\roadbgfinal1.bmp");
					iShowBMP2(thorx, thory, thormove[thorindex], 0);
					iShowBMP2(1500, 130, jane[janeindex], 0);

					if (thorx < 800)
					{
						thorx += 10;
						thorindex++;
						janeindex++;

						if (thory > 100)
						{
							thory -= 10;
						}

						if (thory < 100)
						{
							thory += 10;
						}

						if (janeindex == 3)
						{
							janeindex = 0;
						}

						if (thorindex == 11)
						{
							thorindex = 0;
						}

					}

					if (thorx >= 800 && thorx < 1400)
					{
						thorx += 10;
						thorindex++;
						if (thorindex == 11)
						{
							thorindex = 0;
						}
						janeindex = 4;

					}

					if (thorx >= 1350)
					{
						timer++;
					}

					if (timer >= 100)
					{
						iShowBMP(0, 0, "bc\\the end.bmp");

						iSetColor(255, 255, 255);
						iText(570, 300, "Thank You for Playing", GLUT_BITMAP_TIMES_ROMAN_24);
						iText(850, 300, playername, GLUT_BITMAP_TIMES_ROMAN_24);
						iText(570, 250, "Your Score is ", GLUT_BITMAP_TIMES_ROMAN_24);
						iText(770, 250, scorestr, GLUT_BITMAP_TIMES_ROMAN_24);

						readScore(); // to scan the highscore.bin file and compare it

						if (playerscore > H[0].digit || playerscore > H[1].digit || playerscore > H[2].digit)
						{
							test = 1;
						}

						if (test == 1)
						{
							iText(570, 200, "CONGRATULATIONS !! YOU ARE IN OUR LEADER BOARD !! ", GLUT_BITMAP_TIMES_ROMAN_24);

						}
						else
						{
							iText(570, 200, "BETTER LUCK NEXT TIME ", GLUT_BITMAP_TIMES_ROMAN_24);
						}

					}

				}
			}
		}
}

void power_ball_render_time()
{
	if (loki_r_position_change_hoar_jonno_time % 2 == 0)
	{
		powerballindex++;
	}
	if (powerballindex >= 7)
		powerballindex = 0;

}
void collusion_render_time()
{
	if (loki_r_position_change_hoar_jonno_time % 5 == 0)
		collusion_counter++;
	if (collusion_counter >= 90)
		collusion_counter = 0;

}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here

}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (menustate == 0 && xLeft[0] >= 760)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			//place your codes here
			if (mx > 760 && mx < 960 && my > 444 && my < 530)
			{
				menustate = 1; // calls control
			}
			if (mx > 760 && mx < 960 && my > 135 && my < 225)
			{
				exit(0); // exits 
			}
			if (mx > 760 && mx < 960 && my > 341 && my < 434)
			{
				menustate = 2; // calls high score
				writeScore(); // writes new score

			}
			if (mx > 760 && mx < 960 && my > 238 && my <331)
			{
				menustate = 3; // calls credits
				musicstate = 4;
			}
			if (mx > 760 && mx < 960 && my > 547 && my < 640)
			{
				menustate = 4; // calls story
				musicstate = 3;

			}
			if (mx > 760 && mx < 960 && my > 650 && my < 740)
			{
				menustate = 5; // starts game	
			}
		}
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (mx > 190 && mx < 390 && my > 490 && my < 580 && menustate == 5 && namestate == 0)
		{
			gamestate = 1; // enters new game
			namestate = 1;
		}
		if (mx > 190 && mx < 390 && my > 290 && my < 380 && menustate == 5 && namestate == 0)
		{
			gamestate = 2; // enters continue game
		}

		printf("%d %d\n", mx, my);

	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		
	}
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouse(int mx,int my)
{
	//place your code here
	if (mx > 760 && mx < 960 && xLeft[0] == 760 && xRight[0] == 760 && menustate == 0) //changes the button state
	{
		if (my > 650 && my < 743)
		{
			buttonstate = 1;
		}
		if (my > 547 && my < 640)
		{
			buttonstate = 2;
		}
		if (my > 444 && my < 537)
		{
			buttonstate = 3;
		}
		if (my > 341 && my < 434)
		{
			buttonstate = 4;
		}
		if (my > 238 && my < 331)
		{
			buttonstate = 5;
		}
		if (my > 135 && my < 228)
		{
			buttonstate = 6;
		}
		
	}
	else if (mx > 190 && mx < 390 && my > 490 && my < 580 && menustate == 5)
	{
		buttonstate = 7;
	}
	else if (mx > 190 && mx < 390 && my > 290 && my < 380 && menustate == 5)
	{
		buttonstate = 8;
	}
	else if (menustate == 5)
	{
		buttonstate = 9;
	}
	else
	{
		buttonstate = 0;
	}
	
	
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if(key == 27) // this is "ESC" key
	{
		//changes everything to initial position
		if (menustate == 4 || menustate == 3)
		{
			musicstate = 2;
		}
		if (menustate == 5)
		{
			savethegame();
		}

		if (k == 740) //press "ESC" to continue
		{
			con = 1;
		}

		if (k > 0 && k < 500) // to skip marvel slides
		{
			k = 500;
			musicstate = 2;
		}

		menustate = 0;
		buttonstate = 0;
		gamestate = 0;
		namestate = 0;
		storystate = 0;
		compareScore(); // to compare current player's score with the leader board
		writeScore();
			
		
		
		
	}
	
	if (namestate == 1)
	{
		
		playername[ii] = key;//key being input
		ii++;//length increase for string
		
	}
	
	if (key == '\r') // hit enter starts game
	{
		namestate = 2;

	}
	
	if (key == 'm' && gamestate == 6)
	{
		if (hammer_in_my_hand)
		{
			hammer = true;
			hammer_throw = true;
		}

	}

	if (key == 'q')
	{
		gamestate = 6;
	}

	if (key == 't' && (namestate == 3 || namestate == 4 || namestate == 6))
	{
		if (superpowerindex == 18)
		{
			superpowerindex = 0;
			playerscore += 5000;
			superclicked = true; // to check the 't' button is taped
			gamestate = 3; //calls super power
			if (namestate == 6)
			{
				illusion_break = true;
				if (lokilifeindex <= 18)
				{
					lokilifeindex++; //decrease loki's life
					playerscore += 1000;
				}
			}
		}
		
	}
	if (key == 'h' && (namestate == 3 || namestate == 4))
	{
		flag = false;
		if (dx <= 100 && dy <= 100 && dx >= -100 && dy >= -100) //to hit frost giant
		{
			hitting = true;
		}

		if (ddx1 <= 100 && ddy1 <= 100 && ddx1 >= -100 && ddy1 >= -100) //to hit frost giant 1
		{
			hitting1 = true;
		}

		if (ddx2 <= 100 && ddy2 <= 100 && ddx2 >= -100 && ddy2 >= -100) //to hit frost giant 2
		{
			hitting2 = true;
		}

		if (cubes[boxplacement].cracked && iscracked)
		{
			isboxopen = true;
		}

		// to check which cube is breaked
		for (int ci = 0; ci < 50; ci++)
		{
			if ((cubes[ci].icex - thorx) <= 160 && thory >= cubes[ci].icey && thory <= cubes[ci].icey + 60)
			{
				cubes[ci].cracked = true;
			}
		}

	}
	if (key == '\b')
	{
		strcpy(playername, ""); //erase name when backspace is pressed
		ii = 0;
	}
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	//place your codes for other keys here
	
	if (key == GLUT_KEY_UP)
	{
		standing = false;
		thorindex++;
		if (thorindex > 10)
		{
			thorindex = 0;
		}
		
		// this is to make the ice cubes rigit from down
		if ((thory + 40 >= cubes[0].icey && thorx + 60 >= cubes[0].icex && thorx < cubes[0].icex + 70 && !cubes[0].cracked) || (thory + 40 >= cubes[1].icey && thorx + 60 > cubes[1].icex && thorx < cubes[1].icex + 70 && !cubes[1].cracked) || (thory + 40 >= cubes[2].icey && thorx + 60 > cubes[2].icex && thorx < cubes[2].icex + 70 && !cubes[2].cracked) || (thory + 40 >= cubes[3].icey && thorx + 60 > cubes[3].icex && thorx < cubes[3].icex + 70 && !cubes[3].cracked) || (thory + 40 >= cubes[4].icey && thorx + 60 > cubes[4].icex && thorx < cubes[4].icex + 70 && !cubes[4].cracked))
		{
			thory += 0;	
		}
		else if (thory <= 270)
		{
			thory += 5;
		}
	}

	else if (key == GLUT_KEY_DOWN)
	{
		standing = false;
		thorindex++;
		if (thorindex > 10)
		{
			thorindex = 0;
		}
		if (thory > 10)
		{
			thory -= 5;	
		}
		
	}

	else if (key == GLUT_KEY_LEFT)
	{
		standing = false;

		if (thorx >= 61)
		{
			thormoving = 2;
			thorindex++;
			if (thorindex > 10)
			{
				thorindex = 0;
			}

			// this is to make the ice cubes rigit from right
			if ((thorx <= cubes[0].icex + 30 && thory >= cubes[0].icey && thory <= cubes[0].icey + 70 && !cubes[0].cracked) || (thorx >= cubes[1].icex) && (thorx <= cubes[1].icex + 30 && thory >= cubes[1].icey && thory <= cubes[1].icey + 70 && !cubes[1].cracked) || (thorx >= cubes[2].icex) && (thorx <= cubes[2].icex + 30 && thory >= cubes[2].icey && thory <= cubes[2].icey + 70 && !cubes[2].cracked) || (thorx >= cubes[3].icex) && (thorx <= cubes[3].icex + 30 && thory >= cubes[3].icey && thory <= cubes[3].icey + 70 && !cubes[3].cracked) || (thorx >= cubes[4].icex) && (thorx <= cubes[4].icex + 30 && thory >= cubes[4].icey && thory <= cubes[4].icey + 70 && !cubes[4].cracked))
			{
				thorx -= 0;
			}
			else
			{
				thorx -= 5;
			}
			
		}
		
	}

	else if (key == GLUT_KEY_RIGHT)
	{
		standing = false;

		if (thorx >= 300)
		{
			thormoving = 1;
			thorindex++;
			
			// this is to make the ice cubes rigit from left
			if ((thorx + 80 >= cubes[0].icex && thory + 20 >= cubes[0].icey && thory < cubes[0].icey + 70 && !cubes[0].cracked) || (thorx + 80 >= cubes[1].icex && thory + 20 > cubes[1].icey && thory < cubes[1].icey + 70 && !cubes[1].cracked) || (thorx + 80 >= cubes[2].icex && thory + 20 > cubes[2].icey && thory < cubes[2].icey + 70 && !cubes[2].cracked) || (thorx + 80 >= cubes[3].icex && thory + 20 > cubes[3].icey && thory < cubes[3].icey + 70 && !cubes[3].cracked) || (thorx + 80 >= cubes[4].icex && thory + 20 > cubes[4].icey && thory < cubes[4].icey + 70 && !cubes[4].cracked))
			{
				thorx += 0;
			}
			else
			{
				if (!isdoorvisible)
				{
					renderbackgroud();
					renderroad();
				}
			}

			if (thorindex > 10)
			{
				thorindex = 0;
			}
			
		}

		if (thorx <= 300)
		{
			thormoving = 1;
			thorindex++;

			// this is to make the ice cubes rigit from left
			if ((thorx + 80 >= cubes[0].icex && thory + 20 >= cubes[0].icey && thory < cubes[0].icey + 70 && !cubes[0].cracked) || (thorx + 80 >= cubes[1].icex && thory + 20 > cubes[1].icey && thory < cubes[1].icey + 70 && !cubes[1].cracked) || (thorx + 80 >= cubes[2].icex && thory + 20 > cubes[2].icey && thory < cubes[2].icey + 70 && !cubes[2].cracked) || (thorx + 80 >= cubes[3].icex && thory + 20 > cubes[3].icey && thory < cubes[3].icey + 70 && !cubes[3].cracked) || (thorx + 80 >= cubes[4].icex && thory + 20 > cubes[4].icey && thory < cubes[4].icey + 70 && !cubes[4].cracked))
			{
				thorx += 0;
			}
			else
			{
				thorx += 5;
				renderbackgroud();
				renderroad();
			}
			
			if (thorindex > 10)
			{
				thorindex = 0;
			}
		}

		// this is to move the icecubes
		if (!stopice && (namestate == 3 || namestate == 4) && icemoving  && goice)
		{
			if ((thorx + 80 >= cubes[0].icex && thory + 20 >= cubes[0].icey && thory < cubes[0].icey + 70 && !cubes[0].cracked) || (thorx + 80 >= cubes[1].icex && thory + 20 > cubes[1].icey && thory < cubes[1].icey + 70 && !cubes[1].cracked) || (thorx + 80 >= cubes[2].icex && thory + 20 > cubes[2].icey && thory < cubes[2].icey + 70 && !cubes[2].cracked) || (thorx + 80 >= cubes[3].icex && thory + 20 > cubes[3].icey && thory < cubes[3].icey + 70 && !cubes[3].cracked) || (thorx + 80 >= cubes[4].icex && thory + 20 > cubes[4].icey && thory < cubes[4].icey + 70 && !cubes[4].cracked))
			{
				for (int vi = 0; vi < 5; vi++)
				{
					cubes[vi].icex -= 0;
				}

				boxx -= 0;
			}
			
			else
			{
				for (int vi = 0; vi < 5; vi++)
				{
					cubes[vi].icex -= 34;
				}

				boxx -= 34;

				if (cubes[0].icex < 1701)
				{
					iscubesvisible = true;
				}
			}
		}

		if (keyindex == 3 && doorishere)
		{
			if (doorx > 1600)
			{
				doorx -= 10;
				icemoving = false;
				
			}
		}
		
	}
	
}

void thorLokiMenu()
{

	if (menustate == 3)
	{
		c++;
	}
	
	if (k < 740 || k > 740) //to still GAME NAME
	{
		k++;
	}
	
	if (k == 740)
	{
		if (con == 1)
		{
			k++;
		}
	}
	if (k >= 500) //SAM_404 PRESENTS
	{
		if (dxs >= 300)
		{
			dxs -= 40;
		}
		if (dxs < 300)
		{
			dxs -= 5;
		}
		if (dxp <= 700)
		{
			dxp += 30;
		}
		if (dxp > 700)
		{
			dxp += 5;
		}
		
	}

	if (k >= 600) //THOR THE SAVIOR
	{
		if (dxt >= 300)
		{
			dxt -= 40;
		}
		if (dxt < 300 && dxt >0)
		{
			dxt -= 5;
		}
		if (dxv <= 700)
		{
			dxv += 30;
		}
		if (dxv > 700 && dxv < 900)
		{
			dxv += 5;
		}
		
	}

	if (k > 750) // THOR AND LOKI MOVE IN MENU
	{
		if (xLoki > 0)
		{
			xLoki -= 40;
		}

		if (xThor < 1020)
		{
			xThor += 30;
		}

		if (xLoki == 0)
		{
			if (xLeft[0] < 760)
			{
				xLeft[0] += 20;
				xLeft[1] += 20;
				xLeft[2] += 20;

			}

			if (xRight[0] > 760)
			{
				xRight[0] -= 20;
				xRight[1] -= 20;
				xRight[2] -= 20;
			}
		}
		
	}

	
	if (c >= 5) //shows credit
	{
		ycredit[0] += 15;
	}
	if (c >= 95)
	{
		ycredit[1] += 15;
	}
	if (c >= 190)
	{
		ycredit[2] += 15;
	}
	if (c >= 285)
	{
		ycredit[3] += 15;
	}
	if (c >= 380)
	{
		ycredit[4] += 15;
	}
	if (c >= 475)
	{
		ycredit[5] += 15;
	}
	if (c >= 570)
	{
		ycredit[6] += 15;
	}
	if (c >= 665)
	{
		ycredit[7] += 15;
	}
	if (c >= 760)
	{
		ycredit[8] += 15;
	}

	if (k == -98)
	{
		musicstate = 1;
	}
	if (k == 500)
	{
		musicstate = 2;
	}
	
}

void ShowMarvel()
{
	ai++;
	if (menustate == 4)
	{
		//storystates are used to switch between the different story arrays
		if (storystate == 0) // calls story1
		{
			if (si1 < 65)
			{
				si1++;
			}
			if (si1 == 65)
			{
				si1 = 0;
				storystate++;
			}
		}

		if (storystate == 1) // calls story2
		{
			if (si1 < 36)
			{
				si1++;
			}
			if (si1 == 36)
			{
				si1 = 0;
				storystate++;
			}
		}

		if (storystate == 2) // calls story3
		{
			if (si1 < 34)
			{
				si1++;
			}
			if (si1 == 34)
			{
				si1 = 0;
				storystate++;
			}
		}

		if (storystate == 3) // calls story4
		{
			if (si1 < 92)
			{
				si1++;
			}
			if (si1 == 92)
			{
				si1 = 0;
				storystate++;
			}
		}

		if (storystate == 4) // calls story5
		{
			if (si1 < 80)
			{
				si1++;
			}
			if (si1 == 80)
			{
				si1 = 0;
				storystate++;
			}
		}

		if (storystate == 5) // calls story61
		{
			if (si1 < 92)
			{
				si1++;
			}
			if (si1 == 92)
			{
				si1 = 0;
				storystate++;
			}
		}

		if (storystate == 6) // calls story62
		{
			if (si1 < 100)
			{
				si1++;
			}
			if (si1 == 100)
			{
				si1 = 0;
				storystate++;
			}
		}

		if (storystate == 7) // calls story63
		{
			if (si1 < 98)
			{
				si1++;
			}
			if (si1 == 98)
			{
				si1 = 0;
				storystate++;
			}
		}

		if (storystate == 8) // calls story64
		{
			if (si1 < 99)
			{
				si1++;
			}
			if (si1 == 99)
			{
				si1 = 0;
				storystate++;
			}
		}

		if (storystate == 9) // calls story7
		{
			if (si1 < 57)
			{
				si1++;
			}
			if (si1 == 57)
			{
				si1 = 0;
				storystate++;
			}
		}
		
		if (storystate == 10) // calls story8
		{
			if (si1 < 130)
			{
				si1++;
			}
			if (si1 == 130)
			{
				si1 = 0;
				storystate++;
			}
		}

		if (storystate == 11) // calls story9
		{
			if (si1 < 193)
			{
				si1++;
			}
			if (si1 == 193)
			{
				si1 = 0;
				storystate++;
			}
		}

		if (storystate == 12) // calls story10
		{
			if (si1 < 130)
			{
				si1++;
			}
			if (si1 == 130)
			{
				si1 = 0;
				storystate++;
			}
			
		}

		if (storystate == 13)
		{
			if (si1 < 30)
			{
				si1++;

			}
			if (si1 == 30)
			{
				si1 = 0;
				musicstate = 2;
				storystate = 0;
				menustate = 0;  //to return to menu automatically
			}
		}
		
	}
}

void changemusic()
{
	if (musicstate == 1)
	{
		PlaySound("bc\\marvel.wav", NULL, SND_ASYNC);
		musicstate = 0;
	}

	if (musicstate == 2)
	{
		PlaySound("bc\\thor.wav", NULL, SND_LOOP | SND_ASYNC);
		musicstate = 0;
	}

	if (musicstate == 3)
	{
		PlaySound("bc\\story.wav", NULL, SND_ASYNC);
		musicstate = 0;
	}

	if (musicstate == 4)
	{
		PlaySound("bc\\creditmusic.wav", NULL, SND_ASYNC);
		musicstate = 0;
	}

	if ((namestate == 3 || namestate == 4))
	{
		if (gamestate != 3)
		{
			iSetTimer(100, gchange);
		}
		
	}

	if (dx <= 100 && dy <= 100 && dx >= -100 && dy >= -100)
	{
		if (!iscubesvisible)
		{
			flag1 = 1; //to attack thor by frost giant
		}
	}
	else flag1 = 0; //to move frostgient

	if (ddx1 <= 100 && ddy1 <= 100 && ddx1 >= -100 && ddy1 >= -100)
	{
		if (!iscubesvisible)
		{
			smallflag1 = true; //to attack thor by frost giant 1
		}
	}
	else
	{
		smallflag1 = false;
	}

	if (ddx2 <= 100 && ddy2 <= 100 && ddx2 >= -100 && ddy2 >= -100)
	{
		if (!iscubesvisible)
		{
			smallflag2 = true; //to attack thor by frost giant 2
		}
	}
	else
	{
		smallflag2 = false;
	}

}

void setbackground()
{
	// to set background picture;
	for (int bi = 0; bi < 100; bi++)
	{
		upbackground[bi].backy = 0;
		upbackground[bi].backx = upbackpx;
		upbackground[bi].backy2 = 0;
		upbackground[bi].backx2 = upbackpx;
		upbackpx += 17;
	}

	// to show the road
	for (int ci = 0; ci < 50; ci++)
	{
		road[ci].roady = 0;
		road[ci].roadx = roadpx;
		road[ci].roady2 = 0;
		road[ci].roadx2 = roadpx;
		roadpx += 34;
	}

	// to show the ice cubes
	for (int ie = 0; ie < 5; ie++)
	{

		cubes[ie].icey = cubepxy;
		cubes[ie].icex = cubepx;
		cubepx += 94;
		cubepxy -= 60;
	}
}

//this is for rendering the background
void renderbackgroud()
{
	if (namestate == 3)
	{
		for (int bi = 0; bi < 100; bi++)
		{
			upbackground[bi].backx -= 17;

			if (upbackground[bi].backx <= 0)
			{
				upbackground[bi].backx = 1683;
			}
		}
	}

	if (namestate == 4)
	{
		for (int bi = 0; bi < 100; bi++)
		{
			upbackground[bi].backx2 -= 17;

			if (upbackground[bi].backx2 <= 0)
			{
				upbackground[bi].backx2 = 1683;
			}
		}
	}
	
}

//this is for rendering road
void renderroad()
{
	for (int ci = 0; ci < 50; ci++)
	{

		if (namestate == 3)
		{
			road[ci].roadx -= 34;

			if (road[ci].roadx <= 0)
			{
				road[ci].roadx = 1666;
			}
		}

		if (namestate == 4)
		{
			road[ci].roadx2 -= 34;

			if (road[ci].roadx2 <= 0)
			{
				road[ci].roadx2 = 1666;
			}
		}
		
	}
}

//this is to call the super thunder power
void thunderchange()
{
	if (gamestate == 3)
	{
		if (thundercharindex < 14)
		{ 
			thundercharindex++;
		}
		
		if (thorthunderindex < 21)
		{
			thorthunderindex++;
			thundercounter++;
		}
		if (thundercounter == 21)
		{
			thorthunderindex = -1;
			thundercounter++;
		}
		if (thundercounter > 21 && thundercounter < 37)
		{
			thorthunderindex++;
			thundercounter++;
		}
		if (thundercounter == 37) //sends everything to initial points
		{
			if (namestate == 3)
			{
				gamestate = 1;
			}

			if (namestate == 4)
			{
				gamestate = 5;
			}

			if (namestate == 6)
			{
				gamestate = 6;
			}

			thundercharindex = 0;
			thorthunderindex = 0;
			thundercounter = 0;
		}
	}
}

// every giants move here
void gchange()
{
	
	if (!iscubesvisible && (namestate == 3 || namestate == 4))
	{
		if (!vanish1)
		{
			sgx1 = thorx;
			sgy1 = thory;

			ddx1 = sgx1 - smallfrostx1;
			smallfrostx1 += (ddx1 / 40);

			if (smallfrostx1 < 500)
			{
				ddy1 = sgy1 - smallfrosty1;
				smallfrosty1 += (ddy1 / 40);
			}
		
		}

		else
		{
			smallfrostx1 = 4000 + rand() % 500;
			smallfrosty1 = 15 + rand() % 250;

			if (!doorishere)
			{
				vanish1 = false;
			}

			if (doorishere)
			{
				smallfrostx1 = 4000 + rand() % 500;
				ddx1 = 10000;
			}
		}

		if (!vanish2)
		{
			sgx2 = thorx;
			sgy2 = thory;

			ddx2 = sgx2 - smallfrostx2;
			smallfrostx2 += (ddx2 / 40);

			if (smallfrostx2 < 500)
			{
				ddy2 = sgy2 - smallfrosty2;
				smallfrosty2 += (ddy2 / 40);
			}

		}

		else
		{
			smallfrostx2 = 10000;
			smallfrosty2 = 15 + rand() % 250;

			if (!doorishere)
			{
				vanish2 = false;
			}

			if (doorishere)
			{
				smallfrostx2 = 10000;
				ddx2 = 10000;
			}
		}

		if (!vanish)
		{
			fgx = thorx;
			fgy = thory;

			dx = fgx - a;
			dy = fgy - b;

			a = a + (dx / 40);
			b = b + (dy / 40);

			
		}
		else
		{
			if (vanish)
			{
				a = 10000; //THIS SHOULD BE CHANGED !!

				if (!doorishere)
				{
					vanish = false;
				}
			}
			
			if (icemoving  && a > 1700 && smallfrostx1 > 1700 && smallfrostx2 > 1700)
			{
				goice = true; // to make the ice move while frost is killed
			}
			if (doorishere)
			{
				isdoorvisible = true;
				a = 10000;
				dx = 10000;
			}
		}
	}
	else
	{
		a = 10000;
		dx = 10000;
		smallfrostx1 = 10000;
		smallfrostx2 = 10000;
		ddx1 = 10000;
		ddx2 = 10000;
	}
	
}

//thor's hammer attack
void tattack()
{
	iShowBMP2(thorx, thory, thorattack[icount], 0);
	if (icount == 9)
	{
		flag = true; // flag ture hoile r dukbe na
		icount = 0;

		if (hitting1)
		{
			smallmoveindex1 = 0;
			smallhitindex1 = 0;
			frosthit1 = true;

			if (frosthit1)
			{
				vanish1 = true;
		
				if (superpowerindex == 18 && !superclicked)
				{
					superpowerindex = 18;

				}
				else
				{
					superpowerindex ++; //fills the super power bar
					superclicked = false;
				}
				playerscore += 100;
				frosthit1 = false;
			}
			hitting1 = false;
		}

		if (hitting2)
		{
			smallmoveindex2 = 0;
			smallhitindex2 = 0;
			frosthit2 = true;

			if (frosthit2)
			{
				vanish2 = true;

				if (superpowerindex == 18 && !superclicked)
				{
					superpowerindex = 18;

				}
				else
				{
					superpowerindex++; //fills the super power bar
					superclicked = false;
				}
				playerscore += 100;
				frosthit2 = false;
			}
			hitting2 = false;
		}

		if (hitting)
		{
			index = 0;
			index1 = 0;

			if (frostgianthit < 3)
			{
				frostgianthit++; 
			}

			if (frostgianthit == 3)
			{
				vanish = true;
				if (superpowerindex == 18 && !superclicked)
				{
					superpowerindex = 18;

				}
				else
				{
					superpowerindex += 2; //fills the super power bar
					superclicked = false;
				}
				playerscore += 1000;
				frostgianthit = 0;
			}
			hitting = false;
		}
	}
	icount++;
}

void gameoverandboxopen()
{
	
	// to see gameover animation
	if (gameoverindex < 12 && gamestate == 4)
	{
		gameoverindex++;
	}
	else if (gameoverindex == 12)
	{
		gameoverindex = 12;
	}

	// to open the key box
	if (isboxopen)
	{
		if (boxindex < 8)
		{
			boxindex++;

			if (boxindex == 7)
			{
				iskeyincreased = true;
			}
		}
		else
		{
			boxindex = 8;
			isboxopen = false;
			
		}

		if (iskeyincreased)
		{
			if (keyindex == 3)
			{
				keyindex = 3;
			}
			else
			{
				keyindex++; // to show 4 keys one by one
			}
			iskeyincreased = false;
		}
	}
	
}

// to gliter the ice and to crack it
void icemove()
{

	//to open the door
	if (isdooropen)
	{
		keyindex = -1; //as you have used every keys to open the door

		if (doorindex < 13)
		{
			doorindex++;
		}

		else
		{
			doorindex = 13;
		}
	}
	
	if (icemoving  && goice)
	{
		boxplacement1 = 1+ rand() % 3; // to randomly set the box under icecubes

		if (visible == 1 && (namestate == 3 || namestate == 4))
		{
			boxplacement = boxplacement1;
			boxx = cubes[boxplacement].icex;
			boxy = cubes[boxplacement].icey;
			visible++;
		}

		if (iscubesvisible)
		{
			//this is to crack the ice cubes when it's visible
			for (int ie = 0; ie < 5; ie++)
			{
				if (!cubes[ie].cracked)
				{
					if (cubes[ie].icestateindex < 10)
					{
						cubes[ie].icestateindex++;
					}
					else
					{
						cubes[ie].icestateindex = 0;
					}
				}

				else
				{
					if (cubes[ie].icestateindex < 15)
					{
						cubes[ie].icestateindex++;
					}
					else
					{
						cubes[ie].icestateindex = 0;
						cubes[ie].icex = -2000;
					}
				}
			}

			// to return to initial position
			if (cubes[4].icex < 0  &&  boxx < 0)
			{
				iscubesvisible = false;
				icemoving = false;
				goice = false;
				visible = 1;
				cubepx = 2000;
				cubepxy = 250;
				boxindex = 0;	
				icetimer = 0;

				for (int ie = 0; ie < 5; ie++)
				{
					cubes[ie].cracked = false;
					cubes[ie].icey = cubepxy;
					cubes[ie].icex = cubepx;
					cubepx += 94;
					cubepxy -= 60;

				}
				
			}

		}
	}
		
}


int main()
{
	//place your own initialization codes here


	setbackground(); // calls background images
	iSetTimer(25, icemove);
	iSetTimer(25, gameoverandboxopen);
	iSetTimer(1, thunderchange);
	iSetTimer(1, changemusic);
	iSetTimer(0.5, thorLokiMenu);
	iSetTimer(100, ShowMarvel);
	
	
	iInitialize(1700, 900, "THOR : THE SAVIOR");
	iStart();
	
	return 0;
}
