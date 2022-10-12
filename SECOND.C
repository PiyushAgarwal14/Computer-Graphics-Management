#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main(){

	int gd=DETECT,gm,x,y;
	initgraph (&gd,&gm, "C:\\TC\\BGI");

    x=(getmaxx())/2;
    y=(getmaxy())/2;
    
    line(0,y,getmaxx(),y);
    line(x,0,x,getmaxy());
    
    circle(150,150,40);
    
    ellipse(500,150,0,360,70,35);
    
    rectangle(150,300,250,400);
    
    line(500,300,350,400);
    line(500,300,650,425);
    line(350,400,650,417);
    
	getch();
	closegraph();
 return 0;
}