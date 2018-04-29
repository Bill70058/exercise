#ifndef WINAPLHELPER_H_INCLUDED
#define WINAPLHELPER_H_INCLUDED
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



/**
*
*���ô���ı���
*/
 void setTitle(char* title);
 /**
 *���ô����С
 *��ȣ��߶�
 */
 void setWinSize(int width, int height);

 /**
 *
 *���ÿ���̨�У�����λ��
 */
 void setCurrsorposition(int x,int y);
 /**
*
*
*���ô��������ֵ���ɫ
*/
void setColor(int color);

/**
*���ƺ���
*x ����
*y ����
*  ��ɫ
*  �ַ�
*  ����
*/
void drawHLine(int x,int y,int color,int letter,int len);

/**
*��������
*x ����
*y ����
*  ��ɫ
*  �ַ�
*  ����
*/
void drawVLine(int x,int y,int color,int letter,int len);

/**
*
*�ı����
*
*/
void printText(char* txt,int size);

/**
*
*�ַ����
* x ����
* y ����
* color ��ɫ
* letter �ַ�
* width ���
* height �߶�
*/
void fillText(int x,int y,int color,int letter,int width,int height);

/**
*
*�Ӽ����϶�ȡһ���ַ�
*/
char readChar();





#endif // WINAPLHELPER_H_INCLUDED
