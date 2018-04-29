#include "panel.h"
#include <stdio.h>
#include <stdlib.h>
/**
*��������ʵ���ļ�
*/


/**
*���ĳ�ʼ������
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
*���Ļ��ƺ���
*��Ҫ�����Ƶ����
*/
void drawPanel(Panel *panel)
{
    ///��������
    fillText(panel->x,panel->y,panel->bgcolor<<4|panel->color,' ', panel->width,panel->height);
    ///���߻���
    drawVLine(panel->x,panel->y,panel->bgcolor<<4|panel->color,panel->vLetter,panel->height);
    drawVLine(panel->x+panel->width-1,panel->y,panel->bgcolor<<4|panel->color,panel->vLetter,panel->height);
    ///���߻���
    drawHLine(panel->x,panel->y,panel->bgcolor<<4|panel->color,panel->hLetter,panel->width);
    drawHLine(panel->x,panel->y+panel->height,panel->bgcolor<<4|panel->color,panel->hLetter,panel->width);


}
