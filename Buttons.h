#include "TXLib.h"

/*!
	Function for drawing an ordinary rectangular button.
*/
void paintButton(int x, int y, int size_, int RGBline, int RGBfill)
{
    txSetColor(RGBline, 3);
    txSetFillColor(RGBfill);
    txRectangle(x, y, x+100*size_, y+40*size_);
    }

/*!
	Function for drawing a rectangular button with Christmas trees.
*/
void paintButtonChristmasTree(int x, int y)
{
    txSetColor(RGB(0, 51, 51), 3);
    txSetFillColor(RGB(153, 255, 255));
    txRectangle(x, y, x+200, y+80);
    txSetColor(RGB(102, 51, 0));
    txSetFillColor(RGB(153, 51, 0));
    txRectangle(x+30, y+60, x+40, y+70); //1 ñòâîë
    txRectangle(x+160, y+60, x+170, y+70); //2 ñòâîë
    txSetColor(RGB(0, 153, 0), 3);
    txLine(x+25, y+40, x+45, y+40); //1 ìàäåíüêèé òðåóãîëüíèê
    txLine(x+45, y+40, x+35, y+30);
    txLine(x+35, y+30, x+25, y+40);
    txLine(x+20, y+60, x+50, y+60); //1 áîëüøîé òðåóãîëüíèê
    txLine(x+50, y+60, x+35, y+40);
    txLine(x+35, y+40, x+20, y+60);
    txLine(x+155, y+40, x+175, y+40); //2 ìàëåíüêèé òðåóãîëüíèê
    txLine(x+175, y+40, x+165, y+30);
    txLine(x+165, y+30, x+155, y+40);
    txLine(x+150, y+60, x+180, y+60); //2 áîëüøîé òðåóãîëüíèê
    txLine(x+180, y+60, x+165, y+40);
    txLine(x+165, y+40, x+150, y+60);
    txSetFillColor(RGB(51, 204, 0));
}

/*!
	Function for drawing a button in the form of a Christmas tree decoration.
*/
void paintButtonChristmasBall(int x, int y)
{
    txSetColor(RGB(153, 0, 0), 3);
    txSetFillColor(RGB(255, 51, 51));
    txCircle(x, y, 60);
    txSetColor(RGB(255, 153, 51), 3);
    txLine(x-10, y-58, x+10, y-58);
    txLine(x+10, y-58, x+7, y-70);
    txLine(x+7, y-70, x-7, y-70);
    txLine(x-7, y-70, x-10, y-58);
    txLine(x, y-70, x, y-90);
    txSetColor(TX_WHITE);
    txLine(x-50, y-15, x+50, y-15);
    txLine(x-50, y+15, x+50, y+15);
}

/*!
	Function for drawing a rectangular button with shadow.
*/
void paintButtonWithShadow(int x, int y, int size_, int RGBshadow, int RGBfill)
{
    txSetColor(RGBshadow);
    txSetFillColor(RGBshadow);
    txRectangle(x+10*size_, y+10*size_, x+110*size_, y+50*size_);
    txSetColor(RGBfill);
    txSetFillColor(RGBfill);
    txRectangle(x, y, x+100*size_, y+40*size_);
    }

/*!
	Function for drawing an ordinary oval button.
*/
void paintButtonEllipse(int x, int y, int size_, int RGBline, int RGBfill)
{
    txSetColor(RGBline, 3);
    txSetFillColor(RGBfill);
    txEllipse(x, y, x+100*size_, y+40*size_);
    }

/*!
	Function for drawing an oval button.
*/
void paintBeautifulButtonEllipse(int x, int y, int size_, int RGBback, int RGBfront)
{
    txSetColor(RGBback);
    txSetFillColor(RGBback);
    txEllipse(x, y, x+200*size_, y+80*size_);
    txSetColor(RGBfront);
    txSetFillColor(RGBfront);
    txEllipse(x+10*size_, y+10*size_, x+190*size_, y+70*size_);
    txSetColor(RGBback);
    txSetFillColor(RGBback);
    txCircle(x+45*size_, y+40*size_, 5*size_);
    txCircle(x+155*size_, y+40*size_, 5*size_);
    }

/*!
	Function for drawing a parallelepiped button.
*/
void paintVolumetricButton(int x, int y, int size_, int RGBline, int RGBfill)
{
    txSetColor(RGBline, 3);
    txSetFillColor(RGBfill);
    txRectangle(x, y, x+200*size_, y+80*size_);
    txLine(x, y, x+40*size_, y-20*size_);
    txLine(x+40*size_, y-20*size_, x+240*size_, y-20*size_);
    txLine(x+240*size_, y-20*size_, x+200*size_, y);
    txLine(x+240*size_, y-20*size_, x+240*size_, y+60*size_);
    txLine(x+240*size_, y+60*size_, x+200*size_, y+80*size_);
    txFloodFill(x+40*size_, y-10*size_);
    txFloodFill(x+210*size_, y);
    }

/*!
	Function for drawing a volumetric button in the form of an arrow.
*/
void paintVolumetricButtonArrow(int x, int y, int size_, int RGBline, int RGBtop, int RGB1side, int RGB2side)
{
    txSetColor(RGBline);
    txLine(x, y, x+80*size_, y);
    txLine(x+80*size_, y, x+100*size_, y+20*size_);
    txLine(x+100*size_, y+20*size_, x+60*size_, y+40*size_);
    txLine(x+60*size_, y+40*size_, x-20*size_, y+40*size_);
    txLine(x-20*size_, y+40*size_, x, y);
    txLine(x-20*size_, y+40*size_, x-20*size_, y+50*size_);
    txLine(x+60*size_, y+40*size_, x+60*size_, y+50*size_);
    txLine(x+100*size_, y+20*size_, x+100*size_, y+30*size_);
    txLine(x-20*size_, y+50*size_, x+60*size_, y+50*size_);
    txLine(x+60*size_, y+50*size_, x+100*size_, y+30*size_);
    txSetFillColor(RGBtop);
    txFloodFill(x+5*size_, y+5*size_);
    txSetFillColor(RGB1side);
    txFloodFill(x, y+45*size_);
    txSetFillColor(RGB2side);
    txFloodFill(x+67*size_, y+45*size_);
    }

/*!
	Function for drawing a button with a shadow.

	When you hover over a button with a computer mouse, the button swaps with a shadow.
*/
void paintPushButton(int x, int y, int size_, int RGBshadow, int RGBfill)
{
    RECT area= {x, y, x+200*size_, y+80*size_};
        if(In(txMousePos(), area))
        {
            txBegin();
            txSetColor(RGBshadow);
            txSetFillColor(RGBshadow);
            txRectangle(x, y, x+200*size_, y+80*size_);
            txSetColor(RGBfill);
            txSetFillColor(RGBfill);
            txRectangle(x-20*size_, y-20*size_, x+180*size_, y+60*size_);
            txEnd();
        }

        else
        {
            txBegin();
            txSetColor(RGBshadow);
            txSetFillColor(RGBshadow);
            txRectangle(x-20*size_, y-20*size_, x+180*size_, y+60*size_);
            txSetColor(RGBfill);
            txSetFillColor(RGBfill);
            txRectangle(x, y, x+200*size_, y+80*size_);
            txEnd();
        }
}

/*!
	Function for drawing a button in the form of a parallelogram.

	When you hover a mouse over a button, it changes color.
*/
void paintColorChangingParallelogramButton(int x, int y, int size_, int RGBline1, int RGBfill1, int RGBline2, int RGBfill2, int RGBtext, int RGBtext2, char* text)
{
    RECT areaRed= {x-20*size_, y, x+80*size_, y+50*size_};

        if(In(txMousePos(), areaRed))
        {
            txBegin();
            txSetColor(RGBline1);
            txLine(x, y, x+100*size_, y);
            txLine(x+100*size_, y, x+80*size_, y+50*size_);
            txLine(x+80*size_, y+50*size_, x-20*size_, y+50*size_);
            txLine(x, y, x-20*size_, y+50*size_);
            txSetFillColor(RGBfill1);
            txFloodFill(x+10*size_, y+10*size_);
            txSetColor(RGBtext);
            int len = strlen(text);
            txTextOut(x+(40-2*len)*size_, y+50*size_/2-5, text);
            txEnd();
        }

        else
        {
            txBegin();
            txSetColor(RGBline2);
            txLine(x, y, x+100*size_, y);
            txLine(x+100*size_, y, x+80*size_, y+50*size_);
            txLine(x+80*size_, y+50*size_, x-20*size_, y+50*size_);
            txLine(x, y, x-20*size_, y+50*size_);
            txSetFillColor(RGBfill2);
            txFloodFill(x+10*size_, y+10*size_);
            txSetColor(RGBtext2);
            int len = strlen(text);
            txTextOut(x+(40-2*len)*size_, y+50*size_/2-5, text);
            txEnd();
        }
}
