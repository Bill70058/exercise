#include <stdio.h>
#include <stdlib.h>
#include "WinAplHelper.h"
#include "panel.h"
#include <windows.h>
#include <conio.h>
#include "control.h"

int main()
{
    /*
    Panel* panel = panelInit();
    panel->x = 3;
    panel->y = 3;
    panel->height = 12;
    panel->width = 30;
    panel->color = 0xE;
    drawPanel(panel);
    */
    drawControlPanel();
    getch();



    /*
    char rch = 0;
    for(;rch!= 'q';)
    {
        if(rch != 0)
        {
            printf("%c", rch);
        }
    }
    */





    /*
    setTitle("贪吃蛇-积木版");
    setWinSize(60,27);
    setCurrsorposition(10,10);//光标的设置
    setColor(0xFC);//颜色
    printf("snake");
    drawHLine(2,2,0x0E,'#',30);//横线
    drawVLine(2,2,0x0C,'+',8);//竖线
    setCurrsorposition(8,5);
    setColor(0xFC);
    printText("学", 6);
    fillText(3,3,0xF0,' ',10,10);
    */
    return 0;
}
