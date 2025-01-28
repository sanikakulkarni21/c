#include <stdio.h>
#include <graphics.h>
#include <conio.h>
 
void drawBarChart(int m1, int m2, int m3){
    
    rectangle(100,  300, 150, 300-m1);
    rectangle(200,  300, 250, 300-m2);
    rectangle(300,  300, 350, 300-m3);
}
 
int main() {  
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // Draw a bar chart
    drawBarChart(100,60,40);
    getch();
    closegraph();
    return 0;
}
 