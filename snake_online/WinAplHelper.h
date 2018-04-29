#ifndef WINAPLHELPER_H_INCLUDED
#define WINAPLHELPER_H_INCLUDED
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



/**
*
*设置窗体的标题
*/
 void setTitle(char* title);
 /**
 *设置窗体大小
 *宽度，高度
 */
 void setWinSize(int width, int height);

 /**
 *
 *设置控制台中，光标的位置
 */
 void setCurrsorposition(int x,int y);
 /**
*
*
*设置窗体中文字的颜色
*/
void setColor(int color);

/**
*绘制横线
*x 坐标
*y 坐标
*  颜色
*  字符
*  长度
*/
void drawHLine(int x,int y,int color,int letter,int len);

/**
*绘制竖线
*x 坐标
*y 坐标
*  颜色
*  字符
*  长度
*/
void drawVLine(int x,int y,int color,int letter,int len);

/**
*
*文本输出
*
*/
void printText(char* txt,int size);

/**
*
*字符填充
* x 坐标
* y 坐标
* color 颜色
* letter 字符
* width 宽度
* height 高度
*/
void fillText(int x,int y,int color,int letter,int width,int height);

/**
*
*从键盘上读取一个字符
*/
char readChar();





#endif // WINAPLHELPER_H_INCLUDED
