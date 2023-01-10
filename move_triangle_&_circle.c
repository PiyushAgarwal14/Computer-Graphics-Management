#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main(){

    int n,gd=DETECT,gm;

    initgraph (&gd, &gm, "C:\\TC\\BGI");
    
    for(n=1; n<=100;n++){
        cleardevice();
        
        line(150+n,100,100+n,200);
        line(150+n,100,200+n,200);
        line(100+n,200,200+n,200);
        circle(150+n,170,20);
        delay(10);
    }
    
    getch();
    closegraph();
}
