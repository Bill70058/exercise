#ifndef PANEL_H_INCLUDED
#define PANEL_H_INCLUDED
/**
*基础面板的定义文件
*/

#include "WinAplHelper.h"
/**
*基础面板定义
*/
typedef struct _base_psnel{
    int x;//x 坐标
    int y;//y 坐标
    int width;//宽度
    int height;//高度
    char hLetter;//竖线字符
    char vLetter;//横线字符
    int color;//前景色
    int bgcolor;//背景色
}Panel;
/**
*面板的初始化函数
*/
Panel* panelInit();
/**
*面板的绘制函数
*需要背绘制的面板
*/
void drawPanel(Panel* panel);

#endif // PANEL_H_INCLUDED
