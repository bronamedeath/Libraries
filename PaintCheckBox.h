#include <wingdi.h>
/**
*\brief Checkbox in the form of a square
*\param[in] beginingX Starting coordinate on the OX
*\param[in] beginingY Starting coordinate on the OY
*\param[in] storona Height and width(i.e. square) of the Check box
*\param[in] type Check box filling type: 0-cross, 1-tick
*
* This function allows you to draw a checkbox in the form of a square and use it to approve or deny something.
*/
int paintCheakBoxSquare(int beginingX, int beginingY, int storona, int RGBoutline, int RGBfilling, bool type)
{
    txSetColour(RGBoutline);
    txSetFillColour(RGBfilling);
    txRectangle(beginingX, beginingY, beginingX + storona, beginingY + storona);
    RECT area = {beginingX, beginingY, beginingX + storona, beginingY + storona};
     while (txMouseButtons() != 3)
    {
        if (txMouseButtons() & 1)
        {
            if(In(txMousePos(), area))
                {
                    if (type == 1)
                    {
                        txSetColour(TX_BLACK);
                        txLine(beginingX, beginingY + (storona/3), beginingX+(storona/2), beginingY+storona);
                        txLine(beginingX+(storona/2), beginingY + storona, beginingX+storona, beginingY);
                    }
                    if (type == 0)
                    {
                        txSetColour(TX_BLACK);
                        txLine(beginingX, beginingY, beginingX + (storona/2), beginingY + (storona/2));
                        txLine(beginingX + (storona/2), beginingY + (storona/2), beginingX + storona, beginingY);
                        txLine(beginingX + (storona/2), beginingY + (storona/2), beginingX, beginingY + storona);
                        txLine(beginingX + (storona/2), beginingY + (storona/2), beginingX + storona, beginingY + storona);
                    }
                }
        }
    }

}
/**
*\brief Checkbox in the form of a circle
*\param[in] beginingX Starting coordinate on the OX
*\param[in] beginingY Starting coordinate on the OY
*\param[in] radius The radius of the checkbox
*
* This function allows you to draw a checkbox in the form of a circle and use it to select this option or not.
*/
int paintCheakBoxCircle(int beginingX, int beginingY, int radius, int RGBoutline, int RGBfilling)
{
    txSetColour(RGBoutline);
    txSetFillColour(RGBfilling);
    txCircle (beginingX, beginingY, radius);
    RECT area = {beginingX-radius, beginingY-radius, beginingX + radius, beginingY + radius};
     while (txMouseButtons() != 3)
    {
        if (txMouseButtons() & 1)
        {
            if (In(txMousePos(), area))
            {
                txSetFillColour(TX_BLACK);
                txCircle(beginingX, beginingY, radius * 0.75);
            }

        }
    }

}
