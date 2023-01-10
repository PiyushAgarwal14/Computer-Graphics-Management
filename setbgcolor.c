#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main(){
    
    int n,gd=DETECT,gm;

    initgraph (&gd, &gm, "C:\\TC\\BGI");
    
    printf("Enter a Number between 0-15\n");
    scanf("%d", &n);
    
    setbkcolor(n);
    
    getch();
    closegraph();
}
