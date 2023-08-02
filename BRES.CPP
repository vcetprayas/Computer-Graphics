#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void bsline (int x, int y, int x2, int y2)
{
int dx, dy ,p;
dx=x2-x;
dy=y2-y;
p=2*(dy)-dx;
while(x<=x2)
{
if(p<=0)
{

y=y+1;
p=p+2*dy-2*dx;
putpixel(x,y,7);
delay(50);
}
else
{
putpixel(x,y,7);
p=p+2*dy;
}
x=x+1;
}
}
void main()
{
int gdriver =DETECT,gmode,error,x1,y1,x2,y2;
initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

cout<<"Enter the x1,y1 values:";
cin>>x1>>y1;
cout<<"Enter the x2,y2 values:";
cin>>x2>>y2;
bsline (x1,y1,x2,y2);
getch();

}
