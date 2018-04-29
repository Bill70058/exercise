#include "ControlPanel.h"
#include <stdio.h>
#include <stdlib.h>


Panel* contorl_panel = NULL;

/**
*控制面板的实现
*/
void drawControlPanel()
{
    if(contorl_panel==NULL)
    {
        contorl_panel = panelInit();
        contorl_panel->x = 2;
        contorl_panel->y = 2;
        contorl_panel->width = 18;
        contorl_panel->height = 18;
        contorl_panel->color = 0xE;
        contorl_panel->bgcolor = 0x9;
    }
    drawPanel(contorl_panel);
}
