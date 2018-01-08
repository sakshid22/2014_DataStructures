#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<alloc.h>
#include<string.h>

struct node
{
char name[20];
int chance1;
int chance2;
int chance3;
struct node *next;
}* bonus,* player;

void score();
void landing();
void alien();
void diamond();
void book();
void planet();
void wifi();
void boat();
int coins=0;
char gamer[20];

void main()
{
typedef struct node players;
players *p;
int gd=DETECT,gm,x=0,y=0,a=638,b=476,i,j,x1=320,y1=100;
int ch1,ch2,ch3;
initgraph(&gd,&gm,"C:\\TC\\bgi");

p=(struct node*)malloc(sizeof(struct node));
setbkcolor(GREEN);
setfillstyle(SOLID_FILL,WHITE);
bar(120,80,500,380);
line(120,80,70,50);
line(70,50,70,420);
line(70,420,120,380);
line(500,80,550,50);
line(550,50,550,420);
line(550,420,500,380);
circle(100,20,10);
circle(110,50,10);
circle(50,90,10);
circle(30,300,20);
circle(40,200,15);
circle(200,25,25);
circle(290,35,15);
circle(350,25,20);
circle(410,30,10);
circle(470,35,15);
circle(605,25,25);
circle(610,80,20);
circle(580,140,10);
circle(590,180,20);
circle(600,300,25);
circle(610,380,15);
circle(400,420,25);
circle(300,410,20);
circle(180,405,10);
circle(120,425,26);
circle(530,445,25);
circle(490,420,15);
settextstyle(1,0,3);
setcolor(GREEN);
outtextxy(160,90,"SAKSHI DUBEY (13103716)");
settextstyle(1,0,3);
setcolor(GREEN);
outtextxy(160,140,"PUJA KANDEL (13103729) ");
settextstyle(1,0,3);
setcolor(GREEN);
outtextxy(160,190,"SWAPNIL GUPTA (13103463)");
settextstyle(1,0,4);
setcolor(GREEN);
outtextxy(220,250,"LAUNCHING");
settextstyle(1,0,4);
setcolor(GREEN);
outtextxy(250,300,"STATION");
getch();
cleardevice();
setbkcolor(GREEN);
settextstyle(1,0,4);
setcolor(WHITE);
outtextxy(200,50,"INSTRUCTIONS");
settextstyle(1,0,2);
outtextxy(150,150,"You will get three chances");
outtextxy(150,180,"Every spaceship has coin bonus");
outtextxy(150,210,"Maximum coin collector is winner");
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);

circle(100,165,10);
floodfill(100,165,WHITE);
circle(100,195,10);
floodfill(100,195,WHITE);
circle(100,225,10);
floodfill(100,225,WHITE);
circle(300,350,40);
floodfill(300,350,WHITE);
settextstyle(1,0,3);
outtextxy(100,250,"Here is the demo of 7 options available");
setcolor(GREEN);
settextstyle(1,0,2);
outtextxy(270,340,"START");
getch();
cleardevice();

setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
circle(320,640,320);
floodfill(320,640,BLUE);
cleardevice();

landing();
planet();
diamond();
alien();
book();
wifi();
boat();
cleardevice();
setbkcolor(BLACK);
setcolor(WHITE);
//Center Aircraft on 1st page
i=0;y1=300;
line(x1,y1,x1+30,y1+30);
line(x1+30,y1+30,x1-30,y1+30);
line(x1-30,y1+30,x1,y1);
//Body
setfillstyle(SOLID_FILL,GREEN),
rectangle(x1-25,y1+30,x1+25,y1+100);

bar(x1-25,y1+30,x1+25,y1+100);
rectangle(x1+25,y1+40,x1+32,y1+90);
rectangle(x1-25,y1+40+i,x1-32,y1+90+i);
setfillstyle(SOLID_FILL,BLUE),
bar(x1-25,y1+40+i,x1-32,y1+90+i);
bar(x1+25,y1+40+i,x1+32,y1+90+i);

setfillstyle(SOLID_FILL,RED),
line(x1-13,y1+100+i,x1-25,y1+120+i);
line(x1+13,y1+100+i,x1+25,y1+120+i);
ellipse(x1,y1+120+i,0,360,25,5);
fillellipse(x1,y1+120+i,25,5);

setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
line(313,420,313,460);
line(310,420,310,460);
line(307,420,307,460);
line(329,420,329,460);
line(326,420,326,460);
line(332,420,332,460);
//1 Aircraft on 1st page
i=0;y1=300;j=100;
line(x1-j,y1,x1-j+30,y1+30);
line(x1+30-j,y1+30,x1-30-j,y1+30);
line(x1-30-j,y1+30,x1-j,y1);
//Body
setfillstyle(SOLID_FILL,RED),
rectangle(x1-25-j,y1+30,x1+25-j,y1+100);
bar(x1-25-j,y1+30,x1+25-j,y1+100);
rectangle(x1+25-j,y1+40,x1+32-j,y1+90);
rectangle(x1-25-j,y1+40+i,x1-32-j,y1+90+i);
setfillstyle(SOLID_FILL,BLUE),
bar(x1-25-j,y1+40+i,x1-32-j,y1+90+i);
bar(x1+25-j,y1+40+i,x1+32-j,y1+90+i);

setfillstyle(SOLID_FILL,RED),
line(x1-13-j,y1+100+i,x1-25-j,y1+120+i);
line(x1+13-j,y1+100+i,x1+25-j,y1+120+i);
ellipse(x1-j,y1+120+i,0,360,25,5);
fillellipse(x1-j,y1+120+i,25,5);

line(208,420,208,460);
line(211,420,211,460);
line(224,420,224,460);
line(227,420,227,460);
line(205,420,205,460);
line(230,420,230,460);

//2nd Aircrafton first page
i=0;j=-200;y1=300;
line(x1+j,y1,x1+30+j,y1+30);
line(x1+30+j,y1+30,x1-30+j,y1+30);
line(x1-30+j,y1+30,x1+j,y1);
//Body
setfillstyle(SOLID_FILL,CYAN),
rectangle(x1-25+j,y1+30,x1+25+j,y1+100);

bar(x1-25+j,y1+30,x1+25+j,y1+100);
rectangle(x1+25+j,y1+40,x1+32+j,y1+90);
rectangle(x1-25+j,y1+40+i,x1-32+j,y1+90+i);
setfillstyle(SOLID_FILL,BLUE),
bar(x1-25+j,y1+40+i,x1-32+j,y1+90+i);
bar(x1+25+j,y1+40+i,x1+32+j,y1+90+i);

setfillstyle(SOLID_FILL,RED),
line(x1-13+j,y1+100+i,x1-25+j,y1+120+i);
line(x1+13+j,y1+100+i,x1+25+j,y1+120+i);
ellipse(x1+j,y1+120+i,0,360,25,5);
fillellipse(x1+j,y1+120+i,25,5);
line(105,420,105,460);
line(108,420,108,460);
line(111,420,111,460);
line(122,420,122,460);
line(125,420,125,460);
line(128,420,128,460);

//4rd Aircraft on 1st page
i=0;j=100;y1=300;
line(x1+j,y1,x1+30+j,y1+30);
line(x1+30+j,y1+30,x1-30+j,y1+30);
line(x1-30+j,y1+30,x1+j,y1);
//Body
setfillstyle(SOLID_FILL,12),
rectangle(x1-25+j,y1+30,x1+25+j,y1+100);

bar(x1-25+j,y1+30,x1+25+j,y1+100);
rectangle(x1+25+j,y1+40,x1+32+j,y1+90);
rectangle(x1-25+j,y1+40+i,x1-32+j,y1+90+i);
setfillstyle(SOLID_FILL,BLUE),
bar(x1-25+j,y1+40+i,x1-32+j,y1+90+i);
bar(x1+25+j,y1+40+i,x1+32+j,y1+90+i);

setfillstyle(SOLID_FILL,RED),
line(x1-13+j,y1+100+i,x1-25+j,y1+120+i);
line(x1+13+j,y1+100+i,x1+25+j,y1+120+i);
ellipse(x1+j,y1+120+i,0,360,25,5);
fillellipse(x1+j,y1+120+i,25,5);
line(430,420,430,460);
line(433,420,433,460);
line(427,420,427,460);
line(415,420,415,460);
line(412,420,412,460);
line(409,420,409,460);

//5th Aircraft on first page
i=0;j=200;y1=300;
line(x1+j,y1,x1+30+j,y1+30);
line(x1+30+j,y1+30,x1-30+j,y1+30);
line(x1-30+j,y1+30,x1+j,y1);
//Body
setfillstyle(SOLID_FILL,7),
rectangle(x1-25+j,y1+30,x1+25+j,y1+100);

bar(x1-25+j,y1+30,x1+25+j,y1+100);
rectangle(x1+25+j,y1+40,x1+32+j,y1+90);
rectangle(x1-25+j,y1+40+i,x1-32+j,y1+90+i);
setfillstyle(SOLID_FILL,BLUE),
bar(x1-25+j,y1+40+i,x1-32+j,y1+90+i);
bar(x1+25+j,y1+40+i,x1+32+j,y1+90+i);

setfillstyle(SOLID_FILL,RED),
line(x1-13+j,y1+100+i,x1-25+j,y1+120+i);
line(x1+13+j,y1+100+i,x1+25+j,y1+120+i);
ellipse(x1+j,y1+120+i,0,360,25,5);
fillellipse(x1+j,y1+120+i,25,5);
line(533,420,533,460);
line(530,420,530,460);
line(527,420,527,460);
line(515,420,515,460);
line(513,420,513,460);
line(510,420,510,460);
//Instrument
setfillstyle(SOLID_FILL,BLUE);
bar(40,100,200,220);
settextstyle(0,0,1);
outtextxy(50,125,"SATELLITE");
settextstyle(0,0,1);
outtextxy(50,150,"WHEATHER");
settextstyle(0,0,1);
outtextxy(50,175,"FUEL");
settextstyle(0,0,1);
outtextxy(50,200,"LAUNCH");
setcolor(GREEN);
for(i=0;i<10;i++)
{
delay(50);
circle(150,125,i);
}
for(i=0;i<10;i++)
{
delay(50);
circle(150,150,i);
}
for(i=0;i<10;i++)
{
delay(50);
circle(150,175,i);
}
for(i=0;i<10;i++)
{
delay(50);
circle(150,200,i);
}
setcolor(WHITE);
settextstyle(2,0,4);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);

printf("PLAYER NAME    ");
fflush(stdin);
gets(player->name);
strcpy(gamer,player->name);
fflush(stdin);
printf("\nWhich aircraft you want to launch\n");
scanf("%d",&ch1);

settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(300,50,"3");
delay(200);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(300,100,"2");
delay(200);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(300,150,"1");
delay(200);
settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
outtextxy(300,200,"GO");
getch();

clrscr();
setcolor(BLUE);
setfillstyle(EMPTY_FILL,BLUE);
fillellipse(640,0,300,200);
setfillstyle(EMPTY_FILL,BLUE);
fillellipse(640,0,250,150);
circle(300,200,20);

cleardevice();

setcolor(BLUE);
setfillstyle(EMPTY_FILL,BLUE);
fillellipse(640,0,300,200);
setfillstyle(EMPTY_FILL,BLUE);
fillellipse(640,0,250,150);
setfillstyle(EMPTY_FILL,BLUE);
fillellipse(640,0,200,100);
setfillstyle(EMPTY_FILL,BLUE);
fillellipse(640,0,150,50);

setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(420,85,20);
floodfill(420,85,YELLOW);

setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
circle(530,175,20);
floodfill(530,175,GREEN);

setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(520,30,15);
floodfill(520,30,RED);

setcolor(BROWN);
setfillstyle(SOLID_FILL,BROWN);
circle(600,100,20);
floodfill(600,100,BROWN);

setcolor(WHITE);
	for(i=0,j=4;i<4;i++,j--)
	{
	delay(500);
	circle(100,100,i);
	circle(480,200,i);
	circle(217,30,i);
	circle(400,320,i);
	circle(30,517,i);
	circle(90,223,i);
	circle(223,90,i);
	circle(624,319,j);
	circle(135,157,j);
	circle(194,357,j);
	circle(243,167,j);
	circle(333,222,j);
	circle(111,444,j);
	circle(320,240,j);
	circle(456,390,i);
	circle(260,123,i);
	circle(319,234,i);
	circle(10,90,i);
	circle(120,420,j);
	circle(56,157,j);
	circle(309,440,j);
	}
getch();
y1=100;
for(i=250;i>0;i--)
{
setfillstyle(SOLID_FILL,GREEN);
//Triangle
line(x1,y1+i,x1+30,y1+30+i);
line(x1+30,y1+30+i,x1-30,y1+30+i);
line(x1-30,y1+30+i,x1,y1+i);
//Body
setfillstyle(SOLID_FILL,YELLOW),
rectangle(x1-25,y1+30+i,x1+25,y1+100+i);
bar(x1-25,y1+30+i,x1+25,y1+100+i);
rectangle(x1+25,y1+40+i,x1+32,y1+90+i);
rectangle(x1-25,y1+40+i,x1-32,y1+90+i);
setfillstyle(SOLID_FILL,BLUE),
bar(x1-25,y1+40+i,x1-32,y1+90+i);
bar(x1+25,y1+40+i,x1+32,y1+90+i);

setfillstyle(SOLID_FILL,RED),
line(x1-13,y1+100+i,x1-25,y1+120+i);
line(x1+13,y1+100+i,x1+25,y1+120+i);
ellipse(x1,y1+120+i,0,360,25,5);
fillellipse(x1,y1+120+i,25,5);

setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
j=i;
line(313,y1+120+j,313,y1+160+j);
line(310,y1+120+j,310,y1+160+j);
line(307,y1+120+j,307,y1+160+j);
line(329,y1+120+j,329,y1+160+j);
line(326,y1+120+j,326,y1+160+j);
line(332,y1+120+j,332,y1+160+j);

delay(5);
cleardevice();
}
	switch(ch1)
	{
	case 1:
		{
		alien();
		cleardevice();
		break;
		}
	case 2:
		{
		book();
		cleardevice();
		break;
		}
	case 3:
		{
		diamond();
		cleardevice();
		break;
		}
	case 4:
		{
		landing();
		cleardevice();
		break;
		 }
	case 5:
		{
		boat();
		cleardevice();
		break;
		}
	case 6:
		{
		planet();
		cleardevice();
		break;
		}
	case 7:
		{
		wifi();
		cleardevice();
		break;
		}
	}
cleardevice();
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
printf("SECOND CHANCE\n Try your luck !!!\nChoose another aircraft\n");
fflush(stdin);
scanf("%d",&ch2);
fflush(stdin);
getch();
	switch(ch2)
	{
	case 1:
		{
		alien();
		cleardevice();
		break;
		}
	case 2:
		{
		book();
		cleardevice();
		break;
		}
	case 3:
		{
		diamond();
		cleardevice();
		break;
		}
	case 4:
		{
		landing();
		cleardevice();
		break;
		}
	case 5:
		{
		boat();
		cleardevice();
		break;
		}
	case 6:
		{
		planet();
		cleardevice();
		break;
		}
	case 7:
		{
		wifi();
		cleardevice();
		break;
		}
	}
cleardevice();
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
printf("LAST CHANCE\n This may be a JACKPOT !!!\nChoose aircraft\n");
scanf("%d",&ch3);
getch();
	switch(ch3)
	{
	case 1:
		{
		alien();
		cleardevice();
		break;
		}
	case 2:
		{
		book();
		cleardevice();
		break;
		}
	case 3:
		{
		diamond();
		cleardevice();
		break;
		}
	case 4:
		{
		landing();
		cleardevice();
		break;
		 }
	case 5:
		{
		boat();
		cleardevice();
		break;
		}
	case 6:
		{
		planet();
		cleardevice();
		break;
		}
	case 7:
		{
		wifi();
		cleardevice();
		break;
		}
	 }
score();
}

void score()
{
cleardevice();
setbkcolor(RED);
setcolor(WHITE);
settextstyle(1,0,6);
outtextxy(200,50,"SCORE CARD\n\n");
settextstyle(1,0,4);
outtextxy(200,250,"Congratulations !!!");
printf("\n\tPLAYER  %s\n",gamer);
printf("\n\tCOINS   %d",coins-27);
getch();
}
void alien()
{
cleardevice();
setbkcolor(BLACK);
setfillstyle(SOLID_FILL,YELLOW);
bar(80,100,200,230);
setfillstyle(SOLID_FILL,BLUE);
bar(100,230,180,280);
setfillstyle(SOLID_FILL,RED);
bar(120,280,130,340);
setfillstyle(SOLID_FILL,RED);
bar(150,280,160,340);
line(120,100,70,50);
line(160,100,210,50);
setfillstyle(SOLID_FILL,BLACK);
circle(70,50,10);
floodfill(70,50,BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(210,50,10);
floodfill(210,50,BLACK);
circle(125,345,10);
circle(155,345,10);

line(100,230,70,280);
line(180,230,210,280);
setfillstyle(SOLID_FILL,BLACK);
bar(100,140,120,160);
setfillstyle(SOLID_FILL,BLACK);
bar(160,140,180,160);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(500,80,15);
floodfill(500,80,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(560,80,15);
floodfill(560,80,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(620,80,15);
floodfill(620,80,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(440,80,15);
floodfill(440,80,YELLOW);
settextstyle(1,0,3);
setcolor(WHITE);
outtextxy(450,20,"COIN EARNED");
settextstyle(1,0,7);
setcolor(WHITE);
outtextxy(500,80,"4");
settextstyle(1,0,3);
setcolor(WHITE);
outtextxy(360,150,"CONGOO YOU HAVE MET");
settextstyle(1,0,3);
setcolor(WHITE);
outtextxy(430,180,"AN ALIEN !!!");
ellipse(450,280,0,180,80,60);
ellipse(450,300,0,360,100,30);
line(420,320,380,380);
line(480,320,520,380);
circle(380,380,10);
circle(520,380,10);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(390,300,10);
floodfill(390,300,RED);
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
circle(430,300,10);
floodfill(430,300,GREEN);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(470,300,10);
floodfill(470,300,RED);
setcolor(GREEN);
setfillstyle(SOLID_FILL,GREEN);
circle(510,300,10);
floodfill(510,300,GREEN);
coins=coins+4;
setbkcolor(BLACK);
getch();
}
void diamond()
{
cleardevice();
setbkcolor(BLACK);
setcolor(WHITE);
line(70,100,70,300);
line(0,200,70,100);
line(70,300,0,200);
line(70,100,140,200);
line(70,300,140,200);
line(35,200,70,100);
line(35,200,70,300);
line(105,200,70,100);
line(105,200,70,300);
line(140,250,140,300);
line(120,275,140,250);
line(120,275,140,300);
line(130,275,140,250);
line(130,275,140,300);
line(150,275,140,250);
line(150,275,140,300);
line(160,275,140,250);
line(160,275,140,300);
line(190,250,190,300);
line(170,275,190,250);
line(170,275,190,300);
line(180,275,190,250);
line(180,275,190,300);
line(200,275,190,250);
line(200,275,190,300);
line(210,275,190,250);
line(210,275,190,300);
outtextxy(410,30,"COINS EARNED");
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(315,80,15);
floodfill(315,80,YELLOW);
circle(390,80,15);
floodfill(390,80,YELLOW);
circle(465,80,15);
floodfill(465,80,YELLOW);
circle(540,80,15);
floodfill(540,80,YELLOW);
circle(615,80,15);
floodfill(615,80,YELLOW);
setcolor(WHITE);
settextstyle(1,0,6);
outtextxy(455,130,"5");
settextstyle(1,0,4);
outtextxy(320,200,"CONGRATULATIONS!!!!");
settextstyle(1,0,2);
outtextxy(250,270,"you have earned the venus treasure...");
coins=coins+5;
setbkcolor(BLACK);
getch();
}
void book()
{
cleardevice();
setbkcolor(BLACK);
setcolor(WHITE);
setfillstyle(SOLID_FILL,BLUE);
bar(0,50,80,150);
line(20,40,100,40);
line(0,50,20,40);
line(80,50,100,40);
line(100,40,100,140);
line(80,150,100,140);
line(84,47,84,147);
line(88,47,88,147);
line(92,45,92,145);
line(96,43,96,143);
setfillstyle(SOLID_FILL,GREEN);

bar(0,300,80,400);
setfillstyle(LINE_FILL,WHITE);
setcolor(WHITE);
line(20,290,100,290);
line(0,300,20,290);
line(100,290,80,300);
line(100,390,100,290);
line(80,400,100,390);

line(264,167,264,267);
line(270,167,270,267);
line(276,164,276,264);
line(84,297,84,397);
line(87,297,87,397);
line(90,296,90,396);
line(93,295,93,395);

setfillstyle(SOLID_FILL,RED);
bar(180,170,260,270);
line(180,170,200,160);
line(200,160,280,160);
line(280,160,280,260);
line(260,270,280,260);
line(260,170,280,160);
settextstyle(1,0,1);
outtextxy(28,80,"DS");
outtextxy(28,330,"DS");
outtextxy(208,200,"DS");
outtextxy(410,30,"COINS EARNED");
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(390,80,15);
floodfill(390,80,YELLOW);
circle(465,80,15);
floodfill(465,80,YELLOW);
circle(540,80,15);
floodfill(540,80,YELLOW);
settextstyle(1,0,6);
outtextxy(455,130,"3");
settextstyle(1,0,2);
outtextxy(400,200,"Increase your");
outtextxy(400,300,"knowledge !!");
settextstyle(1,0,3);
outtextxy(400,250,"DATA STRUCTURES");
coins=coins+3;
setbkcolor(BLACK);
getch();
}
void planet()
{
cleardevice();
setbkcolor(BLACK);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(485,250,150);
floodfill(485,250,YELLOW);
setcolor(GREEN);
ellipse(480,250,70,40,160,55);
ellipse(480,250,70,40,161,56);
ellipse(480,250,70,40,162,57);
ellipse(480,250,70,40,163,58);
ellipse(480,250,70,40,164,59);
ellipse(480,250,70,40,165,60);
ellipse(480,250,70,40,166,61);
ellipse(480,250,70,40,167,62);
ellipse(480,250,70,40,168,63);
ellipse(480,250,70,40,169,64);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
arc(485,250,0,180,150);
floodfill(485,250,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
bar(351,180,618,230);
floodfill(485,250,YELLOW);
settextstyle(1,0,3);
outtextxy(30,30,"COINS EARNED");
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(75,80,15);
floodfill(75,80,YELLOW);
circle(135,80,15);
floodfill(135,80,YELLOW);
circle(195,80,15);
floodfill(195,80,YELLOW);
circle(15,80,15);
floodfill(15,80,YELLOW);
circle(250,80,15);
floodfill(250,80,YELLOW);
circle(310,80,15);
floodfill(310,80,YELLOW);
settextstyle(1,0,2);
setcolor(WHITE);
settextstyle(1,0,6);
outtextxy(135,120,"6");
settextstyle(1,0,2);
outtextxy(25,180,"EUREKA!!");
outtextxy(0,220,"YOU HAVE DISCOVERED A" );
outtextxy(0,240," NEW PLANET.....!");
coins=coins+6;
setbkcolor(BLACK);
getch();
}
void wifi()
{
cleardevice();
setbkcolor(BLACK);
ellipse(150,85,0,180,150,50);
ellipse(150,140,0,180,120,40);
ellipse(150,190,0,180,100,40);
ellipse(150,230,0,180,80,40);
ellipse(150,270,0,180,70,30);
ellipse(150,320,0,180,50,20);
ellipse(150,360,0,180,30,10);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
circle(150,390,15);
floodfill(150,390,WHITE);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(495,30,15);
floodfill(495,30,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(555,30,15);
floodfill(555,30,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
settextstyle(1,0,4);
setcolor(WHITE);
outtextxy(500,60,"2");
settextstyle(1,0,4);
setcolor(WHITE);
outtextxy(400,100,"COINS EARNED");
settextstyle(1,0,4);
setcolor(WHITE);
outtextxy(400,150,"UNIVERSAL WIFI");
settextstyle(2,0,7);
setcolor(WHITE);
outtextxy(400,200,"FB,TWITTER,WHATSAPP...");
settextstyle(1,0,2);
setcolor(WHITE);
outtextxy(380,250,"AND YAA WEBKIOSK ALSO ");
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(550,320,25);
floodfill(550,320,YELLOW);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(540,315,2);
floodfill(540,315,BLACK);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(560,315,2);
floodfill(560,315,BLACK);
line(545,330,558,330);
coins=coins+2;
setbkcolor(BLACK);
getch();
}
void boat()
{
cleardevice();
setbkcolor(BLACK);
setcolor(BLUE);
line(350,280,550,280);
line(390,330,510,330);
line(350,280,390,330);
line(550,280,510,330);
line(450,280,450,100);
line(450,100,550,280);
line(0,330,640,330);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(80,60,30);
floodfill(80,60,YELLOW);
setbkcolor(WHITE);
setfillstyle(SOLID_FILL,1);
settextstyle(1,0,4);
setcolor(BLUE);
outtextxy (90,180,"BETTER LUCK NEXT TIME !!!");
bar(0,330,640,480);
getch();
cleardevice();
setcolor(CYAN);
coins=coins+0;
setbkcolor(BLACK);
}
void landing()
{
int x1=320,y1,i;
cleardevice();
setbkcolor(BLACK);
setcolor(BLUE);
setfillstyle(SOLID_FILL,BLUE);
circle(320,600,320);
floodfill(390,100,BLUE);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(130,30,15);
floodfill(130,30,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(200,30,15);
floodfill(200,30,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(270,30,15);
floodfill(270,30,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(340,30,15);
floodfill(340,30,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(400,30,15);
floodfill(400,30,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(460,30,15);
floodfill(460,30,YELLOW);
setcolor(YELLOW);
setfillstyle(SOLID_FILL,YELLOW);
circle(540,30,15);
floodfill(540,30,YELLOW);
settextstyle(1,0,7);
setcolor(WHITE);
outtextxy(300,70,"7");
settextstyle(1,0,3);
setcolor(WHITE);
outtextxy(200,150,"CONGRATULATION !!!! ");
settextstyle(1,0,3);
setcolor(WHITE);
outtextxy(150,200,"SUCCESSFULLY LANDED... ");
getch();
coins=coins+7;
setbkcolor(BLACK);
getch();
cleardevice();
}

