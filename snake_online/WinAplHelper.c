#include "WinAplHelper.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>

void setTitle(char* title)
{
    SetConsoleTitle(TEXT(title));//����ת����ʽ/GBK��
}
///��ʾȫ�ֵĴ�����
HANDLE std_win_handle = 0;


/**
*
*��ȡ��׼��������
*/
void setWinHandle()
{
    if(std_win_handle == 0){
        std_win_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    }
}

/**
*
*���ô���ߴ���Ҫʹ��setWindowInfoʵ�֣�����Ҫ����ľ��
*/
void setWinSize(int width, int height)
{
    SMALL_RECT rect  = {0,0,width-1,height-1};//���ô����С�����-�յ㣩��ǰ��λ����ʾ���꣬����ǿ�Ⱥͳ��ȣ�ͨ����һ
    COORD coord = {width,height};//������������
    setWinHandle();//���������Ϊ������һ��size��ʹ�ã����������
    SetConsoleScreenBufferSize(std_win_handle,coord);//���û�����
    SetConsoleWindowInfo(std_win_handle,TRUE,&rect);//���ô����С
}

/**
*
*
*����λ������
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
*���ô��������ֵ���ɫ
*/
void setColor(int color)
{
    setWinHandle();
    SetConsoleTextAttribute(std_win_handle,color);
}
/**
*����
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
*����
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
*�����ı���
*/
void printText(char *txt,int size)
{
    char format[30] = "%-";
    char sizebuf[5];
    itoa(size,sizebuf,10);
    strcat(format,sizebuf);//ƴ���ַ���
    strcat(format,"s");
    printf(format,txt);
}

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
*�Ӽ����϶�ȡһ���ַ�
*/
char readChar()
{
    char rech = 0;//���ص��ַ�
    if(kbhit())
    {
        rech = getch();
    }
    return rech;
}





