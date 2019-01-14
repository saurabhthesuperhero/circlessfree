#include<saurabh.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");
int x=0,y=0,r=2,col=1,yc=0,xc=getmaxx();
int ctr=0,c=1;
while(!kbhit())
{

if(c==1)
{
x=x+10;
y=y+10;
setcolor(col++);
circle(x,y,r);
outtextxy(x,y,"hi");
r=r+5;
ctr++;

if(ctr>50)
{
cleardevice();
ctr=0;
c=2;
r=2;
xc=getmaxx();
yc=0;
}
}

else if(c==2)
{
xc=xc-10;
yc=yc+10;
setcolor(col++);
circle(xc,yc,r);
r=r+5;
ctr++;

if(ctr>50)
{
cleardevice();
ctr=0;
c=1;
r=2;
x=5;
y=5;
}
}

delay(100);

}
getch();
}