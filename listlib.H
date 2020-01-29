#include "TxLib.h"

struct Area
{
    RECT button;
    const char* text = " ";
    bool click = false;
};
Area List[50];


/**
 \brief draws a list
 \param[in] quantity number of lines
 \param[in] x1 top x coordinate
 \param[in] y1 left x coordinate
 \param[in] x2 lower x coordinate
 \param[in] y2 right x coordinate
 \param[in] color color of list
 \param[in] colorClick color of the button pressed
*/
void paintList(int quantity,int x1,int y1,int x2,int y2,COLORREF color = RGB(100,100,100),COLORREF colorClick = RGB(200,0,0))
{

    txSetFillColor(color);
    txRectangle(x1,y1,x2,y2);
    int raz = y2 - y1;
    int rast = raz / quantity;
    txSelectFont("Arial",20)	;
    for(int i = 0; i < quantity; i++)
    {
        List[i].button = {0,0,0,0};
        txLine(x1,y1 + rast * i,x2,y1 + rast * i);
        List[i].button = {x1,y1 + rast * i,x2,y1 + rast * i + rast};
        if(List[i].click == true)
        {
            txSetFillColor(colorClick);
            txRectangle(x1,y1 + rast * i,x2,y1 + rast * i + rast);
        }
         txDrawText(x1,y1 + rast * i,x2,y1 + rast * i + rast,List[i].text);
    }
}
/**
 \brief enter line text
*/
void textButton(const char* text1 = " ",const char* text2 = " ",const char* text3 = " ",const char* text4 = " ",const char* text5 = " ",const char* text6 = " ",const char* text7 = " ",const char* text8 = " ",const char* text9 = " ",const char* text10 = " ")
{

List[0].text = text1;
List[1].text = text2;
List[2].text = text3;
List[3].text = text4;
List[4].text = text5;
List[5].text = text6;
List[6].text = text7;
List[7].text = text8;
List[8].text = text9;
List[9].text = text10;
}
/**
 \brief checks which line is clicked on
*/
void checkList()
{
    for(int i = 0; i < 50; i++)
        if((txMouseButtons() & 1) && (In (txMousePos(), List[i].button)))
        {
            List[i].click = !List[i].click;
            for(int n = 0; n < 50; n++)
                if(!(n == i))
                {
                    List[n].click = false;
                }
        }
}
/**
 \brief returns the number of the pressed line or 0 when nothing is pressed
 \return line number; 0 when nothing is pressed
*/
int returnList()
{
    int ret = 0;
    for(int i = 0; i < 50; i++)
    {
        if  (List[i].click == true)
        {
            ret = i + 1;
        }

    }
    return ret;
}
/**
 \brief don't work
*/
void texttext(const char *text[],int quantity)
{
    for(int i;i<quantity;i++)
    {
     List[i].text = text[i];
    }
}
