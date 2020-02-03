void drawEnterTextButton(int x1, int y1, int x2, int y2)//рисование
{
    txSetFillColour(TX_WHITE);
    txSetColour(TX_BLACK,5);
    txRectangle(x1,y1,x1 + ((x2-x1)/10)*8,y2);
    txSetColour(TX_BLACK,5);
    txRectangle(x1 + ((x2-x1)/10)*8,y1,x2,y2);
    txSetFillColour(TX_BLACK);
    txSetColour(TX_BLACK,1);
    int x3 = x1 + ((x2-x1)*0.8);
    int r = (x2 - x3)/6;
    txCircle(x3 + r , y1 + (y2 - y1)/2, r);
    txCircle(x3 + 3*r, y1 + (y2 - y1)/2, r);
    txCircle(x3 + 5*r, y1 + (y2 - y1)/2, r);
}

const char* checkEnterTextButton(int x1, int y1, int x2, int y2,int font_size, const char* question, const char* caption)// проверка нажатия и ввод текста
{


          const char* name;
          name = txInputBox (question, caption);
          txSetColour(TX_BLACK,font_size);
          txTextOut(x1+2,y1+(y2-y1)/2,name);// удачи
          return name;
/*
    x1,y1,x2,y2 - координаты, font_size - размер шрифта, question - что в окошечке будет писаться как вопрос, caption - в заголовке что будет писаться
*/
}
