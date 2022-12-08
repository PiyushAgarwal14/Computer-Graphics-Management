#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT,gm;
    initgraph (&gd, &gm, "C:\\TC\\BGI");
    setcolor(5);
    outtextxy(250,250, "Pyush Agarwal");
    getch();
    closegraph();
    return 0;
}
