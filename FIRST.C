 #include <stdio.h>
 #include <conio.h>
 #include <graphics.h>

 int main(){
	int gd=DETECT,gm;

	initgraph (&gd, &gm, "C:\\TURBOC3\\BGI");

	rectangle(100,100,200,200);
	rectangle(50,50,260,200);
	rectangle(260,50,400,200);
	line(130,20,260,50);
	line(130,20,50,50);
	circle(135,35,10);
	line(130,20,400,20);
	line(400,20,400,50);

	// rectangle(500,300,600,350);
	// rectangle(450,300,500,350);
	// line(450,20,500,350);

	circle(300,300,50);
	circle(320,290,10);
	circle(280,290,10);
	arc(300,310,170,6,30);
	getch();
	closegraph();
	return 0;
 }