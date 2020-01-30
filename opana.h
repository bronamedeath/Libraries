#include "TXLib.h"
#include <stdlib.h>
#include <cmath>
#include <iostream>
using namespace std;
///file opana.h
/**
It's very nice
*/
void line (double x, double y, double x1, double y1)
{
    cout << "Введите координаты начала и конца ";
    cin >> x >> y >> x1 >> y1;
    txLine (x, y, x1, y1);
}
void dottedLine (double x, double y, double x1, double y1, int dx, int dy, double distance, int quantity, double interval)
{
    cout << "Введите координаты начала и конца ";
    cin >> x >> y >> x1 >> y1;
    cout << "Ведите количество точек ";
    cin >> quantity;
    if (x>x1)
    {
        dx=x-x1;
    }
    else
    {
        dx=x1-x;
    }
    if (y>y1)
    {
        dy=y-y1;
    }
    else
    {
        dy=y1-y;
    }
    distance=sqrt(dx*dx + dy*dy);
    interval=distance/(quantity-1);
    for (distance=1; distance<=quantity; distance++)
    {
        txCircle (x, y, 3);
        x+=interval;
        y+=interval;
    }
}
void triangle (double x, double y, double x1, double y1, double x2, double y2)
{
    cout << "Введите координаты вершин ";
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;
    POINT triangle [3]={{x, y}, {x1, y1}, {x2, y2}};
    txPolygon (triangle, 3);
}
