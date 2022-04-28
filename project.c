/* Name of the project:- Mind Reader
   Created by:- Biplab Dutta, Aayam Koirala, Jeevan Dhamala
   Project completed on:- 3rd March, 2018 */


#include<stdio.h>
#include<stdlib.h>
#include <dos.h>
#include<graphics.h>
#include<conio.h>
int m, p, q, s, a1, a2, a3, a4, a5, a6;
char xyz[50];
int x, y, button;
union REGS i, o;

void wc_scr();	      //creates welcome screen.
void tableno1();      //displays the table number for the 1st table.
void gamescr1();      //creates the numbered table 1.
void show_mouse();    //brings the mouse cursor on the screen.
void get_mouse(int*,int*,int*);    //tracks the position of mouse cursor on the screen.
void gamescr2();      //creates the numbered table 2.
void tableno2();      //displays the table number for the 2nd table.
void gamescr3();      //creates the numbered table 3.
void tableno3();      //displays the table number for the 3rd table.
void tableno4();      //displays the table number for the 4th table.
void gamescr4();      //creates the numbered table 4.
void tableno5();      //displays the table number for the 5th table.
void gamescr5();      //creates the numbered table 5.
void tableno6();      //displays the table number for the 6th table.
void gamescr6();      //creates the numbered table 6.
void outputscr();     //shows the result.

void main()
{
int gd=DETECT, gm;
initgraph(&gd, &gm,"c:\\turboc3\\bgi");

wc_scr();           //function call for welcome screen.
getch();
cleardevice();
tableno1();          //function call for displaying table number.
gamescr1();          //function call for displaying the numbered table.

 show_mouse();

while(!kbhit())
{
	get_mouse(&button,&x,&y);

	if(button==1)
	{
	   button=-1;
	   if (x>141 && x<287 && y>431 && y<468)
	   {
	   a1=1;
	   setcolor(WHITE);
	   rectangle(141, 431, 287, 468);
	   setfillstyle(SOLID_FILL, LIGHTGREEN);
	   floodfill(145, 433, WHITE);
	   delay(500);
	   cleardevice();

	   tableno2();

	   gamescr2();

	   }
	   else if(x>360 && x<506 && y>431 && y<468)
	   {
	   a1=0;
	    setcolor(WHITE);
	    rectangle(360, 431, 506, 468);
	    setfillstyle(SOLID_FILL, LIGHTRED);
	    floodfill(361, 433, WHITE);
	    delay(500);
	    cleardevice();

	    tableno2();

	    gamescr2();

	   }
	}
}
}

void wc_scr()	    //function definition for welcome screen.
{
rectangle(5, 20, 634, 458);
setcolor(LIGHTGREEN);
settextstyle(4, 0, 8);
outtextxy(130, 10, "Welcome to");

setcolor(YELLOW);
settextstyle(0, 0, 7);
outtextxy(15, 140, "MIND READER");

line(15, 200, 623, 200);
line(15, 204, 623, 204);

setcolor(WHITE);
settextstyle(7, 0, 4);
outtextxy(20, 270, "Think of a number between 0 & 60.");

setcolor(CYAN);
settextstyle(1, 0, 3);
outtextxy(140, 380, "(PRESS ANY KEY TO CONTINUE)");

}

void tableno1()      //function call for displaying table number for 1st table.
{
int a=120, b=220
;
setcolor(WHITE);
settextstyle(7, 0, 7);
outtextxy(100, 100, "TABLE 1 of 6");


for(m=1; m<=6; m++)
{
circle(a, b, 10);
a=a+80;
}
setfillstyle(SOLID_FILL, WHITE);
floodfill(120, 220, WHITE);

delay(2000);
cleardevice();
}

void gamescr1()      //function call for displaying the numbered table.
{
setbkcolor(BLUE);

setcolor(WHITE);
rectangle(25, 11, 620, 42);

setfillstyle(SOLID_FILL, BROWN);
floodfill(26, 14, WHITE);
setcolor(WHITE);
settextstyle(3, 0, 2);
outtextxy(35, 12, "Is the number that you are thinking present in this table?");

line(104, 54, 542, 54);		//horizontal line 1
line(104, 127, 542, 127);       //horizontal line 2
line(104, 200, 542, 200); 	//horizontal line 3
line(104, 273, 542, 273);       //horizontal line 4
line(104, 346, 542, 346);       //horizontal line 5
line(104, 419, 542, 419);  	//horizontal line 6
line(104, 54, 104, 419);	//vertical line 1
line(177, 54, 177, 419);        //vertical line 2
line(250, 54, 250, 419);        //vertical line 3
line(323, 54, 323, 419);        //vertical line 4
line(396, 54, 396, 419);        //vertical line 5
line(469, 54, 469, 419);        //vertical line 6
line(542, 54, 542, 419);        //vertical line 7

setfillstyle(SOLID_FILL, YELLOW);
floodfill(120, 60, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(112, 57, "01");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(180, 60, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(183, 57, "11");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(255, 60, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(259, 57, "21");

setfillstyle(SOLID_FILL, LIGHTCYAN);
floodfill(324, 60, WHITE);
setcolor(BROWN);
settextstyle(1, 0, 6);
outtextxy(331, 57, "31");

setfillstyle(SOLID_FILL, LIGHTMAGENTA);
floodfill(397, 60, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(403, 57, "41");

setfillstyle(SOLID_FILL, RED);
floodfill(470, 60, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(477, 57, "51");

setfillstyle(SOLID_FILL, CYAN);
floodfill(105, 128, WHITE);
setcolor(BROWN);
settextstyle(1, 0, 6);
outtextxy(112, 130, "03");

setfillstyle(SOLID_FILL, LIGHTGREEN);
floodfill(178, 128, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(183, 130, "13");

setfillstyle(SOLID_FILL, LIGHTGRAY);
floodfill(251, 128, WHITE);
setcolor(MAGENTA);
settextstyle(1,0, 6);
outtextxy(259, 130, "23");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(324, 128, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(331, 130, "33");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(397, 128, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(403, 130, "43");

setfillstyle(SOLID_FILL, BLUE);
floodfill(470, 128, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(477, 130, "53");

setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(105, 201, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(112, 202, "05");

setfillstyle(SOLID_FILL, LIGHTMAGENTA);
floodfill(178, 201, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(183, 202, "15");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(251, 201, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(259, 202, "25");

setfillstyle(SOLID_FILL, GREEN);
floodfill(324, 201, WHITE);
setcolor(BLUE);
settextstyle(1, 0, 6);
outtextxy(331, 202, "35");

setfillstyle(SOLID_FILL, CYAN);
floodfill(397, 201, WHITE);
setcolor(BLACK);
settextstyle(1, 0, 6);
outtextxy(403, 202, "45");

setfillstyle(SOLID_FILL, WHITE);
floodfill(470, 201, WHITE);
setcolor(MAGENTA);
settextstyle(1, 0, 6);
outtextxy(477, 202, "55");

setfillstyle(SOLID_FILL, BLUE);
floodfill(105, 274, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(112, 275, "07");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(178, 274, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(183, 275, "17");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(251, 274, WHITE);
setcolor(BLACK);
settextstyle(1, 0, 6);
outtextxy(259, 275, "27");

setfillstyle(SOLID_FILL, WHITE);
floodfill(324, 274, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(331, 275, "37");

setfillstyle(SOLID_FILL, MAGENTA);
floodfill(397, 274, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(403, 275, "47");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(470, 274, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(477, 275, "57");

setfillstyle(SOLID_FILL, CYAN);
floodfill(105, 347, WHITE);
setcolor(MAGENTA);
settextstyle(1, 0, 6);
outtextxy(112, 348, "09");

setfillstyle(SOLID_FILL, MAGENTA);
floodfill(178, 347, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(183, 348, "19");

setfillstyle(SOLID_FILL, GREEN);
floodfill(251, 347, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(259, 348, "29");

setfillstyle(SOLID_FILL, BLUE);
floodfill(324, 347, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(331, 348, "39");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(397, 347, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(403, 348, "49" );

setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(470, 347, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(477, 348, "59");

rectangle(141, 431, 287, 468);
rectangle(360, 431, 506, 468);

setfillstyle(SOLID_FILL, GREEN);
floodfill(142, 432, WHITE);
setcolor(WHITE);
settextstyle(0, 0, 4);
outtextxy(168, 436, "YES");

setfillstyle(SOLID_FILL, RED);
floodfill(361, 465, WHITE);
setcolor(WHITE);
settextstyle(0, 0, 4);
outtextxy(403, 436, "NO");
}

void show_mouse()
{
  i.x.ax = 0;
  int86(0X33,&i,&o);
}
void get_mouse(int *button, int *x, int *y)
{
   i.x.ax = 1;
   int86(0X33,&i,&o);
   i.x.ax = 3;
   int86(0X33,&i,&o);
   *button = o.x.bx;
   *x = o.x.cx;
   *y = o.x.dx;
}
void tableno2()      //function call for displaying table number.
{
int c=120, d=220;
setbkcolor(BLACK);
setcolor(WHITE);
settextstyle(7, 0, 7);
outtextxy(100, 100, "TABLE 2 of 6");


for(m=1; m<=6; m++)
{
circle(c, d, 10);
c=c+80;
}
setfillstyle(SOLID_FILL, WHITE);
floodfill(120, 220, WHITE);
floodfill(200, 220, WHITE);


delay(2000);
cleardevice();
}

void gamescr2()
{
setcolor(WHITE);
rectangle(25, 11, 620, 42);

setfillstyle(SOLID_FILL, RED);
floodfill(26, 14, WHITE);
setcolor(WHITE);
settextstyle(3, 0, 2);
outtextxy(35, 12, "Is the number that you are thinking present in this table?");

line(104, 54, 542, 54);		//horizontal line 1
line(104, 127, 542, 127);       //horizontal line 2
line(104, 200, 542, 200); 	//horizontal line 3
line(104, 273, 542, 273);       //horizontal line 4
line(104, 346, 542, 346);       //horizontal line 5
line(104, 419, 542, 419);  	//horizontal line 6
line(104, 54, 104, 419);	//vertical line 1
line(177, 54, 177, 419);        //vertical line 2
line(250, 54, 250, 419);        //vertical line 3
line(323, 54, 323, 419);        //vertical line 4
line(396, 54, 396, 419);        //vertical line 5
line(469, 54, 469, 419);        //vertical line 6
line(542, 54, 542, 419);        //vertical line 7

setbkcolor(BLUE);

setfillstyle(SOLID_FILL, YELLOW);
floodfill(120, 60, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(112, 57, "02");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(180, 60, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(184, 57, "11");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(255, 60, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(258, 57, "22");

setfillstyle(SOLID_FILL, LIGHTCYAN);
floodfill(324, 60, WHITE);
setcolor(BROWN);
settextstyle(1, 0, 6);
outtextxy(332, 57, "31");

setfillstyle(SOLID_FILL, LIGHTMAGENTA);
floodfill(397, 60, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(403, 57, "42");

setfillstyle(SOLID_FILL, RED);
floodfill(470, 60, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(477, 57, "51");

setfillstyle(SOLID_FILL, CYAN);
floodfill(105, 128, WHITE);
setcolor(BROWN);
settextstyle(1, 0, 6);
outtextxy(112, 130, "03");

setfillstyle(SOLID_FILL, LIGHTGREEN);
floodfill(178, 128, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(183, 130, "14");

setfillstyle(SOLID_FILL, LIGHTGRAY);
floodfill(251, 128, WHITE);
setcolor(MAGENTA);
settextstyle(1,0, 6);
outtextxy(259, 130, "23");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(324, 128, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(331, 130, "34");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(397, 128, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(403, 130, "43");

setfillstyle(SOLID_FILL, BLUE);
floodfill(470, 128, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(477, 130, "54");

setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(105, 201, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(112, 202, "06");

setfillstyle(SOLID_FILL, LIGHTMAGENTA);
floodfill(178, 201, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(183, 202, "15");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(251, 201, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(259, 202, "26");

setfillstyle(SOLID_FILL, GREEN);
floodfill(324, 201, WHITE);
setcolor(BLUE);
settextstyle(1, 0, 6);
outtextxy(331, 202, "35");

setfillstyle(SOLID_FILL, CYAN);
floodfill(397, 201, WHITE);
setcolor(BLACK);
settextstyle(1, 0, 6);
outtextxy(403, 202, "46");

setfillstyle(SOLID_FILL, WHITE);
floodfill(470, 201, WHITE);
setcolor(MAGENTA);
settextstyle(1, 0, 6);
outtextxy(477, 202, "55");

setfillstyle(SOLID_FILL, BLUE);
floodfill(105, 274, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(112, 275, "07");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(178, 274, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(182, 275, "18");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(251, 274, WHITE);
setcolor(BLACK);
settextstyle(1, 0, 6);
outtextxy(259, 275, "27");

setfillstyle(SOLID_FILL, WHITE);
floodfill(324, 274, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(331, 275, "38");

setfillstyle(SOLID_FILL, MAGENTA);
floodfill(397, 274, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(403, 275, "47");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(470, 274, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(477, 275, "58");

setfillstyle(SOLID_FILL, CYAN);
floodfill(105, 347, WHITE);
setcolor(MAGENTA);
settextstyle(1, 0, 6);
outtextxy(109, 348, "10");

setfillstyle(SOLID_FILL, MAGENTA);
floodfill(178, 347, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(183, 348, "19");

setfillstyle(SOLID_FILL, GREEN);
floodfill(251, 347, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(259, 348, "30");

setfillstyle(SOLID_FILL, BLUE);
floodfill(324, 347, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(331, 348, "39");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(397, 347, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(403, 348, "50" );

setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(470, 347, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(477, 348, "59");

rectangle(141, 431, 287, 468);
rectangle(360, 431, 506, 468);

setfillstyle(SOLID_FILL, GREEN);
floodfill(142, 432, WHITE);
setcolor(WHITE);
settextstyle(0, 0, 4);
outtextxy(168, 436, "YES");

setfillstyle(SOLID_FILL, RED);
floodfill(361, 465, WHITE);
setcolor(WHITE);
settextstyle(0, 0, 4);
outtextxy(403, 436, "NO");

while(!kbhit())
{
	get_mouse(&button,&x,&y);

	if(button==1)
	{
	   a2=2;
	   button=-1;
	   if (x>141 && x<287 && y>431 && y<468)
	   {

	   setcolor(WHITE);
	   rectangle(141, 431, 287, 468);
	   setfillstyle(SOLID_FILL, LIGHTGREEN);
	   floodfill(145, 433, WHITE);
	   delay(500);
	   cleardevice();

	   tableno3();

	   gamescr3();

	   }
	   else if(x>360 && x<506 && y>431 && y<468)
	   {
	    a2=0;
	    setcolor(WHITE);
	    rectangle(360, 431, 506, 468);
	    setfillstyle(SOLID_FILL, LIGHTRED);
	    floodfill(361, 433, WHITE);
	    delay(500);
	    cleardevice();

	    tableno3();

	    gamescr3();

	   }
	}
}
}
void tableno3()
{
int e=120, f=220;
setbkcolor(BLACK);
setcolor(WHITE);
settextstyle(7, 0, 7);
outtextxy(100, 100, "TABLE 3 of 6");


for(m=1; m<=6; m++)
{
circle(e, f, 10);
e=e+80;
}
setfillstyle(SOLID_FILL, WHITE);
floodfill(120, 220, WHITE);
floodfill(200, 220, WHITE);
floodfill(280, 220, WHITE);


delay(2000);
cleardevice();
}
void gamescr3()
{
setcolor(WHITE);
rectangle(25, 11, 620, 42);

setfillstyle(SOLID_FILL, BROWN);
floodfill(26, 14, WHITE);
setcolor(WHITE);
settextstyle(3, 0, 2);
outtextxy(35, 12, "Is the number that you are thinking present in this table?");

line(104, 54, 542, 54);		//horizontal line 1
line(104, 127, 542, 127);       //horizontal line 2
line(104, 200, 542, 200); 	//horizontal line 3
line(104, 273, 542, 273);       //horizontal line 4
line(104, 346, 542, 346);       //horizontal line 5
line(104, 419, 542, 419);  	//horizontal line 6
line(104, 54, 104, 419);	//vertical line 1
line(177, 54, 177, 419);        //vertical line 2
line(250, 54, 250, 419);        //vertical line 3
line(323, 54, 323, 419);        //vertical line 4
line(396, 54, 396, 419);        //vertical line 5
line(469, 54, 469, 419);        //vertical line 6
line(542, 54, 542, 419);        //vertical line 7

setbkcolor(BLUE);

setfillstyle(SOLID_FILL, YELLOW);
floodfill(120, 60, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(112, 57, "04");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(180, 60, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(183, 57, "13");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(255, 60, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(259, 57, "22");

setfillstyle(SOLID_FILL, LIGHTCYAN);
floodfill(324, 60, WHITE);
setcolor(BROWN);
settextstyle(1, 0, 6);
outtextxy(331, 57, "31");

setfillstyle(SOLID_FILL, LIGHTMAGENTA);
floodfill(397, 60, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(403, 57, "44");

setfillstyle(SOLID_FILL, RED);
floodfill(470, 60, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(477, 57, "53");

setfillstyle(SOLID_FILL, CYAN);
floodfill(105, 128, WHITE);
setcolor(BROWN);
settextstyle(1, 0, 6);
outtextxy(112, 130, "05");

setfillstyle(SOLID_FILL, LIGHTGREEN);
floodfill(178, 128, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(183, 130, "14");

setfillstyle(SOLID_FILL, LIGHTGRAY);
floodfill(251, 128, WHITE);
setcolor(MAGENTA);
settextstyle(1,0, 6);
outtextxy(259, 130, "23");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(324, 128, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(331, 130, "36");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(397, 128, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(403, 130, "45");

setfillstyle(SOLID_FILL, BLUE);
floodfill(470, 128, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(477, 130, "54");

setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(105, 201, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(112, 202, "06");

setfillstyle(SOLID_FILL, LIGHTMAGENTA);
floodfill(178, 201, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(183, 202, "15");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(251, 201, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(259, 202, "28");

setfillstyle(SOLID_FILL, GREEN);
floodfill(324, 201, WHITE);
setcolor(BLUE);
settextstyle(1, 0, 6);
outtextxy(331, 202, "37");

setfillstyle(SOLID_FILL, CYAN);
floodfill(397, 201, WHITE);
setcolor(BLACK);
settextstyle(1, 0, 6);
outtextxy(403, 202, "46");

setfillstyle(SOLID_FILL, WHITE);
floodfill(470, 201, WHITE);
setcolor(MAGENTA);
settextstyle(1, 0, 6);
outtextxy(477, 202, "55");

setfillstyle(SOLID_FILL, BLUE);
floodfill(105, 274, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(112, 275, "07");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(178, 274, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(183, 275, "20");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(251, 274, WHITE);
setcolor(BLACK);
settextstyle(1, 0, 6);
outtextxy(259, 275, "29");

setfillstyle(SOLID_FILL, WHITE);
floodfill(324, 274, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(331, 275, "38");

setfillstyle(SOLID_FILL, MAGENTA);
floodfill(397, 274, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(403, 275, "47");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(470, 274, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(477, 275, "60");

setfillstyle(SOLID_FILL, CYAN);
floodfill(105, 347, WHITE);
setcolor(MAGENTA);
settextstyle(1, 0, 6);
outtextxy(112, 348, "12");

setfillstyle(SOLID_FILL, MAGENTA);
floodfill(178, 347, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(183, 348, "21");

setfillstyle(SOLID_FILL, GREEN);
floodfill(251, 347, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(259, 348, "30");

setfillstyle(SOLID_FILL, BLUE);
floodfill(324, 347, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(331, 348, "39");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(397, 347, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(403, 348, "52" );

setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(470, 347, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(492, 347, "-");

rectangle(141, 431, 287, 468);
rectangle(360, 431, 506, 468);

setfillstyle(SOLID_FILL, GREEN);
floodfill(142, 432, WHITE);
setcolor(WHITE);
settextstyle(0, 0, 4);
outtextxy(168, 436, "YES");

setfillstyle(SOLID_FILL, RED);
floodfill(361, 465, WHITE);
setcolor(WHITE);
settextstyle(0, 0, 4);
outtextxy(403, 436, "NO");

while(!kbhit())
{
	get_mouse(&button,&x,&y);

	if(button==1)
	{
	   button=-1;
	   if (x>141 && x<287 && y>431 && y<468)
	   {
	   a3=4;
	   setcolor(WHITE);
	   rectangle(141, 431, 287, 468);
	   setfillstyle(SOLID_FILL, LIGHTGREEN);
	   floodfill(145, 433, WHITE);
	   delay(500);
	   cleardevice();

	   tableno4();

	   gamescr4();

	   }
	   else if(x>360 && x<506 && y>431 && y<468)
	   {
	    a3=0;
	    setcolor(WHITE);
	    rectangle(360, 431, 506, 468);
	    setfillstyle(SOLID_FILL, LIGHTRED);
	    floodfill(361, 433, WHITE);
	    delay(500);
	    cleardevice();

	    tableno4();

	    gamescr4();

	   }
	}
}
}
void tableno4()
{
int g=120, h=220;
setbkcolor(BLACK);
setcolor(WHITE);
settextstyle(7, 0, 7);
outtextxy(100, 100, "TABLE 4 of 6");


for(m=1; m<=6; m++)
{
circle(g, h, 10);
g=g+80;
}
setfillstyle(SOLID_FILL, WHITE);
floodfill(120, 220, WHITE);
floodfill(200, 220, WHITE);
floodfill(280, 220, WHITE);
floodfill(360, 220, WHITE);


delay(2000);
cleardevice();
}

void gamescr4()
{
setcolor(WHITE);
rectangle(25, 11, 620, 42);

setfillstyle(SOLID_FILL, RED);
floodfill(26, 14, WHITE);
setcolor(WHITE);
settextstyle(3, 0, 2);
outtextxy(35, 12, "Is the number that you are thinking present in this table?");

line(104, 54, 542, 54);		//horizontal line 1
line(104, 127, 542, 127);       //horizontal line 2
line(104, 200, 542, 200); 	//horizontal line 3
line(104, 273, 542, 273);       //horizontal line 4
line(104, 346, 542, 346);       //horizontal line 5
line(104, 419, 542, 419);  	//horizontal line 6
line(104, 54, 104, 419);	//vertical line 1
line(177, 54, 177, 419);        //vertical line 2
line(250, 54, 250, 419);        //vertical line 3
line(323, 54, 323, 419);        //vertical line 4
line(396, 54, 396, 419);        //vertical line 5
line(469, 54, 469, 419);        //vertical line 6
line(542, 54, 542, 419);        //vertical line 7

setbkcolor(BLUE);

setfillstyle(SOLID_FILL, YELLOW);
floodfill(120, 60, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(112, 57, "08");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(180, 60, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(183, 57, "13");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(255, 60, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(259, 57, "26");

setfillstyle(SOLID_FILL, LIGHTCYAN);
floodfill(324, 60, WHITE);
setcolor(BROWN);
settextstyle(1, 0, 6);
outtextxy(331, 57, "31");

setfillstyle(SOLID_FILL, LIGHTMAGENTA);
floodfill(397, 60, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(403, 57, "44");

setfillstyle(SOLID_FILL, RED);
floodfill(470, 60, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(477, 57, "57");

setfillstyle(SOLID_FILL, CYAN);
floodfill(105, 128, WHITE);
setcolor(BROWN);
settextstyle(1, 0, 6);
outtextxy(112, 130, "09");

setfillstyle(SOLID_FILL, LIGHTGREEN);
floodfill(178, 128, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(183, 130, "14");

setfillstyle(SOLID_FILL, LIGHTGRAY);
floodfill(251, 128, WHITE);
setcolor(MAGENTA);
settextstyle(1,0, 6);
outtextxy(259, 130, "27");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(324, 128, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(331, 130, "40");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(397, 128, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(403, 130, "45");

setfillstyle(SOLID_FILL, BLUE);
floodfill(470, 128, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(477, 130, "58");

setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(105, 201, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(112, 202, "10");

setfillstyle(SOLID_FILL, LIGHTMAGENTA);
floodfill(178, 201, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(183, 202, "15");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(251, 201, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(259, 202, "28");

setfillstyle(SOLID_FILL, GREEN);
floodfill(324, 201, WHITE);
setcolor(BLUE);
settextstyle(1, 0, 6);
outtextxy(331, 202, "41");

setfillstyle(SOLID_FILL, CYAN);
floodfill(397, 201, WHITE);
setcolor(BLACK);
settextstyle(1, 0, 6);
outtextxy(403, 202, "46");

setfillstyle(SOLID_FILL, WHITE);
floodfill(470, 201, WHITE);
setcolor(MAGENTA);
settextstyle(1, 0, 6);
outtextxy(477, 202, "59");

setfillstyle(SOLID_FILL, BLUE);
floodfill(105, 274, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(112, 275, "11");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(178, 274, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(183, 275, "24");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(251, 274, WHITE);
setcolor(BLACK);
settextstyle(1, 0, 6);
outtextxy(259, 275, "29");

setfillstyle(SOLID_FILL, WHITE);
floodfill(324, 274, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(331, 275, "42");

setfillstyle(SOLID_FILL, MAGENTA);
floodfill(397, 274, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(403, 275, "47");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(470, 274, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(477, 275, "60");

setfillstyle(SOLID_FILL, CYAN);
floodfill(105, 347, WHITE);
setcolor(MAGENTA);
settextstyle(1, 0, 6);
outtextxy(112, 348, "12");

setfillstyle(SOLID_FILL, MAGENTA);
floodfill(178, 347, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(183, 348, "25");

setfillstyle(SOLID_FILL, GREEN);
floodfill(251, 347, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(259, 348, "30");

setfillstyle(SOLID_FILL, BLUE);
floodfill(324, 347, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(331, 348, "43");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(397, 347, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(403, 348, "56");

setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(470, 347, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(492, 347, "-");

rectangle(141, 431, 287, 468);
rectangle(360, 431, 506, 468);

setfillstyle(SOLID_FILL, GREEN);
floodfill(142, 432, WHITE);
setcolor(WHITE);
settextstyle(0, 0, 4);
outtextxy(168, 436, "YES");

setfillstyle(SOLID_FILL, RED);
floodfill(361, 465, WHITE);
setcolor(WHITE);
settextstyle(0, 0, 4);
outtextxy(403, 436, "NO");

while(!kbhit())
{
	get_mouse(&button,&x,&y);

	if(button==1)
	{
	   button=-1;
	   if (x>141 && x<287 && y>431 && y<468)
	   {
	   a4=8;
	   setcolor(WHITE);
	   rectangle(141, 431, 287, 468);
	   setfillstyle(SOLID_FILL, LIGHTGREEN);
	   floodfill(145, 433, WHITE);
	   delay(500);
	   cleardevice();

	   tableno5();

	   gamescr5();

	   }
	   else if(x>360 && x<506 && y>431 && y<468)
	   {
	    a4=0;
	    setcolor(WHITE);
	    rectangle(360, 431, 506, 468);
	    setfillstyle(SOLID_FILL, LIGHTRED);
	    floodfill(361, 433, WHITE);
	    delay(500);
	    cleardevice();

	    tableno5();

	    gamescr5();

	   }
	}
}
}
void tableno5()
{
int j=120, k=220;
setbkcolor(BLACK);
setcolor(WHITE);
settextstyle(7, 0, 7);
outtextxy(100, 100, "TABLE 5 of 6");


for(m=1; m<=6; m++)
{
circle(j, k, 10);
j=j+80;
}
setfillstyle(SOLID_FILL, WHITE);
floodfill(120, 220, WHITE);
floodfill(200, 220, WHITE);
floodfill(280, 220, WHITE);
floodfill(360, 220, WHITE);
floodfill(440, 220, WHITE);


delay(2000);
cleardevice();
}
void gamescr5()
{
setcolor(WHITE);
rectangle(25, 11, 620, 42);

setfillstyle(SOLID_FILL, GREEN);
floodfill(26, 14, WHITE);
setcolor(WHITE);
settextstyle(3, 0, 2);
outtextxy(35, 12, "Is the number that you are thinking present in this table?");

line(104, 54, 542, 54);		//horizontal line 1
line(104, 127, 542, 127);       //horizontal line 2
line(104, 200, 542, 200); 	//horizontal line 3
line(104, 273, 542, 273);       //horizontal line 4
line(104, 346, 542, 346);       //horizontal line 5
line(104, 419, 542, 419);  	//horizontal line 6
line(104, 54, 104, 419);	//vertical line 1
line(177, 54, 177, 419);        //vertical line 2
line(250, 54, 250, 419);        //vertical line 3
line(323, 54, 323, 419);        //vertical line 4
line(396, 54, 396, 419);        //vertical line 5
line(469, 54, 469, 419);        //vertical line 6
line(542, 54, 542, 419);        //vertical line 7

setbkcolor(BLUE);

setfillstyle(SOLID_FILL, YELLOW);
floodfill(120, 60, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(112, 57, "16");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(180, 60, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(183, 57, "21");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(255, 60, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(259, 57, "26");

setfillstyle(SOLID_FILL, LIGHTCYAN);
floodfill(324, 60, WHITE);
setcolor(BROWN);
settextstyle(1, 0, 6);
outtextxy(331, 57, "31");

setfillstyle(SOLID_FILL, LIGHTMAGENTA);
floodfill(397, 60, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(403, 57, "52");

setfillstyle(SOLID_FILL, RED);
floodfill(470, 60, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(477, 57, "57");

setfillstyle(SOLID_FILL, CYAN);
floodfill(105, 128, WHITE);
setcolor(BROWN);
settextstyle(1, 0, 6);
outtextxy(112, 130, "17");

setfillstyle(SOLID_FILL, LIGHTGREEN);
floodfill(178, 128, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(183, 130, "22");

setfillstyle(SOLID_FILL, LIGHTGRAY);
floodfill(251, 128, WHITE);
setcolor(MAGENTA);
settextstyle(1,0, 6);
outtextxy(259, 130, "27");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(324, 128, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(331, 130, "48");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(397, 128, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(403, 130, "53");

setfillstyle(SOLID_FILL, BLUE);
floodfill(470, 128, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(477, 130, "58");

setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(105, 201, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(112, 202, "18");

setfillstyle(SOLID_FILL, LIGHTMAGENTA);
floodfill(178, 201, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(183, 202, "23");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(251, 201, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(259, 202, "28");

setfillstyle(SOLID_FILL, GREEN);
floodfill(324, 201, WHITE);
setcolor(BLUE);
settextstyle(1, 0, 6);
outtextxy(331, 202, "49");

setfillstyle(SOLID_FILL, CYAN);
floodfill(397, 201, WHITE);
setcolor(BLACK);
settextstyle(1, 0, 6);
outtextxy(403, 202, "54");

setfillstyle(SOLID_FILL, WHITE);
floodfill(470, 201, WHITE);
setcolor(MAGENTA);
settextstyle(1, 0, 6);
outtextxy(477, 202, "59");

setfillstyle(SOLID_FILL, BLUE);
floodfill(105, 274, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(112, 275, "19");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(178, 274, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(183, 275, "24");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(251, 274, WHITE);
setcolor(BLACK);
settextstyle(1, 0, 6);
outtextxy(259, 275, "29");

setfillstyle(SOLID_FILL, WHITE);
floodfill(324, 274, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(331, 275, "50");

setfillstyle(SOLID_FILL, MAGENTA);
floodfill(397, 274, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(403, 275, "55");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(470, 274, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(477, 275, "60");

setfillstyle(SOLID_FILL, CYAN);
floodfill(105, 347, WHITE);
setcolor(MAGENTA);
settextstyle(1, 0, 6);
outtextxy(112, 348, "20");

setfillstyle(SOLID_FILL, MAGENTA);
floodfill(178, 347, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(183, 348, "25");

setfillstyle(SOLID_FILL, GREEN);
floodfill(251, 347, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(259, 348, "30");

setfillstyle(SOLID_FILL, BLUE);
floodfill(324, 347, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(331, 348, "51");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(397, 347, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(403, 348, "56");

setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(470, 347, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(492, 347, "-");

rectangle(141, 431, 287, 468);
rectangle(360, 431, 506, 468);

setfillstyle(SOLID_FILL, GREEN);
floodfill(142, 432, WHITE);
setcolor(WHITE);
settextstyle(0, 0, 4);
outtextxy(168, 436, "YES");

setfillstyle(SOLID_FILL, RED);
floodfill(361, 465, WHITE);
setcolor(WHITE);
settextstyle(0, 0, 4);
outtextxy(403, 436, "NO");

while(!kbhit())
{
	get_mouse(&button,&x,&y);

	if(button==1)
	{
	   button=-1;
	   if (x>141 && x<287 && y>431 && y<468)
	   {
	   a5=16;
	   setcolor(WHITE);
	   rectangle(141, 431, 287, 468);
	   setfillstyle(SOLID_FILL, LIGHTGREEN);
	   floodfill(145, 433, WHITE);
	   delay(500);
	   cleardevice();

	   tableno6();

	   gamescr6();

	   }
	   else if(x>360 && x<506 && y>431 && y<468)
	   {
	    a5=0;
	    setcolor(WHITE);
	    rectangle(360, 431, 506, 468);
	    setfillstyle(SOLID_FILL, LIGHTRED);
	    floodfill(361, 433, WHITE);
	    delay(500);
	    cleardevice();

	    tableno6();

	    gamescr6();

	   }
	}
}
}
void tableno6()
{
int l=120, n=220;
setbkcolor(BLACK);
setcolor(WHITE);
settextstyle(7, 0, 7);
outtextxy(100, 100, "TABLE 6 of 6");


for(m=1; m<=6; m++)
{
circle(l, n, 10);
l=l+80;
}
setfillstyle(SOLID_FILL, WHITE);
floodfill(120, 220, WHITE);
floodfill(200, 220, WHITE);
floodfill(280, 220, WHITE);
floodfill(360, 220, WHITE);
floodfill(440, 220, WHITE);
floodfill(520, 220, WHITE);

delay(2000);
cleardevice();
}
void gamescr6()
{
setcolor(WHITE);
rectangle(25, 11, 620, 42);

setfillstyle(SOLID_FILL, RED);
floodfill(26, 14, WHITE);
setcolor(WHITE);
settextstyle(3, 0, 2);
outtextxy(35, 12, "Is the number that you are thinking present in this table?");

line(104, 54, 542, 54);		//horizontal line 1
line(104, 127, 542, 127);       //horizontal line 2
line(104, 200, 542, 200); 	//horizontal line 3
line(104, 273, 542, 273);       //horizontal line 4
line(104, 346, 542, 346);       //horizontal line 5
line(104, 419, 542, 419);  	//horizontal line 6
line(104, 54, 104, 419);	//vertical line 1
line(177, 54, 177, 419);        //vertical line 2
line(250, 54, 250, 419);        //vertical line 3
line(323, 54, 323, 419);        //vertical line 4
line(396, 54, 396, 419);        //vertical line 5
line(469, 54, 469, 419);        //vertical line 6
line(542, 54, 542, 419);        //vertical line 7

setbkcolor(BLUE);

setfillstyle(SOLID_FILL, YELLOW);
floodfill(120, 60, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(112, 57, "32");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(180, 60, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(185, 57, "37");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(255, 60, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(256, 57, "42");

setfillstyle(SOLID_FILL, LIGHTCYAN);
floodfill(324, 60, WHITE);
setcolor(BROWN);
settextstyle(1, 0, 6);
outtextxy(329, 57, "47");

setfillstyle(SOLID_FILL, LIGHTMAGENTA);
floodfill(397, 60, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(403, 57, "52");

setfillstyle(SOLID_FILL, RED);
floodfill(470, 60, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(477, 57, "57");

setfillstyle(SOLID_FILL, CYAN);
floodfill(105, 128, WHITE);
setcolor(BROWN);
settextstyle(1, 0, 6);
outtextxy(112, 130, "33");

setfillstyle(SOLID_FILL, LIGHTGREEN);
floodfill(178, 128, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(183, 130, "38");

setfillstyle(SOLID_FILL, LIGHTGRAY);
floodfill(251, 128, WHITE);
setcolor(MAGENTA);
settextstyle(1,0, 6);
outtextxy(256, 130, "43");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(324, 128, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(329, 130, "48");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(397, 128, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(403, 130, "53");

setfillstyle(SOLID_FILL, BLUE);
floodfill(470, 128, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(477, 130, "58");

setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(105, 201, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(112, 202, "34");

setfillstyle(SOLID_FILL, LIGHTMAGENTA);
floodfill(178, 201, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(183, 202, "39");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(251, 201, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(256, 202, "44");

setfillstyle(SOLID_FILL, GREEN);
floodfill(324, 201, WHITE);
setcolor(BLUE);
settextstyle(1, 0, 6);
outtextxy(329, 202, "49");

setfillstyle(SOLID_FILL, CYAN);
floodfill(397, 201, WHITE);
setcolor(BLACK);
settextstyle(1, 0, 6);
outtextxy(403, 202, "54");

setfillstyle(SOLID_FILL, WHITE);
floodfill(470, 201, WHITE);
setcolor(MAGENTA);
settextstyle(1, 0, 6);
outtextxy(477, 202, "59");

setfillstyle(SOLID_FILL, BLUE);
floodfill(105, 274, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(112, 275, "35");

setfillstyle(SOLID_FILL, LIGHTRED);
floodfill(178, 274, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(183, 275, "40");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(251, 274, WHITE);
setcolor(BLACK);
settextstyle(1, 0, 6);
outtextxy(257, 275, "45");

setfillstyle(SOLID_FILL, WHITE);
floodfill(324, 274, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(331, 275, "50");

setfillstyle(SOLID_FILL, MAGENTA);
floodfill(397, 274, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(403, 275, "55");

setfillstyle(SOLID_FILL, LIGHTBLUE);
floodfill(470, 274, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(477, 275, "60");

setfillstyle(SOLID_FILL, CYAN);
floodfill(105, 347, WHITE);
setcolor(MAGENTA);
settextstyle(1, 0, 6);
outtextxy(112, 348, "36");

setfillstyle(SOLID_FILL, MAGENTA);
floodfill(178, 347, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(184, 348, "41");

setfillstyle(SOLID_FILL, GREEN);
floodfill(251, 347, WHITE);
setcolor(RED);
settextstyle(1, 0, 6);
outtextxy(257, 348, "46");

setfillstyle(SOLID_FILL, BLUE);
floodfill(324, 347, WHITE);
setcolor(YELLOW);
settextstyle(1, 0, 6);
outtextxy(331, 348, "51");

setfillstyle(SOLID_FILL, YELLOW);
floodfill(397, 347, WHITE);
setcolor(DARKGRAY);
settextstyle(1, 0, 6);
outtextxy(403, 348, "56");

setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(470, 347, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 6);
outtextxy(492, 347, "-");

rectangle(141, 431, 287, 468);
rectangle(360, 431, 506, 468);

setfillstyle(SOLID_FILL, GREEN);
floodfill(142, 432, WHITE);
setcolor(WHITE);
settextstyle(0, 0, 4);
outtextxy(168, 436, "YES");

setfillstyle(SOLID_FILL, RED);
floodfill(361, 465, WHITE);
setcolor(WHITE);
settextstyle(0, 0, 4);
outtextxy(403, 436, "NO");

while(!kbhit())
{
	get_mouse(&button,&x,&y);

	if(button==1)
	{
	   button=-1;
	   if (x>141 && x<287 && y>431 && y<468)
	   {
	   a6=32;
	   setcolor(WHITE);
	   rectangle(141, 431, 287, 468);
	   setfillstyle(SOLID_FILL, LIGHTGREEN);
	   floodfill(145, 433, WHITE);
	   delay(500);
	   cleardevice();

	   outputscr();
	   }
	   else if(x>360 && x<506 && y>431 && y<468)
	   {
	    a6=0;
	    setcolor(WHITE);
	    rectangle(360, 431, 506, 468);
	    setfillstyle(SOLID_FILL, LIGHTRED);
	    floodfill(361, 433, WHITE);
	    delay(500);
	    cleardevice();

	    outputscr();
	   }
	}
}
}
void outputscr()
{
cleardevice();
s=a1+a2+a3+a4+a5+a6;

itoa(s, xyz, 10);           //Converting an int value to string.

cleardevice();

rectangle(10, 25, 630, 450);
rectangle(13, 28, 627, 447);

setbkcolor(RED);
setcolor(YELLOW);
settextstyle(0, 0, 2);
outtextxy(29, 65, "The number that you were thinking is");

setcolor(WHITE);
rectangle(264, 400, 373, 430);
setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(266, 401, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 4);
outtextxy(279, 394, "SHOW");

setcolor(WHITE);
rectangle(510, 400, 620, 430);
setfillstyle(SOLID_FILL, DARKGRAY);
floodfill(520, 401, WHITE);
setcolor(WHITE);
settextstyle(1, 0, 3);
outtextxy(517, 399, "RESTART");

while(!kbhit())
{
	get_mouse(&button,&x,&y);

	if(button==1)
	{
	   button=-1;
	   if (x>264 && x<373 && y>400 && y<430)
	   {
	   setcolor(MAGENTA);
	   rectangle(264, 400, 373, 430);
	   setfillstyle(SOLID_FILL, DARKGRAY);
	   floodfill(265, 401, MAGENTA);
	   delay(350);
	   setcolor(WHITE);
	   rectangle(264, 400, 373, 430);
	   setfillstyle(SOLID_FILL, DARKGRAY);
	   floodfill(265, 401, WHITE);
	   if (s>10)
		{
		 sprintf(xyz, "%d", s);
		}
	   else
		{
		sprintf(xyz, "%02d", s);
		}
		setcolor(GREEN);
		settextstyle(0, 0, 11);
		outtextxy(235, 203, xyz);
	   }
}



	get_mouse(&button,&x,&y);

	if(button==1)
	{
	   button=-1;
	   if (x>510 && x<620 && y>400 && y<430)
	   {
	   setcolor(MAGENTA);
	   rectangle(510, 400, 620, 430);
	   setfillstyle(SOLID_FILL, DARKGRAY);
	   floodfill(511, 401, MAGENTA);
	   delay(300);
	   setcolor(WHITE);
	   rectangle(510, 400, 620, 430);
	   setfillstyle(SOLID_FILL, DARKGRAY);
	   floodfill(511, 401, WHITE);
	   delay(300);
	   main();
	   }
	}
}
}
