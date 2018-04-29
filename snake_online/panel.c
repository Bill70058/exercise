#include "panel.h"
#include <stdio.h>
#include <stdlib.h>
/**
*基础面板的实现文件
*/


/**
*面板的初始化函数
*/
Panel* panelInit()
{
    Panel* panel = (Panel*)malloc(sizeof(Panel));
    memset(panel,0,sizeof(Panel));
    panel->width = 5;
    panel->height = 5;
    panel->hLetter = '-';
    panel->vLetter = '|';
    panel->color = 0xF;
    panel->bgcolor = 0x0;
    return panel;
}

/**
*面板的绘制函数
*需要背绘制的面板
*/
void drawPanel(Panel *panel)
{
    ///背景绘制
    fillText(panel->x,panel->y,panel->bgcolor<<4|panel->color,' ', panel->width,panel->height);
    ///竖线绘制
    drawVLine(panel->x,panel->y,panel->bgcolor<<4|panel->color,panel->vLetter,panel->height);
    drawVLine(panel->x+panel->width-1,panel->y,panel->bgcolor<<4|panel->color,panel->vLetter,panel->height);
    ///横线绘制
    drawHLine(panel->x,panel->y,panel->bgcolor<<4|panel->color,panel->hLetter,panel->width);
    drawHLine(panel->x,panel->y+panel->height,panel->bgcolor<<4|panel->color,panel->hLetter,panel->width);


}
