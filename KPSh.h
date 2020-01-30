#include <_mingw.h>
#include <txlib.h>

/** @defgroup Painting */

/**
 @ingroup Painting
 @brief This method generate pretty Christmas Tree on coordinates. You can change colors of every element in this object.
 @param "int x" - started X-coordinate of object
 @param "int y" - started Y-coordinate of object
 @param "double m" - scale of object
 @param  "COLORREF trunk" - color of tree's trunk
 @param  "COLORREF leaf" - color of tree's leafs
 @param  "COLORREF oneChristmasBall" - color of one of Christmas Balls
 @param  "COLORREF twoChristmasBall" - color of one of Christmas Balls
 @param  "COLORREF garland" - color of garland
*/
void CreateYolka(int x, int y, double m,
                  COLORREF trunk, COLORREF leaf, COLORREF oneChristmasBall, COLORREF twoChristmasBall, COLORREF garland){

    txSetColour(TX_WHITE);
    txSetFillColour(trunk);
   txRectangle (x+70*m, y+230*m, x+120*m, y+210*m);
   txRectangle (x+60*m, y+210*m, x+130*m, y+200*m);
   txSetFillColour(leaf);
   txRectangle (x, y+200*m, x+190*m, y+180*m);
    txRectangle (x+10*m, y+180*m, x+180*m, y+160*m);
    txRectangle (x+20*m, y+160*m, x+170*m, y+140*m);
    txRectangle (x+30*m, y+140*m, x+160*m, y+120*m);
    txRectangle (x+40*m, y+120*m, x+150*m, y+100*m);
    txRectangle (x+50*m, y+100*m, x+140*m, y+80*m);
    txRectangle (x+60*m, y+80*m, x+130*m, y+60*m);
    txRectangle (x+70*m, y+60*m, x+120*m, y+40*m);
    txRectangle (x+80*m, y+40*m, x+110*m, y+30*m);
    txSetFillColour(oneChristmasBall);
    txRectangle (x+30*m, y+180*m, x+40*m, y+170*m);
    txRectangle (x+140*m, y+200*m, x+150*m, y+190*m);
    txRectangle (x+90*m, y+160*m, x+100*m, y+150*m);
    txRectangle (x+130*m, y+140*m, x+140*m, y+130*m);
    txRectangle (x+70*m, y+100*m, x+80*m, y+90*m);
    txRectangle (x+90*m, y+60*m, x+100*m, y+50*m);
    txSetFillColour(garland);
    txRectangle (x+60*m, y+190*m, x+70*m, y+180*m);
    txRectangle (x+10*m, y+180*m, x+20*m, y+170*m);
    txRectangle (x+170*m, y+170*m, x+180*m, y+160*m);
    txRectangle (x+120*m, y+160*m, x+130*m, y+150*m);
    txRectangle (x+60*m, y+150*m, x+70*m, y+140*m);
    txRectangle (x+140*m, y+130*m, x+150*m, y+120*m);
    txRectangle (x+50*m, y+120*m, x+60*m, y+110*m);
    txRectangle (x+40*m, y+110*m, x+50*m, y+100*m);
    txRectangle (x+90*m, y+110*m, x+100*m, y+100*m);
    txRectangle (x+60*m, y+80*m, x+70*m, y+70*m);
    txRectangle (x+110*m, y+50*m, x+120*m, y+40*m);
    txRectangle (x+90*m, y+30*m, x+100*m, y);
    txRectangle (x+80*m, y+20*m, x+110*m, y+10*m);
    txSetFillColour(twoChristmasBall);
    txRectangle (x+30*m, y+150*m, x+40*m, y+140*m);
    txRectangle (x+40*m, y+160*m, x+50*m, y+150*m);
    txRectangle (x+50*m, y+170*m, x+80*m, y+160*m);
    txRectangle (x+80*m, y+180*m, x+130*m, y+170*m);
    txRectangle (x+130*m, y+170*m, x+150*m, y+160*m);
    txRectangle (x+150*m, y+160*m, x+160*m, y+150*m);
    txRectangle (x+160*m, y+150*m, x+170*m, y+140*m);
    txRectangle (x+40*m, y+130*m, x+50*m, y+120*m);
    txRectangle (x+50*m, y+140*m, x+80*m, y+130*m);
    txRectangle (x+80*m, y+130*m, x+100*m, y+120*m);
    txRectangle (x+100*m, y+120*m, x+120*m, y+110*m);
    txRectangle (x+120*m, y+110*m, x+130*m, y+100*m);
    txRectangle (x+130*m, y+100*m, x+140*m, y+90*m);
    txRectangle (x+70*m, y+60*m, x+80*m, y+50*m);
    txRectangle (x+80*m, y+70*m, x+90*m, y+60*m);
    txRectangle (x+90*m, y+80*m, x+130*m, y+70*m);
}


/**
 @ingroup Painting
 @brief This method create cloud, you can change color of this object.
 @param "int x" - started X-coordinate of object
 @param "int y" - started Y-coordinate of object
 @param "double m" - scale of object
 @param "COLORREF down" - color of downside of cloud, like shadow
 @param "COLORREF up" - color of upside of cloud, sunlight side
 @param "COLORREF face" - color of eyes and month
*/
void CreateOblako (int x, int y, double m, COLORREF  down, COLORREF  up, COLORREF face){
    txSetColour (TX_NULL);
    txSetFillColour (up);
       txRectangle (x+50*m, y+10*m, x+80*m, y+0*m);
        txRectangle (x+40*m, y+20*m, x+90*m, y+8*m);
        txRectangle (x+100*m, y+20*m, x+140*m, y+10*m);
        txRectangle (x+30*m, y+100*m, x+152*m, y+18*m);
        txRectangle (x+20*m, y+100*m, x+32*m, y+38*m);
        txRectangle (x+10*m, y+100*m, x+22*m, y+48*m);
        txRectangle (x+0*m, y+90*m, x+12*m, y+68*m);
        txRectangle (x+50*m, y+110*m, x+152*m, y+98*m);
        txRectangle (x+150*m, y+100*m, x+162*m, y+28*m);
        txRectangle (x+160*m, y+100*m, x+182*m, y+58*m);
        txRectangle (x+180*m, y+90*m, x+192*m, y+78*m);
        txSetFillColour (down);
        txRectangle (x+0*m, y+100*m, x+12*m, y+88*m);
        txRectangle (x+10*m, y+110*m, x+52*m, y+98*m);
        txRectangle (x+150*m, y+110*m, x+182*m, y+98*m);
        txRectangle (x+180*m, y+100*m, x+192*m, y+88*m);
        txRectangle (x+30*m, y+120*m, x+172*m, y+108*m);
        txSetFillColour (face);
        txRectangle (x+50*m, y+80*m, x+62*m, y+48*m);
        txRectangle (x+100*m, y+80*m, x+112*m, y+48*m);
        txRectangle (x+70*m, y+100*m, x+92*m, y+88*m);
}



