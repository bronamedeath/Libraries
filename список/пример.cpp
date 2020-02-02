#include "listlib.H"

int main()
{
     txCreateWindow (800, 600);
     paintList(5,100,100,500,500);
     textButton("text","gg","6");// вводим строки списка
     while(true)
     {
       checkList();//проверяеи какая строка списка нажата
       paintList(5,100,100,500,500);
       txClear;
       if(returnList() == 1)//
       {
      txSetFillColor(RGB(100,0,0));
    txRectangle(500,100,600,200);
       }
       if(returnList() == 2)
       {
      txSetFillColor(RGB(0,100,0));
    txRectangle(500,100,600,200);
       }
       if(returnList() == 3)
       {
      txSetFillColor(RGB(0,0,100));
    txRectangle(500,100,600,200);
       }
       if(returnList() == 4)
       {
      txSetFillColor(RGB(100,100,0));
    txRectangle(500,100,600,200);
       }
       if(returnList() == 5)
       {
      txSetFillColor(RGB(100,0,100));
    txRectangle(500,100,600,200);
       }
       if(returnList() == 0)
       {
      txSetFillColor(RGB(0,0,0));
    txRectangle(500,100,600,200);
       }
       txSleep(20);
     }
}
