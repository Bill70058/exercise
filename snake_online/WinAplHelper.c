#include "WinAplHelper.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>

void setTitle(char* title)
{
    SetConsoleTitle(TEXT(title));//帮助转换格式/GBK等
}
///表示全局的窗体句柄
HANDLE std_win_handle = 0;


/**
*
*获取标准的输出句柄
*/
void setWinHandle()
{
    if(std_win_handle == 0){
        std_win_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    }
}

/**
*
*设置窗体尺寸需要使用setWindowInfo实现，还需要窗体的句柄
*/
void setWinSize(int width, int height)
{
    SMALL_RECT rect  = {0,0,width-1,height-1};//设置窗体大小（起点-终点），前两位数表示坐标，后边是宽度和长度，通常减一
    COORD coord = {width,height};//缓冲区的区域
    setWinHandle();//这个设置是为了在下一行size中使用，缓冲区句柄
    SetConsoleScreenBufferSize(std_win_handle,coord);//设置缓冲区
    SetConsoleWindowInfo(std_win_handle,TRUE,&rect);//设置窗体大小
}

/**
*
*
*光标的位置设置
*/
void setCurrsorposition(int x,int y)
{
    COORD pos = {x,y};
    setWinHandle();
    SetConsoleCursorPosition(std_win_handle,pos);
}
/**
*
*
*设置窗体中文字的颜色
*/
void setColor(int color)
{
    setWinHandle();
    SetConsoleTextAttribute(std_win_handle,color);
}
/**
*横线
*/
void drawHLine(int x,int y,int color,int letter,int len)
{
    setCurrsorposition(x,y);
    setColor(color);
    int i;
    for(i = 0; i < len;i++)
    {
        printf("%c", letter);
    }
}

/**
*竖线
*/
void drawVLine(int x,int y,int color,int letter,int len)
{
    setCurrsorposition(x,y);
    setColor(color);
    int i;
    for(i = 0; i < len;i++)
    {
        printf("%c",letter);
        setCurrsorposition(x,++y);
    }
}
/**
*输入文本流
*/
void printText(char *txt,int size)
{
    char format[30] = "%-";
    char sizebuf[5];
    itoa(size,sizebuf,10);
    strcat(format,sizebuf);//拼接字符串
    strcat(format,"s");
    printf(format,txt);
}

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
void fillText(int x,int y,int color,int letter,int width,int height)
{
    //setCurrsorposition(x,y);

    setWinHandle();
    int relen;
    int i;
    for(i = 0;i < height;i++)
    {
         COORD coord = {x,y++};
        FillConsoleOutputAttribute(std_win_handle,color,width,coord,&relen);

    }
}

/**
*
*从键盘上读取一个字符
*/
char readChar()
{
    char rech = 0;//返回的字符
    if(kbhit())
    {
        rech = getch();
    }
    return rech;
}





