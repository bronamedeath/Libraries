#include "TXLib.h"
#include "PaintCheckBox.h"
#include "wingdi.h"

using namespace std;
int main()
{
    txCreateWindow (800, 600);
    txRectangle(0, 0, 800, 600);
    txSetFillColour(RGB(255, 255, 255));
    while (txMouseButtons() != 3)
    {
        txBegin();
        paintCheakBoxSquare(100, 100, 30, 1, RGB(255, 255, 0), RGB(0, 191, 255));
        paintCheakBoxCircle(200, 100, 30, RGB(255, 255, 0), RGB(0, 191, 255));
        txEnd();
    }
}
