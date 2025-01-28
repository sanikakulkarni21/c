#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main () {
int gd = DETECT, gm;

initgraph(&gd, &gm, "");
setfillstyle(SOLID_FILL, YELLOW);

rectangle(50, 100, 240, 200);
      
 getch();    
 closegraph();
return 0; 
}