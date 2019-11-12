
#include<graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<time.h>
#include<iostream.h>
#include<string.h>
struct lad
{
int b,rank,tpointer,apointer,gpointer,totalpointer;
char name[20];
};
struct lad s[3];
#include"typing.h"
#include"game.h"
#include"leaderbord.h"
int total1,total2;
int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   int i,qpoint1,qpoint2,total1[3];//point=0;
   char player1[20],player2[20];
   int typepoint[5];
   float timepoint[5];
   int gpoint[5];
   int apoint[5];

   clrscr();
  char ch;
  cout<<"ENTER  NAME OF FIRST PLAYER   :  ";
  gets(player1);
  cout<<"\n ENTER NAME OF SECOND PLAYER    :   ";
  gets(player2);

   initgraph(&gdriver, &gmode, "");

   settextstyle(3,0,4);
   outtextxy(200,100,"   ROUND 1  ");
   outtextxy(200,150,"TYPING TEST");
   outtextxy(20,240,"THIS IS TYPING TEST WHICH FIND");
   outtextxy(20,280," MISTAKES AND SPEED OF PLAYER");
   outtextxy(20,340,"SO, START TYPING FAST AS YOU CAN\n");
   outtextxy(20,380,"PRESS ENTER TO START....");
   getch();
   cleardevice();
   closegraph();
  for(int j=0;j<2;j++)
  {
  clrscr();

  cout<<"player : "<<j+1<<"\n\n";

  type(j,typepoint,timepoint);
  }
  typepoint[0]=typepoint[0]*2;
  typepoint[1]=typepoint[1]*2;
  if(timepoint[0]>timepoint[1])
  {
   typepoint[1]=typepoint[1]+((timepoint[0]-timepoint[1])*typepoint[1])/2;
   }
   else
   {
   typepoint[0]=typepoint[0]+((timepoint[1]-timepoint[0])*typepoint[0])/2;
   }

  clrscr();
   initgraph(&gdriver, &gmode, "");

   if(typepoint[0]>typepoint[1])
   {

   s[0].b=1;
   strcpy(s[0].name,player1);
   s[0].rank=1;
   s[0].tpointer=typepoint[0];
   s[0].apointer=0;

   s[0].gpointer=0;
   s[0].totalpointer=typepoint[0];
   s[1].b=2;
   strcpy(s[1].name,player2);
   s[1].rank=2;
   s[1].tpointer=typepoint[1];
   s[1].apointer=0;
   s[1].gpointer=0;
   s[1].totalpointer=typepoint[1];
   lader(s);

   getch();
   cleardevice();
   }
   else if(typepoint[0]<typepoint[1])
   {
   s[0].b=1;
   strcpy(s[0].name,player2);
   s[0].tpointer=typepoint[1];
   s[0].rank=1;
   s[0].apointer=0;
   s[0].gpointer=0;
   s[0].totalpointer=typepoint[1];
   s[1].b=2;
   strcpy(s[1].name,player1);
   s[1].rank=2;
   s[1].tpointer=typepoint[0];
   s[1].apointer=0;
   s[1].gpointer=0;
   s[1].totalpointer=typepoint[0];
   lader(s);

   getch();
   cleardevice();
   }
   else
   {

   s[0].b=1;
   strcpy(s[0].name,player1);
   s[0].rank=1;
   s[0].tpointer=typepoint[0];
   s[0].apointer=0;
   s[0].gpointer=0;
   s[0].totalpointer=typepoint[0];
   s[1].b=2;
   strcpy(s[1].name,player2);
   s[1].rank=1;
   s[1].tpointer=typepoint[1];
   s[1].apointer=0;
   s[1].gpointer=0;
   s[1].totalpointer=typepoint[1];
     lader(s);


     getch();
       cleardevice();


   }
   closegraph();
     initgraph(&gdriver, &gmode, "");
   settextstyle(3,0,4);
   outtextxy(200,100,"   ROUND 2  ");
   outtextxy(200,200,"APTITUDE TEST");
   getch();
   cleardevice();
   closegraph();
   clrscr();
   int newtotal=0;
    j=0;

  do
  {

      newtotal=0;

     {

       initgraph(&gdriver, &gmode, "");
     //Q 1 *****************************************************//
	  outtextxy(0,30,"QUESTION NO. ");
	cout<<"player   :"<<j+1<<"\n";

			  settextstyle(3,0,1);
	  outtextxy(100,30,"    1  :  ");
	 printf("\n\nint main()\n {\n   int x[10]={0,1,2,3,4,5,6,7,8,9};\n");
	 printf("   int *ptr=&x[0];\n  *ptr=&x[5];\n");
	 printf("  cout<<(ptr1+ptr2);\n  }");
	 cout<<"\n\n";

	 rectangle(50,150,140,180);
	 outtextxy(73,150,"A : 5 ");
	   rectangle(150,150,240,180);
	   outtextxy(173,150,"B : 6 ");

	  rectangle(250,150,340,180);

	 outtextxy(273,150,"C : 0 ");

	   rectangle(350,150,600,180);

	   outtextxy(373,150,"D : NONE OF THIS ");

	   cout<<"\n\n\n\n\n\n\n\n\n        :";
	  gotoxy(10,170);
	  do
	  {

	     cout<<"\n->";
	     cin>>ch;
	    if(ch=='D'||ch=='d')
	    {
	    newtotal++;
	    cout<<"CORRECT \n  OUTPUT : error :INVALID OPERANDS TO BINARY +(HAVE 'int*' and 'int *')";
	    getch();
	    break;
	    }
	   else if(ch=='a'||ch=='A'||ch=='b'||ch=='B'||ch=='C'||ch=='c')
	    {
	    cout<<"WRONG\n: error :INVALID OPERANDS TO BINARY +(HAVE 'int*' and 'int *')";
	    getch();
	    break;

	    }
	    else
	    {
	    cout<<"enter choice bitween (A-D)";
	    }
	   }while(1);
	   getch();
	   cleardevice();
	   closegraph();
	   clrscr();
	}

	   //Q 2***********************************************//


	 {
	    initgraph(&gdriver, &gmode, "");
		 settextstyle(3,0,1);
		   cout<<"QUESTION  ";
		 outtextxy(100,0,"  2  :find missing number  ");
		 int h=0;
		 int a,b,c,d;
	 //a=8;
		 for(i=1;i<6;i++)
		 {

		  switch(i)
		  {
		    case 1:{outtextxy(44+h,40,"8");
		    outtextxy(79+h,40,"7");
		    outtextxy(44+h,75,"10");
		    outtextxy(79+h,75,"10");

			 break;  }
			 case 2:
		    {
		    outtextxy(44+h,40,"12");
		 outtextxy(79+h,40,"12");
		 outtextxy(44+h,75,"9");
		 outtextxy(79+h,75,"21");
		    break;
		   }
		  case 3:{
		  outtextxy(44+h,40,"4");
		  outtextxy(79+h,40,"1");
		  outtextxy(44+h,75,"8");
		    outtextxy(79+h,75,"4");
		   break;
		  }
	    case 4:{
	    outtextxy(44+h,40,"2");
	    outtextxy(79+h,40,"4");
	    outtextxy(44+h,75,"1");
	    outtextxy(79+h,75,"7");
	    break;
	    }
	    case 5:{
	    outtextxy(44+h,40,"6");
	    outtextxy(79+h,40,"3");
	    outtextxy(44+h,75,"9");
	    outtextxy(79+h,75," ");
	    break;
	    }


	  }



	 circle(70+h,70,40);
	 line(h+30,70,h+110,70);
	 line(70+h,30,70+h,110);
	 h=h+100;
	 }


	rectangle(50,150,140,180);
	 outtextxy(73,150,"A : 4 ");
	   rectangle(150,150,240,180);
	   outtextxy(173,150,"B : 5 ");

	  rectangle(250,150,340,180);

	 outtextxy(273,150,"C : 3 ");

	   rectangle(350,150,500,180);

	   outtextxy(373,150,"D : 12");



	   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n      :";
	  do{
	    cout<<"\n->";
	    cin>>ch;
	    if(ch=='c'||ch=='c')
	   {
	   newtotal++;
	   cout<<"\n\CORRECT";
	   getch();
	   break;
	   //total1[i]=total1[i]+4;
	   }
	   else if(ch=='a'||ch=='A'||ch=='b'||ch=='B'||ch=='D'||ch=='d')
	    {
	    cout<<"WRONG\n: ";
	    getch();
	    break;

	    }
	    else
	    {
	    cout<<"enter choice bitween (A-D)";
	    }
	   }while(1);



	 getch();

	 cleardevice();
	 closegraph();

	 getch();
	 clrscr();
       }
	//****************************************//
     s[j].totalpointer=s[j].totalpointer+newtotal;
     s[j].apointer=newtotal;
     j++;
   }while(j!=2);
   if(s[0].totalpointer<s[1].totalpointer)
   {
   s[0].rank=2;
   s[1].rank=1;
   }
   else
   {
   s[0].rank=1;
   s[1].rank=2;
   }
   initgraph(&gdriver, &gmode, "");
   lader(s);
   closegraph();
  getch();

  //************************game pont*******************

       //#PARSE
     initgraph(&gdriver, &gmode, "");

settextstyle(3,0,4);
   outtextxy(200,80,"   ROUND 3  ");
   outtextxy(200,120,"GAME") ;
    outtextxy(70,180,"  IN THIS TASK ONE WHO IS");
    outtextxy(70,220,"  REACH THE TOP OF LADER ");
    outtextxy(70,260,"  IS WINNER OF THIS GAME");
   getch();
   cleardevice();
   closegraph();


   //getch();
   clrscr();
   int playerno;
   playerno=gmain();
   newtotal=10;
   if(playerno%2==0)
   {
   j=0;
   }
   else
   {
   j=1;
   }
      s[j].totalpointer=s[j].totalpointer+newtotal;
     s[j].gpointer=newtotal;
  if(s[0].totalpointer<s[1].totalpointer)
   {
   s[0].rank=2;
   s[1].rank=1;
   }
   else
   {
   s[0].rank=1;
   s[1].rank=2;
   }
     initgraph(&gdriver, &gmode, "");
   lader(s);
   closegraph();
   return 0;
}
