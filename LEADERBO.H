/*#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<string.h>
#include<time.h>
void main()*/
void lader(struct lad s[])
{
//int gdriver = DETECT, gmode, errorcode;
   int i;
   char arr1[5],arr2[5],arr3[5],arr4[5],rank1[4];
   int midx;
   //initgraph(&gdriver, &gmode, "");
   midx=getmaxx()/2;
 //  midy=getmaxy()/2;
   rectangle(5,20,600,300);
   int h=0;
   for(i=0;i<3;i++)
   {
   line(5,70+h,600,70+h);
   h=h+50;
   }
   //******************************************//
   //score card**********************
   settextstyle(7,0,5);
   outtextxy(midx-90,20,"score card");
   settextstyle(6,0,1);
   outtextxy(10,70,"NAME");
   outtextxy(90,70,"RANK");
   outtextxy(150,70,"TYPING POINT");
   outtextxy(280,70,"APTITUDE TEST");
   outtextxy(400,70,"GAME POINT");
   outtextxy(500,70,"TOTAL");
  // line(10,70,10,300);
      line(92,70,92,300);
      line(143,70,143,300);
	 line(278,70,278,300);
	    line(398,70,398,300);
	       line(498,70,498,300);

      printf("\n\n\n\n\n\n");
      if(s[0].rank==1)
      {
       for(int y=0;y<2;y++)
       {printf("\n\n\n\n    %-10s %-5d %-15d %-15d %-15d %-5d\n",s[y].name,s[y].rank,s[y].tpointer,s[y].apointer,s[y].gpointer,s[y].totalpointer);
       }
      }
      else
      {
	 for(int y=1;y>=0;y--)
       {printf("\n\n\n\n    %-10s %-5d %-15d %-15d %-15d %-5d\n",s[y].name,s[y].rank,s[y].tpointer,s[y].apointer,s[y].gpointer,s[y].totalpointer);
       }
      }
   getch();

      //cleardevice();
     // closegraph();
}