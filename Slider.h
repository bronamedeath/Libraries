#include "TXlib.h"
/** @defgroup Рисовка*/

/**
    @ingroup Рисовка
    @brief Данная библиотека может создать слайдер, благодаря которому вы сможете изменять значение вашей переменной во время работы вашей программы!
    @version 1.0
    @warning Для того, чтобы связать слайдер с вашей переменной, вы должны написать следующее: "Ваша переменная" = slider(x, y, quantity, "ваша переменная", scale);
    @warning 1-ое: используйте метод только в бесконечном цикле while с командами txClear() и txSleep()
    @warning 2-ое: для нормальной работы слайдера начальное значение вашей переменной должно равняться 1
    @param "double x" начальные X-координаты объекта
    @param "double y" начальные Y-координаты объекта
    @param "double quantity" количество делений слайдера
    @param "int value" данный параметр берет значение вашей переменной, чтобы далее использовать в библиотеке
    @param "double scale" масштаб
*/

/** @brief Наглядный пример:
    @code
    #include "Slider.h"

    int main()
    {
        txCreateWindow (800, 600);
        txSetColor (TX_WHITE);
        txClear ();
        txSetColor (TX_BLACK);

        int okay = 1;
        while(TRUE)
        {
            okay = slider(140, 300, 9, okay, 1);
            char str[17];
            itoa(okay, str, 10);
            txTextOut(400, 150, str);
            txSleep(150);
            txClear();
        }
    }
    @endcode
*/

int slider(double x, double y, double quantity, int value, double scale)
{
    double coord = 50,
        xArrow1 = x + 75*scale,
        xArrow2 = x + 85*scale,
        xArrow3 = x + 65*scale,
        yArrow1 = y + 35*scale,
        yArrow2 = y + 45*scale;

        //Рисовка первой кнопки
        txRectangle(x, y, x + 50*scale, y + 50*scale);
        POINT coordArrowButton1[3] = {{x + 10*scale, y + 10*scale},{x + 40*scale, y + 25*scale},{x + 10*scale, y + 40*scale}};
        txPolygon(coordArrowButton1, 3);

        //Рисовка стрелки-показателя
        xArrow1 = xArrow1 + (50*(value - 1)*scale);
        xArrow2 = xArrow2 + (50*(value - 1)*scale);
        xArrow3 = xArrow3 + (50*(value - 1)*scale);
        POINT coordArrow[3] = {{xArrow1, yArrow1}, {xArrow2, yArrow2}, {xArrow3, yArrow2}};
        txPolygon(coordArrow, 3);

        //Рисовка показателей
        for(int i = 0; i < quantity; i++)
        {
            txLine(x + coord*scale, y, x + (coord + 50)*scale, y);
            txLine(x + coord*scale, y + 50*scale, x + (coord + 50)*scale, y + 50*scale);
            txLine(x + (coord + 25)*scale, y + 10*scale, x + (coord + 25)*scale, y + 30*scale);
            coord = coord + 50;
        }
        coord = coord - 50*quantity*scale;

        //Рисовка второй кнопки
        txRectangle(x + 50*(quantity + 1)*scale, y, x + (50*(quantity + 1) + 50)*scale, y + 50*scale);
        POINT coordArrowButton2[3] = {{x + (50*(quantity + 1) + 10)*scale, y + 25*scale}, {x + (50*(quantity + 1) + 40)*scale, y + 10*scale}, {x + (50*(quantity + 1) + 40)*scale, y + 40*scale}};
        txPolygon(coordArrowButton2, 3);

        //Действие первой кнопки
        if((txMouseX() > x) and (txMouseX() < (x + 50*scale)) and (txMouseY() > y) and (txMouseY() < (y + (50*scale))) and (txMouseButtons() & 1))
        {
            value = value + 1;
            if(value > quantity)
            {
                txMessageBox("You have reached the maximum! No more!", "Developer reports");
                value = value - 1;
            }
        }

        //Действие второй кнопки
        if((txMouseX() > (x + 50*(quantity + 1)*scale)) and (txMouseX() < (x + (50*(quantity + 1) + 50)*scale)) and (txMouseY() > y) and (txMouseY() < (y + (50*scale))) and (txMouseButtons() & 1))
        {
            value = value - 1;
            if (value < 1)
            {
                txMessageBox("You have reached the minimum! You can`t do less!", "Developer reports");
                value = value + 1;
            }
        }
        return value;
}
