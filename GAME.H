/*#include<graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<time.h>
#include<iostream.h>   */
int k;
void drawlader(int pos,int m)
{
  int pos1,pos2;
    int f,p2;
      settextstyle(0,0,1);
   if(m==1)
   {
   pos1=pos;
    line(90,90,90,230);
    line(120,90,120,230);
    f=0;
    int p;
       outtextxy(80,115,"6->");
      for(p=1;p<=8;p++)
     {
     line(90,110+f,120,110+f);
     f=f+20;
     }
     circle(105,pos1,5);


   }
    else
    {
     f=0;

	    pos2=pos;
      line(180,90,180,230);
	line(220,90,220,230);
	 outtextxy(170,113,"6->");
	for(p2=1;p2<=8;p2++)
    {
     line(180,110+f,220,110+f);

      f=f+20;
    }
    circle(200, pos2,5);

    }

}
int position()
{

      int pos=0;
    k=rand() % 7;
    if(k==0)
    {
   k=1;
   }
   switch(k)
   {
     case 6:pos=120;
	    break;
	    case 5:pos=140;
	    break;
	    case 4:pos=160;
	    break;
	    case 3:pos=180;
	    break;
	    case 2:pos=200;
	    break;
	    case 1:pos=220;
	    break;
    }
    return(pos);
}

int gmain()
{
   /* request auto detection */
   //***EVEN GAME 1***//
   int gdriver = DETECT, gmode, errorcode;
   int i,m,j,pos1=240,p2,pos2=240;



  // initgraph(&gdriver, &gmode, "");

   srand(time(0));
   time_t t;
   srand((unsigned) time(&t));
 //  cleardevice();
   int pos=0,p,f;
   do
   {
    cout<<"\n\nenter 1 for start by first player \n";
    cout<<"\n\nenter 2 for start by second player\n";
  // getch();
    cin>>j;
    if(j==1)
    {
    m=0;
    break;
    }
    else if(j==2)
    {
    m=1;
    break;
    }
    else
    {
    cout<<"\n ENTER CHOICE IS WRONG PRESS VALID KEY\n";

    getch();
    clrscr();
  // goto label;
     }
   }while(1);
  initgraph(&gdriver, &gmode, "");
      cleardevice();
   drawlader(pos1,1);
   drawlader(pos1,2);
   getch();
   while((pos)!=120)
   {
      cleardevice();

      pos=position();

    line(160,50,160,250);

    settextstyle(4,0,2);
    if(m%2==0)
    { outtextxy(20,10,"player 1 tern");

   drawlader(pos2,2);
   }
   else
   {outtextxy(200,10,"player 2 tern");

   drawlader(pos1,1);
   }

   char arrv[3];
    if(m%2==0)
   { // getch();
   outtextxy(300,80,"VALUE IS :");
   rectangle(300,100,400,170);
   sprintf(arrv,"%d",k);
   // cout<<"\r\tvalueis "<<k;
    settextstyle(4,0,5);
   outtextxy(320,110,arrv);
      pos1=pos;
     drawlader(pos1,1);
   }
   else
   { //getch();
      outtextxy(300,80,"VALUE IS :");
   rectangle(300,100,400,170);
   sprintf(arrv,"%d",k);
    settextstyle(4,0,5);
   outtextxy(320,110,arrv);
   //cout<<"\r\t\t\tvalue is"<<k;

    pos2=pos;
    drawlader(pos2,2);
   }
   m++;
   getch();
 }
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ngame is over\n";
 if(m%2==0)
 {
 cout<<"\n  :player 2 is winner\n";
 }
 else
 {
 cout<<"\n  :player 1 is winner";
 }
 m--;
 getch();
   closegraph();
return(m);
  // return 0;
}
