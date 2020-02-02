
#include "TXLib.h"
#include "ButtonsWithText.h"
using namespace std;

int main()
{
    txCreateWindow(1300, 650);

    while(txMouseButtons() != 3)
    {
        txBegin();

        paintButton(20, 20, 2, RGB(0, 0, 153), RGB(0, 102, 255), RGB(255, 255, 255), "Spider man");

        paintButtonChristmasTree(600, 20);
        paintButtonChristmasBall(490, 140);

        paintButtonWithShadow(100, 205, 1, RGB(0, 102, 0), RGB(51, 255, 51), RGB(0, 0, 0), "cat");
        paintButtonWithShadow(235, 205, 2, RGB(153, 0, 0), RGB(255, 51, 51), RGB(255, 255, 255), "It is elephant.");

        paintButtonEllipse(785, 205, 1, RGB(255, 153, 0), RGB(255, 255, 0), RGB(0, 0, 0), "Music");
        paintButtonEllipse(995, 205, 2, RGB(153, 0, 102), RGB(255, 102, 255), RGB(0, 0, 0), "       PINK and PIG");

        paintBeautifulButtonEllipse(440, 450, 2, RGB(153, 0, 0), RGB(255, 51, 51), RGB(0, 0, 0), "      Infinity var");
        paintBeautifulButtonEllipse(845, 315, 1, RGB(102, 51, 0), RGB(255, 204, 51), RGB(0, 0, 0), "Stark");

        paintVolumetricButton(885, 425, 1, RGB(153, 0, 102), RGB(255, 102, 255), RGB(0, 0, 0), "LEGO world");

        paintColorChangingParallelogramButton(70, 330, 2, RGB(102, 0, 0), RGB(153, 0, 0), RGB(204, 0, 0), RGB(255, 51, 51), RGB(255, 255, 255), RGB(0, 0, 0), "T E X T");
        paintColorChangingParallelogramButton(70, 530, 2, RGB(204, 51, 102), RGB(204, 51, 102), RGB(204, 51, 153), RGB(204, 51, 153), RGB(255, 255, 255), RGB(0, 0, 0), "text");

        paintVolumetricButtonArrow(1150, 20, 1, RGB(51, 204, 204), RGB(204, 255, 255), RGB(102, 255, 255), RGB(153, 255, 255), RGB(0, 0, 0), "Loki");
        paintVolumetricButtonArrow(900, 20, 2, RGB(102, 204, 51), RGB(204, 255, 102), RGB(102, 255, 0), RGB(153, 255, 0), RGB(0, 0, 0), "      Avengers");

        paintPushButton(500, 255, 1, RGB(0, 0, 153), RGB(0, 102, 255), RGB(255, 255, 255), "IT");
        paintPushButton(500, 355, 1, RGB(153, 51, 51), RGB(204, 102, 102), RGB(0, 0, 0), "school");

        txEnd();
    }

    return 0;
}
