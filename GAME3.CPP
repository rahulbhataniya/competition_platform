#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdio.h>
#include<graphics.h>
#include<iostream.h>
#include<stdlib.h>
#include<time.h>

int cor=190;
int count=0;
void show();
int out1=0;
int out2=0;


void man1()
{
circle(40,200,10);
line(38,210,20,225);
line(46,210,66,225);
line(20,225,20,270);
line(66,225,66,270);
//...........................//
line(20,270,10,310);
line(43,270,33,310);
line(43,270,53,310);
line(66,270,76,310);
rectangle(10,310,40,315);
rectangle(53,310,86,315);

}
//.................man3 bottom....................
void man3()
{
circle(520,260,7);
line(518,265,500,280);
line(526,265,546,280);
line(500,280,500,325);
line(546,280,546,325);
//...........................//
line(500,330,490,370);
line(523,330,510,370);
line(523,330,530,370);
line(546,330,553,370);
rectangle(490,370,520,375);
rectangle(533,370,566,375);
outtextxy(492,378,"player 2 target");

}
//.............man2.................//
void man2()
{
circle(540,50,7);
line(538,55,520,70);
line(546,55,566,70);
line(520,70,520,115);
line(566,70,566,115);
//...........................//
line(520,120,510,160);
line(543,120,530,160);
line(543,120,550,160);
line(566,120,573,160);
rectangle(510,160,540,165);
rectangle(553,160,586,165);
outtextxy(512,168,"player 1 target");
}


void plate(int cord)
{
    settextstyle(6,0,1);
    rectangle(0,0,200,100);
  outtextxy(7,5,"\nupper motio  press a");
 outtextxy(7,23,"\ndown motio press z");
 outtextxy(7,40,"\nfor shooting press s");
 outtextxy(7,55,"\n  x  for exit\n");


 if(cor>140&&cor<240)
 {
   if(cord>0)
   {
   count++;
   }
   else if(cord<0)
   {
   count--;
   }
   else
   {
   count=count;
   }
cor=cord+cor;
}
 man1();
 if(out1==0)
 man2();
 if(out2==0)
 man3();

//'''''''''''''''dhanush'''''''''''''''//

arc(100,180,320,80,20);
arc(100,215,280,40,20);
line(100,160,100,235); //dhaga//
line(100,200,140,cor+10);//tir//
//..........................//
//...........hands..............//
line(20,225,115,190);
line(20,225,100,192);
//..........................//
}
void motion()
{
int ch1;
char ch2;
/*outtextxy(5,5,"\nupper motio  press a");
outtextxy(5,20,"\ndown motio press z");
outtextxy(5,35,"\nfor shooting press s");
outtextxy(5,50,"\n  x  for exit\n");   */
cout<<"\n\n\n\n\n\n";
do
{
  ch2=getche();
  ch1=ch2;
 if(ch1==97)
 {
 cleardevice();
 plate(-5);
 }
 else if(ch1==122)
 {
 cleardevice();
 plate(5);
 }
 else if(ch1==120)
 {

 exit(1);
 }
}while(ch1!=115);
show();




}
void main()
{
int gdrive=DETECT,gmode;

int tern=0;
while(out1!=1||out2!=1)
{
 initgraph(&gdrive,&gmode,"");
 srand(time(NULL));
  cor=190;
  count=0;
 cor=cor+rand()%10;
 tern=tern+1;
 if(tern==1)
 { cleardevice();
  outtextxy(250,200,"player one tern");
  getch();
  cleardevice();
 }
  if(tern==3)
 {
   cleardevice();
  outtextxy(250,200,"player two tern");
  getch();
  cleardevice();
 }
 if(cor==190||cor==191)
 {
 count=0;
 }
 else if(cor>191&&cor<195)
 {
 count=1;
 }else if(cor>=195&&cor<=197)
 {
 count=2;
 }
 else{count=3;}


 plate(0);
 motion();
//.......................man...................//
 closegraph();
 clrscr();
 getch();
}
}
void show()
{
 int i;
 int h=0;


  int x=0,y=0;
 h=5*count;

 getch();
 for(i=0;i<700;i++)
 {
	 plate(0);
	 line(100+i,200+h,140+i,200+h);
	  //********************out condition  ********
	   if((140+i)<=545&&(140+i)>=530&&(200+h)<=57&&(200+h)>43)
		  {
		 out1=1;


		  }
		if((140+i)>=513&&(140+i)<=520&&(200+h)<=263&&(200+h)>=253)
		    {
		       out2=1;

		    }

  //********************************************
      if(i%30==0)
      {
	 // k=h;
	  if(h>0)
	  h=h+count;
	  else if(h<0)
	   {
		 if(count<5)
		  h=h-10;
		 else
		 h=h-count;
	   }
	  else
	 {
	  h=0;
	  }


     /*	if(i>350&&i<450)
	 {
	  sleep(1);
	  }
       */


	  cleardevice();
      }

 }

 if(out1==1)
 {
 rectangle(0,350,200,380);
 settextstyle(1,0,3);
 outtextxy(7,352,"player 1 is out ");
 }
 if(out2==1)
 {
 rectangle(0,391,200,420);
 settextstyle(1,0,3);
 outtextxy(7,393,"player 2 is out ");

 }

 getch();
}


