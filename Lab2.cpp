#include <graphics.h>
#include <conio.h>
#include <iostream>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    setcolor(WHITE);
    circle(100, 150, 20);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(100, 150, WHITE);
    int arr[] = {100, 50, 150, 100, 50, 100, 100, 50};
    drawpoly(4, arr);
    int rectangle[] = {100, 50, 150, 100, 262, 100, 212, 50, 100, 50};
    setfillstyle(SOLID_FILL, RED);
    fillpoly(5, rectangle);
    int rectanglel[] = {50, 100, 150, 100, 150, 200, 50, 200, 50, 100};
    drawpoly(5, rectanglel);
    int rectangle2[] = {150, 100, 150, 200, 262, 200, 262, 100, 150, 100};
    drawpoly(5, rectangle2);
    int rectangle3[] = {162, 112, 182, 112, 182, 142, 162, 142, 162, 112};
    drawpoly(5, rectangle3);
    int rectangle4[] = {227, 112, 247, 112, 247, 142, 227, 142, 227, 112};
    drawpoly(5, rectangle4);
    int rectangle5[] = {197, 150, 217, 150, 217, 200, 197, 200, 197, 150};
    drawpoly(5, rectangle5);
    getch();
    closegraph();
    return 0;
}
