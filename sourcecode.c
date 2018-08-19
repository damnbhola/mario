// Mario
//visual game in c &amp; c++ language

//here starts the coding of game


#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
int load();
int head();
int screen();
int stageup();
int stagedown();
void face(int,int,int,int);    //declarations
void body(int,int,int,int);
int image();
void jump();

int x=30,y=183;
int poi,jac,e,q;
int main()
{
	int gd=DETECT,gm,j=183,i=20,w,c=1;
	initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");
	e=x;
	q=y;
	load();
	cleardevice();
	image();
	start:
	screen();

if(kbhit())
w=getch();
switch(w)
{

case 97:
{
	e-=6;
cleardevice();
image();
screen();
break;
}
case 100:
{
cleardevice();
e+=6;
image();
screen();
break;
}
case 32:
{
jump();
break;


}
case 115:
{
	cleardevice();
q+=6;
image();
screen();
break;
}

case 112:
{
exit(1);
}
default :
{w='0';
}
}
w=0;

	goto start;
	closegraph();
	return 0;
}

int screen() //main function
{
stageup();
stagedown();
return 0;
}
int stagedown()  //function for stagedown
{int i,j;
for(i=0;i<100;i++) //loop for upperhead
{
	for(j=400;j<460;j++)
     {
 putpixel(i,j,6);   //function for pixels
      }
}
for(i=0;i<100;i++)  //loop for lowerhead
{
       for(j=420;j<480;j++)
       {
       if(j%10>=i%10)
       putpixel(i,j,6);
       else
       putpixel(i,j,0);
       }

 }
 for(i=100;i<300;i++)
 {for(j=450;j<480;j++)
  {putpixel(i,j,4);
  }
 }

 for(i=300;i<500;i++) //loop for upperhead
{
	for(j=400;j<460;j++)
     {
 putpixel(i,j,6);   //function for pixels
      }
}
for(i=300;i<500;i++)  //loop for lowerhead
{
       for(j=420;j<480;j++)
       {
       if(j%10>=i%10)
       putpixel(i,j,6);
       else
       putpixel(i,j,0);
       }


}
for(i=540;i<640;i++) //loop for upperhead
{
	for(j=360;j<460;j++)
     {
 putpixel(i,j,6);   //function for pixels
      }
}
for(i=540;i<640;i++)  //loop for lowerhead
{
       for(j=380;j<480;j++)
       {
       if(j%10>=i%10)
       putpixel(i,j,6);
       else
       putpixel(i,j,0);
       }
}
return 0;
}

int stageup() //functions for stageup
{int i,j;
for(i=0;i<640;i++) //loop for lowerhead
{
	for(j=80;j<100;j++)
     {
 putpixel(i,j,6);   //function for pixels
      }
}
for(i=0;i<640;i++)  //loop for uppperhead
{
       for(j=21;j<80;j++)
       {
       if(j%10>=i%10)
       putpixel(i,j,6);
       else
       putpixel(i,j,0);
       }
}

for(i=0;i<640;i++) //topline
putpixel(i,20,6);

return 0;
}

int head()
{ //developer's name
return 0;
}


int image()     //main function
{
face(poi,jac,e,q);
body(poi,jac,e,q);
return 0;

}
void body(int poi,int jac,int e,int q)   //   function for body
{
for(poi=10+e;poi<29+e;poi++)
{
for(jac=10+q;jac<34+q;jac++)
{
putpixel(poi+e,jac+q,4);
}
}
}

void face(int poi,int jac,int e,int q)  //function for face
{
int i,j;
for(poi=14+e;poi<24+e;poi++)
{
for(jac=5+q;jac<10+q;jac++)          //for eyes
 putpixel(poi+e,jac+q,15);
}
for(poi=14+e;poi<16+e;poi++)
for(jac=3+q;jac<5+q;jac++)
putpixel(poi+e,jac+q,15);

for(poi=16+e;poi<18+e;poi++)
for(jac=3+q;jac<5+q;jac++)
putpixel(poi+e,jac+q,0);

for(poi=18+e;poi<20+e;poi++)
for(jac=3+q;jac<5+q;jac++)
putpixel(poi+e,jac+q,15);

for(poi=20+e;poi<22+e;poi++)
for(jac=3+q;jac<5+q;jac++)
putpixel(poi+e,jac+q,0);


for(poi=22+e;poi<24+e;poi++)
for(jac=3+q;jac<5+q;jac++)
putpixel(poi+e,jac+q,15);

for(poi=14+e;poi<24+e;poi++)
for(jac=2+q;jac<3+q;jac++)                 //for eyes
putpixel(poi+e,jac+q,15);

}


void jump()
{
int page=0,pagei;
while(y>(100))
{
 face(poi,jac,x,y);
 body(poi,jac,x,y);
 delay(1000/60);
 y-=10;
 x+=8;
}
while(y<(190)){
cleardevice();
face(poi,jac,x,y);
body(poi,jac,x,y);
delay(1000/60);
y+=10;
x+=8;
}
y=183;
}




int load()
{
	int i,j,a;
 cleardevice();
 settextstyle(1,0,1);
 outtextxy(200,20,"//CREATED BY ______//");
 settextstyle(1,0,6);
 setcolor(6);
 outtextxy(30,60,"SUPER MARIO");
 outtextxy(135,130,"RETURNS");
 rectangle(30,50,630,220);
 settextstyle(11,0,2);
 setcolor(15);
 outtextxy(468,400,"HIGH SCORE - 000000");
 settextstyle(1,0,2);
 start1:
 setcolor(13);
 outtextxy(140,290,"PRESS ANY KEY TO START");
 delay(500);
 setcolor(0);
 outtextxy(140,290,"PRESS ANY KEY TO START");
 delay(500);
 while(!kbhit())
 {
  goto start1;
  }
 setcolor(15);
 settextstyle(3,0,3);
 rectangle(280,273,400,315);
 outtextxy(290,280,"LOADING");
 do
 {
  for(i=380;i<400;i=i+7)
  {
   setcolor(15);
   outtextxy(i,282,".");
   delay(500);
  }
  for(i=380;i<400;i=i+7)
  {
   setcolor(0);
   outtextxy(i,282,".");
   delay(500);
  }
 
 a++;
 }
 while(a<=2);
 getch();
 return 0;
}

