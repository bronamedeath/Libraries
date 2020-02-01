#include "TXLib.h"
#include <stdlib.h>
#include <cmath>
#include <iostream>
using namespace std;
///file opana.h
/**
It's very nice
*/
void dottedLine (double x, double y, double x1, double y1, int quantity)
{
    int dx;
    int dy;
    double intervalx;
    double intervaly;
    txSetColour (TX_BLACK);
    txSetFillColour (TX_BLACK);
    dx=x1-x;
    intervalx=dx/(quantity-1);
    dy=y1-y;
    intervaly=dy/(quantity-1);
    for (int a=1; a<=quantity; a++)
    {
        txCircle (x, y, 3);
        x+=intervalx;
        y+=intervaly;
    }
}
void triangle (double x, double y, double x1, double y1, double x2, double y2)
{
    POINT triangle [3]= {{x, y}, {x1, y1}, {x2, y2}};
    txPolygon (triangle, 3);
}
void car(int x, int y, int direction, int siz)
{
    if (direction==0)
    {
        txSetColour(TX_BLACK);
        txSetFillColour(RGB(247, 15, 15));
        POINT ostov[7] = {{x, y}, {x+20*siz, y-12*siz}, {x+55*siz, y-12*siz}, {x+75*siz, y}, {x+95*siz, y}, {x+95*siz, y+17*siz}, {x, y+17*siz}};
        txPolygon (ostov, 7);
        POINT dver[5] = {{x+68*siz, y}, {x+52*siz, y-10*siz}, {x+40*siz, y-10*siz}, {x+40*siz, y+15*siz}, {x+68*siz, y+15*siz}};
        txPolygon (dver, 5);
        txSetColour(RGB(16, 176, 235), 1);
        txSetFillColour (RGB(16, 176, 235));
        POINT stecl[4] = {{x+64*siz, y}, {x+49*siz, y-8*siz}, {x+43*siz, y-8*siz}, {x+43*siz, y}};
        txPolygon (stecl, 4);
        POINT stecl2[4] = {{x+37*siz, y-8*siz}, {x+20*siz, y-8*siz}, {x+5*siz, y}, {x+37*siz, y}};
        txPolygon (stecl2, 4);
        txSetColour(TX_BLACK);
        txSetFillColour(TX_BLACK);
        txCircle(x+20*siz, y+17*siz, 10*siz-2);
        txCircle(x+75*siz, y+17*siz, 10*siz-2);
        txSetFillColour(TX_WHITE);
        txCircle (x+20*siz, y+17*siz, 7*siz-2);
        txCircle (x+75*siz, y+17*siz, 7*siz-2);
        txSetFillColour(RGB(234, 255, 0));
        txRectangle(x+95*siz, y+4*siz, x+90*siz, y+10*siz);
    }
    if (direction==1)
    {
        txSetColour(TX_BLACK);
        txSetFillColour(RGB(247, 15, 15));
        POINT ostov[7] = {{x, y}, {x-20*siz, y-12*siz}, {x-55*siz, y-12*siz}, {x-75*siz, y}, {x-95*siz, y}, {x-95*siz, y+17*siz}, {x, y+17*siz}};
        txPolygon (ostov, 7);
        POINT dver[5] = {{x-68*siz, y}, {x-52*siz, y-10*siz}, {x-40*siz, y-10*siz}, {x-40*siz, y+15*siz}, {x-68*siz, y+15*siz}};
        txPolygon (dver, 5);
        txSetColour(RGB(16, 176, 235), 1);
        txSetFillColour (RGB(16, 176, 235));
        POINT stecl[4] = {{x-64*siz, y}, {x-49*siz, y-8*siz}, {x-43*siz, y-8*siz}, {x-43*siz, y}};
        txPolygon (stecl, 4);
        POINT stecl2[4] = {{x-37*siz, y-8*siz}, {x-20*siz, y-8*siz}, {x-5*siz, y}, {x-37*siz, y}};
        txPolygon (stecl2, 4);
        txSetColour(TX_BLACK);
        txSetFillColour(TX_BLACK);
        txCircle(x-20*siz, y+17*siz, 10*siz-2);
        txCircle(x-75*siz, y+17*siz, 10*siz-2);
        txSetFillColour(TX_WHITE);
        txCircle (x-20*siz, y+17*siz, 7*siz-2);
        txCircle (x-75*siz, y+17*siz, 7*siz-2);
        txSetFillColour(RGB(234, 255, 0));
        txRectangle(x-95*siz, y+4*siz, x-90*siz, y+10*siz);
    }
}
void paintBlockOfFlat(int x, int y, int nhouse, int khouse, int siz)
{
    int c=x;
    for (int i=1; i<=nhouse; i++)
    {
        for (int z=1; z<=khouse; z++)
        {
            txSetFillColor (TX_ORANGE);
            txSetColor (TX_BLACK);
            txRectangle(x, y, x+60*siz, y+70*siz);
            txSetFillColor (TX_LIGHTBLUE);
            txRectangle(x+20*siz, y+15*siz, x+40*siz, y+45*siz);
            txLine(x+30*siz, y+15*siz, x+30*siz, y+45*siz);
            txLine(x+20*siz, y+30*siz, x+30*siz, y+30*siz);
            x+=60*siz;
        }
        x=c;
        y+=70*siz;
    }
}
void paintBus(int x, int y, int different, int siz)
{
    if (different==0)
    {
        txSetColour (TX_BLACK);
        txSetFillColour (TX_ORANGE);
        txRectangle (x,y,x+120*siz,y+50*siz);
        txSetFillColour(RGB(235, 111, 16));
        txRectangle (x+73*siz,y+15*siz,x+89*siz,y+50*siz);
        txSetFillColour (RGB(16, 176, 235));
        txRectangle (x+75*siz,y+17*siz,x+87*siz,y+31*siz);
        txSetFillColour(TX_BLACK);
        txCircle (x+20*siz, y+50*siz, 13*siz-2);
        txCircle (x+100*siz, y+50*siz, 13*siz-2);
        txSetFillColour(TX_WHITE);
        txCircle (x+20*siz, y+50*siz, 7*siz-2);
        txCircle (x+100*siz, y+50*siz, 7*siz-2);
        txSetFillColour (RGB(16, 176, 235));
        txRectangle (x+5*siz,y+10*siz,x+35*siz,y+33*siz);
        txRectangle (x+40*siz,y+10*siz,x+70*siz,y+33*siz);
        txRectangle (x+110*siz,y+10*siz,x+120*siz,y+33*siz);
        txSetFillColour(RGB(234, 255, 0));
        txRectangle (x+115*siz,y+40*siz,x+120*siz,y+45*siz);
        txSetColour(TX_BLACK);
    }
    else
    {
        txSetColour (TX_BLACK);
        txSetFillColour (TX_ORANGE);
        txRectangle (x,y,x-120*siz,y+50*siz);
        txSetFillColour(RGB(235, 111, 16));
        txRectangle (x-73*siz,y+15*siz,x-89*siz,y+50*siz);
        txSetFillColour (RGB(16, 176, 235));
        txRectangle (x-75*siz,y+17*siz,x-87*siz,y+31*siz);
        txSetFillColour(TX_BLACK);
        txCircle (x-20*siz, y+50*siz, 13*siz-2);
        txCircle (x-100*siz, y+50*siz, 13*siz-2);
        txSetFillColour(TX_WHITE);
        txCircle (x-20*siz, y+50*siz, 7*siz-2);
        txCircle (x-100*siz, y+50*siz, 7*siz-2);
        txSetFillColour (RGB(16, 176, 235));
        txRectangle (x-5*siz,y+10*siz,x-35*siz,y+33*siz);
        txRectangle (x-40*siz,y+10*siz,x-70*siz,y+33*siz);
        txRectangle (x-110*siz,y+10*siz,x-120*siz,y+33*siz);
        txSetFillColour(RGB(234, 255, 0));
        txRectangle (x-115*siz,y+40*siz,x-120*siz,y+45*siz);
        txSetColour(TX_BLACK);
    }
}
void paintTree(int x, int y, int siz)
{
    int c=x, b=y;
    txSetColor (TX_LIGHTGREEN, siz+1);
    txSetFillColor (TX_LIGHTGREEN);
    for (int a=1; a<=3; a++)
    {
        txCircle (x-7*siz, y+10*siz, 15*siz);
        x+=7*siz;
        if (a==1)
        {
            y-=10*siz;
        }
        else
        {
            y+=5*siz;
        }
    }
    txSetColor (TX_BROWN, siz+3);
    txLine(c-7*siz, b+10*siz, c, b+30*siz);
    txLine(c, b, c, b+50*siz);
    txLine(c+7*siz, b+5*siz, c, b+15*siz);
}
void paintOblake(int x, int y, int siz)
{
    txSetFillColour(TX_WHITE);
    txSetColor(TX_WHITE);
    txCircle (x+35*siz, y+15*siz, 22);
    txCircle (x-5*siz, y+12.5*siz, 17);
    txCircle (x-40*siz, y+13.5*siz, 15);
    txCircle (x+15*siz, y, 30);
}
