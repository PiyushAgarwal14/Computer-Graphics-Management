#include <stdio.h>
#include <conio.h>
#include <graphics.h>

  
void main()
{
    int gd = DETECT, gm, i;
    
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    
    for(i =1; i<=50; i++){
        cleardevice();
        circle(50+i,100,50);
        line(100,0+i,100,50+i);
        line(100,150-i,55,175-i);
        line(100,150-i,145,175-i);
        outtextxy(0+i,200, "MERCEDES-BENZ");
        delay(50);
    } 
    
    getch();
    closegraph();
}
