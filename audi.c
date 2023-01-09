#include <stdio.h>
#include <conio.h>
#include <graphics.h>

  
void main()
{
    int gd = DETECT, gm, i;
    
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    
    for(i =1; i<=100; i++){
        cleardevice();
        circle(50+i,100,50);
        circle(320-i,100,50);
        circle(290,0+i,50);
        circle(360,200-i,50);
        outtextxy(150+i,200, "AUDI");
        delay(50);
    } 
    
    getch();
    closegraph();
}
