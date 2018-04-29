#include<stdio.h>
#include <iostream>
#include <cstdlib>
#pragma warning(disable:4996)
#include<time.h>
#include <windows.h>
#define ROW 11
#define COL 11
#define DEFAULT 10

using namespace std;

void menu();
void init_board(char mine[ROW][COL], char show[ROW][COL]);  //初始化棋盘
void display_board(char show[ROW][COL]);                    //打印棋盘
void set_mine(char mine[ROW][COL]);                         //布雷
int get_mine(char mine[ROW][COL], int x, int y);            //统计该位置周围雷的个数
void mine_sweep(char mine[ROW][COL], char show[ROW][COL]);   //扫雷
void game();                                                 //玩游戏
int main()
{
    int input = 1;
    menu();
     while (input)
    {
        printf("请选择：\n");
        scanf("%d", &input);
        switch (input)
        {
        case 0:
            printf("退出程序\n");
            break;
        case 1:
            game();
            break;
        default:
            printf("错误指令请重新选择：\n");
            break;
        }
    }
    system("pause");
    return 0;
}
void menu()
{
    printf("###########扫雷#########\n");
    printf("####0：start||1:exit####\n");
    printf("########################\n");
}
void init_board(char mine[ROW][COL], char show[ROW][COL])
{
    int i = 0;
    int j = 0;
    for (i = 1; i < ROW - 1; i++)
    {
        for (j = 1; j < COL - 1; j++)
        {
            mine[i][j] = '0';
        }
    }
    for (i = 1; i < ROW - 1; i++)
    {
        for (j = 1; j < COL - 1; j++)
        {
            show [i][j] = '*';
        }
    }
}
void display_board(char show[ROW][COL])
{
    int i, j;
    printf("  ");
    for (i = 1; i < COL - 1; i++)
        printf("%d ", i);
    printf("\n");
    for (i = 1; i < ROW - 1; i++)
    {
        printf("%d ", i);
        for (j = 1; j < COL - 1; j++)
        {
            printf("%c ", show[i][j]);
        }
        printf("\n");
    }
}
void set_mine(char mine[ROW][COL])
{
    int x = 0;
    int y = 0;
    int count = DEFAULT;
    srand((unsigned)time(NULL));
    while (count)
    {
        x = rand() % (ROW-2) + 1;
        y = rand() % (COL-2) + 1;
        if (mine[x][y] == '0')
        {
            mine[x][y] = '1';
            count--;
        }
    }
}
int get_mine(char mine[ROW][COL], int x, int y)
{
    int count = 0;
    if (mine[x - 1][y - 1] == '1')
        count++;
    if (mine[x - 1][y] == '1')
        count++;
    if (mine[x-1][y + 1] == '1')
        count++;
    if (mine[x][y - 1] == '1')
        count++;
    if (mine[x ][y + 1] == '1')
        count++;
    if (mine[x + 1][y - 1] == '1')
        count++;
    if (mine[x + 1][y] == '1')
        count++;
    if (mine[x + 1][y + 1] == '1')
        count++;
    return count;
}
void mine_sweep(char mine[ROW][COL], char show[ROW][COL])
{
    int x = 0;
    int y = 0;
    int count = 0;
    while (count != (ROW - 2)*(COL - 2) - DEFAULT)
    {
        printf("请输入坐标ROW（1-9）COL（1-9）：");
            scanf("%d%d", &x, &y);
        if (mine[x][y] == '1')
        {
            printf("踩到雷了：\n");
            printf("雷在棋盘的位置：\n");
            display_board(mine);
            return;
        }
        else
        {
            int ret = get_mine(mine, x, y);
            show[x][y] = ret + '0';
            display_board(show);
        }
    }
    printf("扫雷成功\n");
}
void game()
{
    char mine[ROW][COL];
    char show[ROW][COL];
    init_board(mine, show);
    display_board(show);
    set_mine(mine);
    mine_sweep(mine, show);
}
