#ifndef PANEL_H_INCLUDED
#define PANEL_H_INCLUDED
/**
*�������Ķ����ļ�
*/

#include "WinAplHelper.h"
/**
*������嶨��
*/
typedef struct _base_psnel{
    int x;//x ����
    int y;//y ����
    int width;//���
    int height;//�߶�
    char hLetter;//�����ַ�
    char vLetter;//�����ַ�
    int color;//ǰ��ɫ
    int bgcolor;//����ɫ
}Panel;
/**
*���ĳ�ʼ������
*/
Panel* panelInit();
/**
*���Ļ��ƺ���
*��Ҫ�����Ƶ����
*/
void drawPanel(Panel* panel);

#endif // PANEL_H_INCLUDED
